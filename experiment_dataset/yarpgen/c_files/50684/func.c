/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50684
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
    var_20 -= ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)123)) >= ((+(((/* implicit */int) var_11))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 ^= ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_2 + 1])) * ((+(((/* implicit */int) var_16))))))));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 510540087U);
                    var_22 |= ((/* implicit */short) (((!(((/* implicit */_Bool) (~(-1651841117)))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) / (var_13))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))))))) : (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) | (arr_6 [i_0] [18U]))), (((/* implicit */unsigned int) arr_5 [i_2 - 1] [i_2 - 1] [i_2])))))));
                    var_23 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_5 [i_2 - 1] [i_2] [i_2])), ((unsigned char)135))))))));
                    var_24 = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
}
