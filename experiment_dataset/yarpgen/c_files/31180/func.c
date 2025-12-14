/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31180
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
    var_11 ^= ((/* implicit */_Bool) var_8);
    var_12 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_5)), ((~(3083492631074583764LL))))), (((/* implicit */long long int) var_4))));
    var_13 = ((/* implicit */short) 8487127476663337591ULL);
    var_14 |= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_6))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0])), (max((arr_10 [i_0] [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) arr_1 [i_1]))))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) min((var_10), (arr_6 [11U] [i_0 - 2] [i_3] [i_3 - 1]))))));
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) (short)13196))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [(unsigned short)9] [i_2]))) ? (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_2] [i_3])))) : (((/* implicit */int) var_4))))));
                        var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) max(((_Bool)1), (arr_0 [i_0 + 2] [i_3 - 2])))), (((arr_0 [i_3 + 1] [i_0 + 3]) ? (((/* implicit */int) ((unsigned char) 2403193630U))) : (((/* implicit */int) (signed char)-119))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [10ULL]);
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(4840982533912463032LL))), (max((-8632977669846550694LL), (((/* implicit */long long int) (unsigned short)0))))))) ? ((~(((/* implicit */int) ((7ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1097)))))))) : (((/* implicit */int) arr_1 [i_0 - 3]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1] [i_0 + 2]);
                        arr_18 [i_0 + 1] [i_1] [i_2] [(unsigned short)15] = ((/* implicit */unsigned short) (~(((4U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2])))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_21 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)246))));
                            arr_22 [i_0] [i_1] [i_2] [4U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5] [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_3 [i_0 + 2]))));
                        }
                        arr_23 [i_5] [i_2] [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_4 [(unsigned short)6] [i_0 - 3]))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [(_Bool)1] [(unsigned short)12] [i_5] [i_2])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0])))));
                    }
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 4] [(unsigned char)11])) ? (((/* implicit */int) arr_16 [(signed char)16])) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)9] [i_2] [i_0 - 2] [(unsigned char)8]))))) ? (((/* implicit */int) (unsigned short)0)) : ((~(((/* implicit */int) (unsigned char)255))))))) ? ((~(((/* implicit */int) var_6)))) : (((arr_3 [i_0 - 1]) ? (((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 4] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_16 [i_0 + 2]))))));
                    arr_25 [i_2] [i_0] [i_0] = ((/* implicit */short) max((((arr_6 [(signed char)17] [i_2] [i_1] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((~(arr_9 [i_2] [i_1]))))), (((/* implicit */unsigned long long int) var_7))));
                    arr_26 [i_0] [(signed char)2] [i_2] &= ((/* implicit */_Bool) arr_9 [i_1] [i_2]);
                }
            } 
        } 
    } 
}
