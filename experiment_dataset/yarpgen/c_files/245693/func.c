/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245693
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
    var_10 = ((/* implicit */int) min((max((var_4), (((/* implicit */long long int) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (((/* implicit */long long int) ((((/* implicit */int) ((var_6) != (var_5)))) >> (((var_5) - (4055600039U))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */signed char) max((((arr_5 [i_1 + 2]) / (arr_5 [i_1 + 1]))), (max((arr_5 [i_1 + 1]), (arr_5 [i_1 - 2])))));
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((5ULL), (((/* implicit */unsigned long long int) (unsigned short)55577)))))));
                                arr_15 [i_4] [i_1 + 1] [i_2] [i_1 + 1] [i_4 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((arr_8 [i_3]), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_4] [i_0])))), (((/* implicit */unsigned long long int) arr_1 [(unsigned short)10] [i_1 + 2]))))) ? (arr_11 [i_0] [i_1] [1U] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_3]) >> (((((/* implicit */int) arr_10 [i_0] [i_4] [4U])) - (40913)))))) <= (((arr_8 [i_3]) | (arr_8 [i_1])))))))));
                                var_13 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_4] [i_2] [6])) << (((((/* implicit */int) arr_1 [i_1] [i_4])) - (35988)))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_10 [i_0] [i_1] [i_0]))))))));
                                var_14 = ((unsigned short) 18446744073709551600ULL);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) != (((arr_13 [i_2] [(_Bool)1]) - (arr_11 [i_0] [i_0] [i_1] [i_2]))))));
                }
                arr_17 [i_1] [14LL] = ((/* implicit */short) ((max((min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])), (arr_11 [i_0] [i_0] [i_0] [i_0]))), (arr_11 [i_1] [i_1 + 2] [i_0] [i_0]))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [i_0] [i_1] [i_1 - 2]), (arr_10 [i_0] [i_1] [i_1 + 1])))))));
                arr_18 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_0] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1]))))), (min((arr_8 [i_1 + 1]), (arr_8 [i_1 - 1])))));
                var_15 ^= ((/* implicit */unsigned char) ((min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 1]))) == (max((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1 - 1] [(unsigned short)18]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [17LL]) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_1]))))))));
            }
        } 
    } 
}
