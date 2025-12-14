/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4705
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
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_14 *= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))))));
                    var_15 *= ((/* implicit */int) (((((+(arr_4 [i_2] [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3929187096189359906ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)12681))))))) && (((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) 11761850946426569843ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_2] [i_2] [(unsigned char)20] [i_2] [i_0 + 4] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)12701)), (3929187096189359930ULL)))) && (((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((int) arr_9 [i_1]))))))));
                                var_16 = ((/* implicit */unsigned short) min((((int) 14517556977520191710ULL)), (((((((/* implicit */int) (signed char)-43)) + (2147483647))) >> ((((~(var_9))) - (14584445630415733080ULL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_5))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_6 [i_0])), ((unsigned short)52852)))), (((((/* implicit */_Bool) (short)-21465)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-77))) : (4208629173U)))))));
                        var_19 ^= 0;
                        arr_20 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_7 [i_0 + 4] [i_0 + 3] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 2] [i_0])) ? (arr_7 [i_0 + 2] [i_0 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13436))))) : (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_0 + 4] [i_0 + 4] [i_0]) : (arr_7 [i_0 - 1] [i_0 + 1] [i_0])))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            arr_26 [i_0] [i_1] [(unsigned char)3] [i_0] [(unsigned char)3] [i_8] = ((/* implicit */short) ((unsigned int) (unsigned short)12679));
                            arr_27 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [10U] [i_1] [i_7] [i_8 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_5] [i_7] [i_8])) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-20)) || (((/* implicit */_Bool) var_13)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3929187096189359914ULL)))) & (((((/* implicit */_Bool) 2860903543507260637ULL)) ? (((/* implicit */unsigned long long int) 1737984170)) : (18446744073709551615ULL)))))));
                            arr_28 [i_8] [(unsigned short)10] [(unsigned short)10] [i_5] [i_5] |= ((/* implicit */unsigned short) (signed char)127);
                        }
                        arr_29 [0] [i_1] [0] [(signed char)22] [i_7] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) -3150795418858306873LL)) ? (14783635283367418160ULL) : (11673238051815478506ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1])))))))))));
                        arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1870009191248756112ULL)) ? (14517556977520191699ULL) : (3929187096189359914ULL)));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_36 [i_0] [i_9 + 1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 1882831995))))), (min((2509714143274715413LL), (((/* implicit */long long int) arr_3 [i_9 - 1] [i_0] [i_0 + 4]))))));
                        arr_37 [i_0 + 2] [i_0] [i_0 + 2] [16U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14517556977520191705ULL)) ? (15585840530202290956ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_34 [i_0 + 2] [i_0 + 3] [i_0]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (2545217544U) : (((/* implicit */unsigned int) 1541759702))))))))) : (((((/* implicit */unsigned long long int) (+(15U)))) + (min((3929187096189359906ULL), (((/* implicit */unsigned long long int) (signed char)0))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            arr_45 [i_0] [i_0] = ((/* implicit */int) ((((-1882832003) ^ (var_1))) <= (-1149269875)));
                            var_20 = ((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) arr_1 [i_0])) : ((~(((/* implicit */int) (signed char)-17)))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_1] [18ULL] [11ULL]))));
                        }
                        for (short i_13 = 3; i_13 < 21; i_13 += 3) 
                        {
                            arr_48 [i_0] [i_1] [i_0] [i_11] [i_13 + 4] = ((/* implicit */unsigned long long int) var_3);
                            var_22 = ((/* implicit */int) arr_4 [i_0 + 2] [i_1]);
                            arr_49 [i_13] [i_0 + 3] [i_0] [i_0] [i_1] [i_0 + 3] = ((/* implicit */int) arr_33 [(signed char)1] [i_1] [i_1]);
                            arr_50 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) 13))))));
                        }
                        var_23 = (-(var_11));
                        arr_51 [i_0 + 4] [i_1] [i_0] [i_9 - 2] [(signed char)12] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_9] [i_0] [i_9 + 3] [i_1] [i_9])) ? (arr_12 [i_9 + 3] [i_9 + 1] [i_0] [i_9 - 1] [i_9 + 1] [i_9 - 1]) : (((/* implicit */long long int) arr_32 [i_0 + 2])))));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 3) 
                    {
                        var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) 2147483647)) ? (min((((/* implicit */unsigned long long int) arr_3 [i_9 + 4] [i_1] [i_0])), (242570264771307485ULL))) : (min((arr_21 [i_1]), (((/* implicit */unsigned long long int) (signed char)4)))))), (((/* implicit */unsigned long long int) var_12))));
                        arr_54 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)65528), (((/* implicit */unsigned short) ((unsigned char) 4294967295U)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_1] [19LL])))))));
                    }
                    var_25 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(2975000966U))), (((/* implicit */unsigned int) ((int) (short)32767)))))), (((unsigned long long int) 0))));
                    arr_55 [(unsigned short)22] [i_1] [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)0)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((26ULL) >> (((arr_34 [i_0] [i_1] [i_0]) - (205814451639676004ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-33), (arr_8 [i_0])))))))))) : (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)0)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((26ULL) >> (((((arr_34 [i_0] [i_1] [i_0]) - (205814451639676004ULL))) - (17206644965851276046ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-33), (arr_8 [i_0]))))))))));
                }
                var_26 -= ((/* implicit */long long int) (+(((int) ((((/* implicit */int) (short)0)) - (((/* implicit */int) var_8)))))));
                var_27 |= min(((~(0ULL))), (min((((/* implicit */unsigned long long int) (+(1320843885752326636LL)))), (17013767793682552441ULL))));
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(-154553321))), ((-(((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65528)) || (((/* implicit */_Bool) (unsigned char)211))))) + (var_11))) : (min((0), (((/* implicit */int) (unsigned char)4)))))))));
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21713)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30338))) : (17013767793682552421ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12901))) : (var_12)));
}
