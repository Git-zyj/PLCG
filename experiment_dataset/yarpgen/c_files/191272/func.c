/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191272
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_0] [i_1]))) : (min((((/* implicit */unsigned long long int) min(((unsigned short)11583), (((/* implicit */unsigned short) (signed char)87))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) - (4611686018427387904ULL)))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)242));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_0]))));
                        var_14 = ((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) arr_4 [i_0]))));
                    }
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_19 [i_2] [i_4] [i_4] [i_4] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_4]))));
                            arr_20 [i_2] [i_5] = ((/* implicit */signed char) ((((unsigned long long int) max((arr_2 [i_0]), (arr_13 [i_0] [i_0] [i_2])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))));
                            arr_21 [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)-116);
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */short) ((unsigned int) ((arr_8 [i_6] [i_2] [i_2 - 1] [i_4]) / (arr_8 [i_0] [i_2] [i_2 + 2] [i_2]))));
                            var_16 &= ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_6]);
                            arr_25 [i_2] [i_4] [i_2] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_2 [i_2 - 2])))));
                            arr_26 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)173)), (max((arr_0 [i_0]), (((/* implicit */unsigned short) var_6))))))) <= (((((/* implicit */int) arr_0 [i_2 - 1])) ^ (((/* implicit */int) arr_0 [i_2 + 2]))))));
                            var_17 ^= ((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 4; i_7 < 12; i_7 += 1) 
                        {
                            arr_30 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_7]));
                            arr_31 [i_2] [i_2] [i_2] [i_2] [i_7] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)23408))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [i_4])))))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
                        {
                            arr_34 [i_0] [i_8] [i_2] [i_2] [i_8] [i_2] [i_2] = ((long long int) ((unsigned short) 10061756285930979083ULL));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_5 [i_8 - 2] [i_8 + 2] [i_8 - 1]) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)242)) : (var_10)))))) & (((((/* implicit */_Bool) (unsigned char)3)) ? (arr_32 [i_8] [i_0] [i_2] [i_2 + 1] [i_8 + 1] [i_4] [i_8 + 1]) : (((/* implicit */int) var_4))))));
                            arr_35 [i_2] [i_8] [i_4] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((8875470313776860515LL) < (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)13)))))));
                            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_4] [i_8])) ? (((((/* implicit */int) var_13)) & (var_10))) : (((/* implicit */int) var_7)))) < (((/* implicit */int) ((unsigned short) ((unsigned char) (unsigned char)18))))));
                        }
                    }
                    arr_36 [i_2] = ((/* implicit */short) ((signed char) ((8875470313776860512LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                    arr_37 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_8 [i_2 - 3] [i_2] [i_2] [i_0])))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (unsigned short)899);
}
