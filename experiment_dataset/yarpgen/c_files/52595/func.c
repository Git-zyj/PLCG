/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52595
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 |= ((/* implicit */unsigned char) (short)17394);
    var_16 = ((/* implicit */short) (+(var_3)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (arr_4 [i_1 + 1] [i_1 - 2]) : (arr_4 [i_1] [i_1 - 1]))), (max((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)31994))))), (arr_4 [i_0] [i_1]))))))));
                arr_5 [i_1] [i_0] [i_1] = arr_0 [i_0];
                arr_6 [i_1] [i_1] = ((/* implicit */short) min((min(((signed char)-121), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
}
