/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195638
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
    var_19 = ((/* implicit */unsigned char) max((min((var_5), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (var_3)))))), (((/* implicit */long long int) var_12))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_20 = arr_5 [i_1] [i_0];
                var_21 -= ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)74)), (-2500377768275278877LL)));
                var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4877622646566926787ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_2 + 1] [i_3 + 1] [i_3])) << (((((arr_17 [i_0] [i_2 - 2] [i_2 + 2] [i_3] [i_4]) + (1191520448713290378LL))) - (14LL)))));
                                var_24 |= ((((arr_16 [i_0]) + (arr_9 [i_4] [i_4]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_0] [i_0])) > (((/* implicit */int) arr_2 [i_0])))))));
                                arr_19 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4] [i_4] = arr_17 [5LL] [5LL] [i_2] [5LL] [i_2];
                                arr_20 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) arr_9 [i_0] [i_4]);
                                arr_21 [i_0] = ((/* implicit */_Bool) arr_3 [i_2 + 1]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_5 + 2] [i_5 - 2])) * (((/* implicit */int) min((arr_23 [i_5 - 2] [i_5 - 2]), (((/* implicit */unsigned char) min((arr_24 [i_5]), (arr_24 [i_5 + 3])))))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_22 [i_5]))));
    }
    var_27 = ((/* implicit */unsigned char) var_3);
    var_28 = min((((/* implicit */long long int) ((((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))) > (min((((/* implicit */long long int) var_4)), (var_9)))))), (((((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_10))) / (max((var_5), (((/* implicit */long long int) var_13)))))));
}
