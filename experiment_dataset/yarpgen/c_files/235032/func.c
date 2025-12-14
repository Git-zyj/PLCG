/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235032
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
    var_14 |= ((/* implicit */signed char) (unsigned short)33267);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) arr_2 [i_1])))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0])))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_1]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_3 [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)59262)) > (((/* implicit */int) ((((/* implicit */int) (short)-10529)) <= (((/* implicit */int) ((signed char) 1060194133)))))))))));
}
