/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217809
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
    var_20 += ((/* implicit */_Bool) 908095529);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_18)))) - (var_19))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49949))) + (8388607U))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min(((unsigned short)5973), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) var_1);
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_0 + 1] [i_1] [i_2] [i_2 - 1]);
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_9))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_0 + 1] [i_0 + 1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_5)))))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_1 + 1])) % (((/* implicit */int) (unsigned char)187))))), (min((((/* implicit */long long int) (unsigned short)23379)), (7401844995897462906LL))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1])), (var_15))))));
                var_25 = ((/* implicit */_Bool) min((var_25), ((_Bool)1)));
            }
        } 
    } 
}
