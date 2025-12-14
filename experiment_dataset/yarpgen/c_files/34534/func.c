/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34534
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_2 [i_0]))))));
                var_12 = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 4160749568U))))), ((~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))), (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) arr_4 [6] [i_1]));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(((/* implicit */int) var_1)))))));
}
