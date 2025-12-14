/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218427
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_17))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (unsigned char)75);
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_5)));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(120)))) / (-848331922731725300LL)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_0 [i_0]))));
                            var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), (arr_14 [i_0])))) ? (((((/* implicit */_Bool) arr_7 [(unsigned short)8] [(short)6] [i_4])) ? (18408743566921142155ULL) : (min((var_11), (((/* implicit */unsigned long long int) -143)))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_3])), (arr_1 [i_0] [i_4]))));
                            arr_16 [i_3] [i_3] [i_3] [i_4] [i_4] |= ((/* implicit */signed char) ((var_18) >= (((/* implicit */int) (unsigned char)110))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 &= var_5;
    var_27 |= var_6;
}
