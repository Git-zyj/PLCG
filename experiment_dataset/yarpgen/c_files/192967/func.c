/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192967
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
    var_19 = ((/* implicit */unsigned long long int) (-(max((max((-1588794174563170820LL), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((long long int) min((((/* implicit */long long int) arr_0 [i_0] [i_1 + 1])), ((-9223372036854775807LL - 1LL)))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] = ((/* implicit */signed char) min((-6035361168631571182LL), (((/* implicit */long long int) ((int) -6035361168631571182LL)))));
                    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(var_14))))) ^ (arr_1 [i_0] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_22 = ((((/* implicit */int) ((short) var_5))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [13LL] [2] [2])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_0] [i_0]))))) == (min((var_16), (((/* implicit */unsigned long long int) -6035361168631571182LL))))))));
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12059))));
                }
                var_24 = ((/* implicit */unsigned short) max((var_17), (((arr_8 [i_1 - 1] [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_8 [i_1 + 1] [i_0] [i_0] [i_1]))))));
                var_25 = ((/* implicit */signed char) -6035361168631571182LL);
            }
        } 
    } 
    var_26 = (+(((/* implicit */int) (signed char)10)));
}
