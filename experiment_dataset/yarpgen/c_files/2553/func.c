/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2553
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
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))))) : (arr_6 [i_0] [i_1]))) & (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)))) - ((-(((/* implicit */int) arr_0 [i_0])))))))));
                        arr_13 [i_0] [i_1] [i_3] [i_0] [i_3] = ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 1]))));
                        arr_14 [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        arr_19 [i_0] [i_4] = ((/* implicit */int) arr_10 [i_0] [i_4] [i_0] [(_Bool)1]);
                        var_16 ^= ((/* implicit */short) arr_6 [(_Bool)1] [i_0]);
                        var_17 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (6917529027641081856ULL)))) ? (((/* implicit */int) (short)-23295)) : (-515740702)))));
                        arr_20 [i_0] [i_1] [i_0] [i_2] &= ((((/* implicit */int) (((((_Bool)1) && (((/* implicit */_Bool) (unsigned char)255)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)249)), (4015331996929029205ULL))))))) - (min(((-(((/* implicit */int) arr_5 [i_0] [i_2] [i_4])))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)79)))))));
                    }
                    for (int i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        arr_24 [i_5] [i_1] [i_2] [i_5] = ((/* implicit */long long int) (_Bool)1);
                        arr_25 [i_5] [i_1] [i_2] [i_1] = ((/* implicit */int) arr_17 [i_1] [i_1] [i_0 - 1] [(unsigned short)1]);
                        arr_26 [i_0] [i_0] [i_5] [i_2] [i_2] = ((/* implicit */long long int) arr_0 [i_0]);
                        /* LoopSeq 4 */
                        for (long long int i_6 = 1; i_6 < 12; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) arr_8 [i_2] [i_1] [(unsigned char)6] [i_2]);
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_22 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_2] [i_6 - 1])))) ? (((((/* implicit */_Bool) arr_29 [i_0 - 3] [i_0 - 3] [i_5 + 1] [i_2] [i_5])) ? ((-(-1264271538))) : (((/* implicit */int) min(((short)28842), (arr_29 [i_1] [i_1] [i_1] [i_2] [0LL])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2061584302080LL)))))) < (-1LL)))))))));
                        }
                        for (int i_7 = 2; i_7 < 13; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) (_Bool)1);
                            arr_32 [i_0] [i_0] [i_2] [(unsigned short)13] [i_5] [i_0] = ((((/* implicit */_Bool) -1264271557)) ? (min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5] [(unsigned short)8])), (((((/* implicit */_Bool) -2088303207)) ? (arr_15 [i_0] [i_0] [i_1] [i_2] [i_5 + 1] [(short)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(short)8] [(short)8] [i_1] [i_5 - 1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_5] [i_7 - 2]))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((4243691252033779552ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23466)))))) ? (((/* implicit */int) arr_27 [i_8 - 2])) : (arr_22 [i_0] [i_0] [i_0] [i_5] [i_0 + 3] [i_0 - 1]))) / (((/* implicit */int) (unsigned short)26439))));
                            var_22 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0]))) < (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (short)8769)) : (((/* implicit */int) (short)-28837))))), (min((-1LL), (((/* implicit */long long int) (unsigned short)51257))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((18446744073709551615ULL) == (0ULL))))));
                            var_24 = ((/* implicit */_Bool) ((0ULL) & (2092209078254392265ULL)));
                        }
                        for (int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)1))));
                            arr_37 [i_0] [i_5] [(unsigned char)10] [13] [(short)7] [i_0] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)61217)) ? (7213538501204094473LL) : (((((((/* implicit */_Bool) -1052708507)) ? (arr_6 [i_9] [i_9]) : (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_2] [i_5] [i_2] [i_2])))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    for (int i_10 = 1; i_10 < 13; i_10 += 4) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned char)110)), (536870911LL))))))));
                        arr_40 [i_10] [i_1] [i_10] [i_10] = ((/* implicit */int) (unsigned char)86);
                    }
                    var_27 |= ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)22250)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2])))), (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 4; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((arr_15 [i_0] [i_0] [i_0 - 2] [2] [(unsigned short)6] [(unsigned short)6]) | (((/* implicit */unsigned long long int) (+(min((-7399191424941518218LL), (((/* implicit */long long int) (unsigned short)16662)))))))));
                                var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_31 |= ((/* implicit */unsigned short) (-(((min((((/* implicit */unsigned long long int) var_2)), (var_8))) ^ ((((_Bool)1) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
