/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211258
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [(unsigned short)16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(70368744177600LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) : (arr_2 [i_0] [(short)4])));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [(short)0] [i_2 - 1] [0U] [i_3 - 1] |= ((/* implicit */short) max((((unsigned long long int) (!(((/* implicit */_Bool) 2186962161U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1431935751)) ? (2108005134U) : (2115658774U)))) ? (((-70368744177590LL) / (((/* implicit */long long int) arr_7 [i_0] [i_0] [14ULL] [14ULL] [14ULL] [i_0])))) : (((/* implicit */long long int) max((((/* implicit */int) arr_4 [i_3] [i_0] [i_0] [i_0])), (var_13)))))))));
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_2 [i_1 - 2] [16LL]))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */_Bool) 1443027390U);
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((1031703727653526762LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_11 [i_2 + 1] [i_2] [i_4 + 1])) >= (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2 + 1] [i_5]))) : (var_5)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            arr_20 [0U] [i_1] [i_1] [i_1] [i_6] [i_2 - 1] = ((/* implicit */int) ((unsigned int) arr_18 [i_4 + 3] [i_6 + 3] [i_1] [i_4 + 3]));
                            var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))) ^ (((((/* implicit */_Bool) 2350758785U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-8680686821774862420LL)))));
                            var_18 = ((/* implicit */unsigned char) arr_10 [i_6] [i_1] [i_2] [i_1] [i_0]);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) % (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_10))));
                            var_21 *= ((/* implicit */unsigned char) ((14938224998185387629ULL) >> (((/* implicit */int) (_Bool)1))));
                            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_4 + 1] [i_7] [i_2 - 1]))) == ((-(3724819945842535042LL)))));
                            arr_24 [i_0] [i_0] [i_0] [i_4] [i_7] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_1] = ((/* implicit */int) (-(var_8)));
                            arr_28 [i_0] [i_0] [i_1] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_8]))) - (arr_2 [i_1] [i_1])));
                            var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)19626)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)9))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 3] [5LL] [5LL])) ? (arr_7 [i_0] [i_0] [i_1] [i_0] [i_8] [(signed char)11]) : (((/* implicit */int) (unsigned short)45920))));
                        }
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) 1098339251)))) ? (((/* implicit */int) (short)8602)) : (((/* implicit */int) arr_30 [i_0] [10LL])))) - (((/* implicit */int) (unsigned short)3)))))));
                        arr_32 [i_0] [i_1] [i_2 - 1] [i_9] [i_1] = ((/* implicit */int) ((long long int) arr_30 [i_0] [i_1]));
                        var_26 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) >= (arr_26 [i_9 - 1] [10] [i_9 - 1] [i_0] [i_1 + 2] [10] [i_0])))), (max((((/* implicit */unsigned long long int) ((-70368744177600LL) >= (3724819945842535042LL)))), (((((/* implicit */unsigned long long int) 2U)) / (6799046163245105202ULL)))))));
                    }
                    arr_33 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) 4561702086198450900ULL);
                    arr_34 [i_1] = ((/* implicit */long long int) (_Bool)1);
                    arr_35 [i_1] [(signed char)15] [i_1] [i_2] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) < (-70368744177600LL)))))), (((/* implicit */int) ((arr_21 [i_0] [i_1] [i_2] [i_1] [i_2 - 1] [i_2 + 1] [i_1 - 1]) == (((/* implicit */long long int) (+(arr_5 [i_0] [i_1 + 2] [i_2])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_3)))))));
}
