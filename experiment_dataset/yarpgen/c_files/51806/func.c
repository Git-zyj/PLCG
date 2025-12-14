/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51806
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (var_9)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((var_9) >> (((var_9) - (12289202279449671647ULL))))) & (((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 18; i_2 += 1) 
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-858)))))))) / (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = arr_1 [i_0 - 1] [i_1];
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)5)) || (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)58375)), (5563019357506663141ULL)))))));
                    arr_11 [i_0] [i_1] [i_0] = (+(((/* implicit */int) min((((/* implicit */unsigned short) min((arr_4 [i_0] [i_2]), (var_0)))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)7162)))))));
                    var_14 |= (-(((/* implicit */int) arr_7 [i_1])));
                }
                /* LoopSeq 3 */
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (short)32761)) / (2147483647)));
                    var_16 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) arr_7 [i_0]))))), (min((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1])) ? (4201145076482836732ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))))), (((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_1]), (((/* implicit */int) (signed char)-22))))))));
                    var_17 = min((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) || ((!(((/* implicit */_Bool) var_5))))))), (var_8));
                    arr_14 [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */_Bool) (short)32767)) && (((/* implicit */_Bool) 2147483647))))))) + (((/* implicit */int) (_Bool)0))));
                    var_18 = ((/* implicit */unsigned char) 4294967295U);
                }
                for (int i_4 = 4; i_4 < 15; i_4 += 3) 
                {
                    arr_17 [i_0] [i_1] [8LL] [(signed char)12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (30720U) : (((/* implicit */unsigned int) 33030144))))) ? ((+(arr_1 [i_0] [i_0]))) : (((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)7161))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)1] [i_0 - 1] [(signed char)1] [(signed char)1])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_20 [i_1] &= ((/* implicit */unsigned int) max((var_4), (((/* implicit */short) var_6))));
                        var_19 = ((/* implicit */long long int) max((((((/* implicit */int) var_7)) >> (((arr_15 [i_0] [i_1] [i_4]) - (1490581834634685626ULL))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_4 - 1] [i_5])) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_5] [i_1] [i_0])) : (arr_19 [i_5] [i_4] [(signed char)5] [i_0]))) : (((/* implicit */int) var_5))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_18 [i_0]);
                        arr_24 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_0] [i_1]))))) || (((/* implicit */_Bool) ((var_7) ? (var_9) : (((/* implicit */unsigned long long int) -4657621621869042566LL)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_27 [i_4] [(unsigned char)12] [i_1] [i_7] [i_0] [(unsigned char)12] = ((/* implicit */signed char) ((((2306946899092022378ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) > ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (2014955575724632004ULL)))));
                        var_20 = ((/* implicit */unsigned short) -312618598);
                    }
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4657621621869042565LL), (var_3)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [15] [15] [i_0] [i_0 + 1] [i_1])) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12704)) ? (-2043499118538080423LL) : (((/* implicit */long long int) -14))))) : (((arr_15 [i_0 - 1] [i_4 - 4] [i_4]) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)58902)))) - (58895)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) var_6);
                                arr_32 [i_0] [i_1] [i_4] [i_4] [i_4 + 4] [i_4 + 4] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_6 [i_8]))))), (min((((/* implicit */signed char) arr_12 [i_0])), ((signed char)-81)))))) ? (((/* implicit */int) arr_6 [i_4])) : (arr_31 [(signed char)3] [i_8] [(signed char)3])));
                                arr_33 [i_0 + 1] [i_0 + 1] [i_4] [i_0] = ((/* implicit */short) ((signed char) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (202668226U) : (((/* implicit */unsigned int) arr_19 [i_0] [i_8] [i_4] [i_8]))))));
                                arr_34 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                                arr_35 [i_0] [i_1] [i_1] [i_1] [i_1] = (+(((min((arr_8 [i_0] [i_1] [i_4 + 2] [i_9 - 2]), (((/* implicit */int) (_Bool)1)))) + ((-(((/* implicit */int) (signed char)15)))))));
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 4; i_10 < 17; i_10 += 3) 
                {
                    arr_39 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_28 [i_0 - 2] [0LL] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15041))))) + (((((/* implicit */_Bool) arr_0 [i_10 - 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (arr_28 [i_10] [i_1] [2])))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        for (long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_10] [i_1] [i_11] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_11])))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((signed char) ((arr_21 [i_12]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : ((-(((/* implicit */int) max((var_10), (((/* implicit */short) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)118))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)8204)) : (((/* implicit */int) arr_16 [i_0 - 2] [i_10 + 2])))) : (arr_19 [i_10] [i_10 - 1] [i_10] [i_1]))), ((-(((/* implicit */int) ((unsigned short) var_3)))))));
                    arr_44 [i_0] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_30 [i_0] [i_10] [i_10]))))));
                }
                var_26 = ((/* implicit */long long int) min((((/* implicit */int) min(((signed char)-112), (((/* implicit */signed char) (_Bool)1))))), (131071)));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_18 [i_1]))));
                var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((((_Bool)1) ? (var_3) : (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))) ? (((/* implicit */long long int) -2147483647)) : (2251799813685232LL)));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13858))) : (-3240179972534031501LL))))));
}
