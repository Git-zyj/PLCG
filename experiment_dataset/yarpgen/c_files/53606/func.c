/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53606
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
    var_10 = ((/* implicit */unsigned long long int) ((((((int) var_0)) == (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1))))))) ? (((/* implicit */int) ((max((var_3), (var_3))) != (((/* implicit */unsigned long long int) max((9223372036854775803LL), (var_8))))))) : (((int) ((unsigned char) -9223372036854775803LL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((3979706657795120488ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))))), (((/* implicit */unsigned long long int) ((((-4910746394651621025LL) / (-9223372036854775802LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_1] [i_1] [i_2])))) ? (((((/* implicit */_Bool) var_8)) ? (9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2 + 3]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_3)))))));
                /* LoopSeq 3 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    arr_14 [i_2] [2] [i_1] [i_3] = (-(((/* implicit */int) arr_6 [i_1])));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_19 [i_2] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
                            arr_20 [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775802LL))));
                            arr_21 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((5U) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) >= (max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1] [i_5]))))), (var_6)))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            arr_24 [(signed char)3] [i_1] [(signed char)3] [i_1] [i_3] [i_4] [(signed char)7] = ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] [i_6] [(_Bool)1]);
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_6 - 2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_1]), (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_3]))))) ? (max((var_6), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) != (((var_9) ? (((/* implicit */unsigned long long int) arr_16 [i_2 - 1] [i_2 + 1] [i_3] [i_1] [i_2 + 1])) : ((~(arr_18 [i_1] [i_4] [i_6])))))));
                            arr_26 [i_1] [i_2] [i_2] [i_1] [i_6] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_18 [i_1] [i_6 + 1] [i_6 - 2]), (((/* implicit */unsigned long long int) var_8))))) ? (((arr_18 [i_1] [i_6 + 1] [i_6 - 2]) << (((arr_18 [i_1] [i_6 + 1] [i_6 - 2]) - (2209933740925166501ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_18 [i_1] [i_6 + 1] [i_6 - 2]), (((/* implicit */unsigned long long int) var_8))))) ? (((arr_18 [i_1] [i_6 + 1] [i_6 - 2]) << (((((arr_18 [i_1] [i_6 + 1] [i_6 - 2]) - (2209933740925166501ULL))) - (3355560019626423002ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))));
                        }
                        arr_27 [i_1] [0ULL] [i_1] [i_4] [0ULL] = ((/* implicit */unsigned short) ((arr_5 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33871))) <= (4158011213U)))))));
                    }
                    arr_28 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_2 + 1]))) >= (max((9223372036854775803LL), (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))) : (((int) max(((unsigned char)37), (((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_3])))))));
                    arr_29 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0))))), (max((arr_8 [i_3] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_9)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5))))) >= (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-8552)) : (((/* implicit */int) var_5))))))))));
                }
                for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    arr_33 [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((arr_11 [i_2] [i_1]), (var_4))), (((/* implicit */unsigned long long int) var_5)))))));
                    arr_34 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) max((((/* implicit */int) arr_10 [i_1])), (((((/* implicit */int) arr_15 [i_2] [i_1] [i_2 - 1])) + (((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_7 [i_1] [(signed char)2]))))))));
                    arr_35 [i_1] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) ((-9223372036854775803LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2046))))))) & (max((((/* implicit */long long int) (signed char)45)), (var_6)))))));
                }
                for (unsigned short i_8 = 2; i_8 < 6; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_43 [i_1] [i_1] [i_8] [i_1] [i_10] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 2948374462860373877LL)), (max((max((var_4), (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_42 [i_1] [i_1] [i_1] [i_9] [i_10] [i_10])))))));
                            arr_44 [i_1] [i_1] [i_8 + 1] [i_1] [i_9] [i_10] = ((/* implicit */int) max((3597446656094805889ULL), (((/* implicit */unsigned long long int) -6595237823002264803LL))));
                        }
                        arr_45 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(6595237823002264803LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_42 [i_1] [i_1] [i_1] [i_9] [i_1] [i_9]) : (((/* implicit */unsigned long long int) arr_40 [i_1] [i_2 + 2] [i_8] [i_9] [i_9]))))))))) : ((((!(((/* implicit */_Bool) var_8)))) ? (arr_23 [i_1] [i_1] [i_2 + 2] [i_8 + 2] [i_1]) : (((/* implicit */unsigned long long int) (-(arr_5 [i_1]))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                        arr_49 [i_1] [i_1] [i_8] [i_1] [i_11] = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_8 - 1] [i_8] [i_1] [i_1]);
                        arr_50 [i_1] = ((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-98)));
                    }
                    arr_51 [i_1] [i_1] [i_8 + 4] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((4294967291U), (((/* implicit */unsigned int) (_Bool)1)))))))), (((((((/* implicit */int) arr_7 [i_1] [i_1])) == (((/* implicit */int) arr_0 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1])) * (((/* implicit */int) arr_1 [i_2] [i_8]))))) : (((((/* implicit */_Bool) (signed char)45)) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                }
                /* LoopSeq 3 */
                for (int i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    arr_55 [3U] [3U] [i_1] = ((/* implicit */unsigned char) ((long long int) (-(max((var_3), (((/* implicit */unsigned long long int) var_2)))))));
                    arr_56 [i_1] [i_2 - 1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 136956074U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)205))))))) || (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1])))) && (((/* implicit */_Bool) arr_11 [i_2 + 1] [i_1]))))));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_59 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) 13661327521199901432ULL);
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        arr_63 [i_1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_7)))));
                        arr_64 [i_1] [i_1] [2LL] = ((/* implicit */long long int) arr_8 [i_2 + 2] [i_1] [i_2 - 1]);
                        arr_65 [i_1] [i_2 + 3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_68 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_3)))));
                        arr_69 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_46 [i_1] [i_2 + 3] [i_2 + 3] [i_13] [i_2 + 2]))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3)))))));
                        arr_70 [i_1] [i_2] [i_13] [i_2] [i_2] [i_1] = ((arr_37 [i_1] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 2] [i_2 + 2]))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_75 [i_1] [i_1] [i_1] [i_16 - 1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_4))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_60 [i_1] [i_1] [i_1] [i_1])))))));
                        arr_76 [i_1] [i_1] [i_13] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_1] [i_1])) - (((/* implicit */int) var_5))));
                    }
                }
                for (unsigned int i_17 = 2; i_17 < 9; i_17 += 4) 
                {
                    arr_81 [i_2] [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_1]))) + (arr_30 [i_1] [i_2] [i_17])))) / (((((var_6) + (9223372036854775807LL))) << (((arr_74 [i_1] [(_Bool)1] [(_Bool)1] [i_17] [i_17]) - (1626159125U)))))))) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_1] [i_1])))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_1]))) + (arr_30 [i_1] [i_2] [i_17])))) / (((((var_6) + (9223372036854775807LL))) << (((((arr_74 [i_1] [(_Bool)1] [(_Bool)1] [i_17] [i_17]) - (1626159125U))) - (2655600087U)))))))) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_1] [i_1]))))));
                    arr_82 [i_1] [i_1] [i_1] [i_17] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) -1477505345)) > (136956080U))));
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                arr_89 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_8 [i_1] [i_1] [i_1]))), (((((/* implicit */int) var_1)) <= (((/* implicit */int) var_7)))))))) ^ (((((/* implicit */_Bool) ((var_9) ? (arr_23 [(unsigned char)3] [i_2] [(unsigned char)3] [i_2] [i_1]) : (arr_32 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)214))))) : (max((((/* implicit */long long int) (_Bool)0)), (var_8)))))));
                                arr_90 [i_1] [i_1] [i_1] [i_17 - 2] [i_1] [i_18 - 3] [i_19] = ((/* implicit */_Bool) max((((arr_58 [i_1] [i_17 + 1] [i_18 - 1]) & (arr_37 [i_1] [i_17 + 1]))), (((((/* implicit */_Bool) arr_37 [i_1] [i_17 + 1])) ? (arr_37 [i_1] [i_17 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                arr_91 [i_1] [i_1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((arr_23 [i_1] [i_1] [i_17] [(unsigned char)2] [i_1]) << (((var_3) - (799925645161877175ULL)))))))) ? (((650266652U) * (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((var_2), (((/* implicit */unsigned char) arr_6 [i_1])))), (arr_13 [i_1] [i_2 - 1])))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((signed char) max((9223372036854775803LL), (((/* implicit */long long int) var_7)))));
}
