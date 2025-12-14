/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30542
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (-(min((var_17), (arr_0 [i_0] [i_0])))));
        var_18 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [(signed char)6] [i_0])) / (340060273)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((arr_0 [i_0] [i_0]) - (980381733U)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) -340060274)) * (748060788U)))))))) : (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [(signed char)6] [i_0])) / (340060273)))))) < (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((arr_0 [i_0] [i_0]) - (980381733U))) - (2032970112U)))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((((/* implicit */unsigned int) -340060274)) * (748060788U))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 340060273)) < (arr_0 [i_0] [i_0]))))) : (var_6)));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [18U]), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_14)) ? (arr_0 [i_0] [16LL]) : (arr_0 [i_0] [12LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) -340060282)) < (var_14))))))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) var_15);
        var_20 = ((/* implicit */unsigned int) ((((18446744073709551615ULL) + (((/* implicit */unsigned long long int) -3996233288329418847LL)))) + (((/* implicit */unsigned long long int) (~(1449679545U))))));
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_13 [i_1] = max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1472784403))))), (min((1048575LL), (((/* implicit */long long int) arr_10 [i_2 + 1] [i_3 + 1] [i_3])))));
                    arr_14 [3ULL] [2LL] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((((((/* implicit */_Bool) (signed char)18)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2997518454647524308LL)))) - (18446744073709551599ULL)))));
                    var_21 = ((/* implicit */unsigned char) ((int) 340060271));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (arr_0 [i_1] [i_1])))) ? (((var_6) | (((/* implicit */unsigned long long int) var_15)))) : (((12295489461437076540ULL) * (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) arr_7 [11] [i_4]))));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) 2071786843U)) > (0ULL))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_16))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) arr_1 [i_5] [i_5]))))) ? (var_6) : (((var_1) ^ (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -491140002)) : (arr_15 [i_6] [i_5]))), (((/* implicit */long long int) arr_21 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 + 4] [i_7 + 4]))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 6456342379786686911LL))))));
                        }
                        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [(signed char)4] [(signed char)4] [(signed char)2] [i_1])))))) : (-1LL))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) min(((((((~(((/* implicit */int) var_16)))) + (2147483647))) << (((1162115958) - (1162115958))))), ((-(((/* implicit */int) arr_21 [i_1] [i_1] [i_7 + 3] [i_7 + 4] [i_7 + 3] [i_7])))))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 2; i_9 < 12; i_9 += 1) 
                        {
                            var_28 = max((max((((unsigned long long int) var_16)), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-1)), (arr_0 [i_1] [i_1])))))), (((/* implicit */unsigned long long int) max((-1LL), (((/* implicit */long long int) 351790683U))))));
                            var_29 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_12)) ? (((var_17) << (((((/* implicit */int) (signed char)-1)) + (5))))) : (((var_8) & (((/* implicit */unsigned int) arr_26 [i_1] [i_1] [i_6] [i_7 + 3] [i_9]))))))));
                        }
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) arr_8 [i_5] [i_5]))));
                            arr_30 [i_7 - 1] [4U] [4U] [i_1] &= ((/* implicit */unsigned long long int) max((5994918463274966548LL), (((/* implicit */long long int) ((((/* implicit */int) (signed char)54)) << (((arr_8 [i_6] [i_10]) + (626571639))))))));
                        }
                        for (int i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            arr_33 [i_1] [i_1] [i_5] [i_1] [11ULL] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (5461986526490867693LL)))) * (max((((/* implicit */unsigned long long int) 0LL)), (18446744073709551615ULL)))))) ? (max((((/* implicit */long long int) 4294967295U)), (2763871509603905163LL))) : ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1]))) & (-5LL)))))));
                            var_31 += ((((/* implicit */_Bool) 1392179286)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_7 + 3] [i_7 + 3])) ? (219930601U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_7 + 3] [i_7 + 3])))))) : (min((var_6), (((/* implicit */unsigned long long int) -1392179287)))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_7 [i_5] [i_11 - 1]))));
                        }
                    }
                } 
            } 
            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_16 [10U] [i_5] [i_5]), (((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) << (((var_8) - (1229362062U))))))))) ? (((/* implicit */unsigned long long int) 1LL)) : (((((/* implicit */unsigned long long int) (-(6142259980089998181LL)))) / (((((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) 7682448416034355538LL)) : (2047471059743592924ULL)))))));
        }
        for (signed char i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) max((((long long int) arr_24 [i_12] [i_12] [i_12] [i_1] [11ULL])), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(810679976U)))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (1392179286) : (var_12))))))))))));
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)137)), (1162115958)))) ? (var_6) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)10)), (33554431U))))))) ? (((long long int) -1)) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
            arr_36 [i_1] [i_1] [i_12] = max((((/* implicit */unsigned int) max((arr_7 [i_1] [i_12]), (arr_7 [i_1] [i_12])))), (2567555021U));
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                var_36 ^= ((/* implicit */int) arr_10 [i_13] [i_12] [i_1]);
                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((max((((/* implicit */unsigned long long int) -1162115983)), (8889396084799682941ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [9ULL] [i_1])) ? (-754229705) : (((/* implicit */int) arr_1 [8LL] [11]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_12])) ? (var_9) : (((/* implicit */long long int) arr_5 [i_12]))))))))));
                var_38 = ((/* implicit */int) (-(min((min((((/* implicit */unsigned int) arr_27 [i_1] [i_1] [i_1] [i_1])), (arr_22 [i_1] [i_12] [i_12] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) (~(1664124593))))))));
                arr_39 [i_1] [i_12] [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((((/* implicit */_Bool) 7682448416034355529LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) -849504989)) : (4294967295U))))) - (7U)))));
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) 1392179278))) ? (((((var_12) + (2147483647))) << (((arr_4 [(unsigned short)10]) - (1012693382231759164ULL))))) : (max((((/* implicit */int) var_11)), (-412297431))))))));
            }
            for (long long int i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((~(var_14))) : (((/* implicit */long long int) min((arr_5 [i_1]), (((/* implicit */unsigned int) arr_26 [i_1] [i_1] [i_12] [i_14] [i_14])))))))) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_12] [i_12] [i_14] [i_14])) : (((/* implicit */int) var_16))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [11] [i_12] [i_12] [i_14])) ? (var_10) : (max((921369424U), (2589651028U)))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        {
                            var_42 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) arr_47 [i_16] [i_16] [i_15] [i_14] [(signed char)7] [(signed char)7] [i_1]))) | (((262143LL) << (((arr_24 [i_1] [11U] [i_14] [i_15] [i_1]) - (831529429U)))))));
                            var_43 = min((((/* implicit */long long int) var_8)), (arr_38 [i_15]));
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (((unsigned int) min((((/* implicit */long long int) arr_29 [i_1] [i_1] [i_12] [i_1] [i_15] [i_1] [i_1])), (arr_28 [5U] [i_12] [i_12] [i_12] [i_12] [5U])))) : (((/* implicit */unsigned int) arr_25 [6LL] [i_12] [i_14] [i_15] [i_15] [i_12]))));
                            var_45 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (-744836559)))), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (((41699274) << (((-3989288654069815139LL) + (3989288654069815139LL))))))))));
                        }
                    } 
                } 
                arr_48 [10U] [i_1] [10U] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)255))) ? (((-8879006834955916342LL) | (((/* implicit */long long int) arr_22 [i_1] [i_1] [i_1] [i_12] [i_12] [i_1])))) : (((/* implicit */long long int) min((arr_22 [i_1] [11ULL] [11ULL] [(signed char)0] [i_1] [i_1]), (arr_22 [i_1] [i_14] [i_14] [i_12] [0U] [i_1]))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) -1529482468)))))) << (((-412297452) + (412297460)))));
                    var_47 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_1] [i_12] [i_12] [i_12] [i_14] [i_17]))) | (var_0)))));
                    var_48 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_50 [i_1] [i_1] [i_1] [i_1])), (var_10)))))))) & (((unsigned long long int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))))));
                }
                for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                {
                    var_49 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_34 [i_18])) ? (arr_34 [i_18]) : (arr_34 [i_14]))), ((-(arr_34 [i_12])))));
                    var_50 = ((/* implicit */long long int) min(((+(min((((/* implicit */unsigned long long int) (signed char)15)), (arr_46 [i_1] [i_12] [i_1]))))), (((/* implicit */unsigned long long int) 1392179286))));
                }
                for (int i_19 = 0; i_19 < 13; i_19 += 3) 
                {
                    arr_55 [i_1] [i_12] [i_1] [i_1] [i_19] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_1] [i_12] [i_14] [i_19])) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (max((arr_4 [i_1]), (arr_42 [i_1] [i_1] [i_12] [i_14] [i_19] [i_19])))));
                    arr_56 [0LL] [0LL] &= max((((((/* implicit */_Bool) ((-478892624) + (-5)))) ? (max((31LL), (((/* implicit */long long int) arr_21 [i_1] [i_1] [i_12] [i_12] [i_14] [i_19])))) : (((/* implicit */long long int) arr_26 [i_1] [4ULL] [i_12] [i_14] [i_19])))), ((+(-646865160543260138LL))));
                }
                for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                {
                    var_51 ^= ((/* implicit */long long int) ((((unsigned int) 6206584643202819012ULL)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56447)))));
                    arr_59 [i_1] [i_1] [i_1] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_1] [i_12] [i_12] [i_12] [i_14] [i_20])) ? (arr_40 [i_1] [i_12] [i_14] [i_20]) : (arr_40 [i_1] [i_1] [i_1] [i_20])))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_1] [i_12])), (arr_54 [i_1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_44 [i_1] [i_12] [i_14] [i_20] [i_20])))) ? (((4095LL) | (7008731857388767542LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [12LL])) ^ (arr_53 [i_1])))))));
                    arr_60 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4189969370U)), (((((/* implicit */_Bool) arr_44 [i_1] [i_12] [i_12] [i_12] [i_12])) ? (var_1) : (36028797018963967ULL)))))) ? ((+(-7913079534620753544LL))) : (((/* implicit */long long int) max((122615716U), (3033744867U))))));
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) 122615716U)) && (((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) (+(7LL)))) ? (((((/* implicit */long long int) var_17)) / (arr_17 [i_12] [3ULL]))) : (((/* implicit */long long int) ((unsigned int) arr_41 [i_1] [6ULL] [i_14] [i_20]))))))))));
                    var_53 += ((/* implicit */int) ((((/* implicit */long long int) (~(268435455U)))) > (min((((((-2766519716207878655LL) + (9223372036854775807LL))) << (((arr_5 [i_1]) - (1128555735U))))), (((/* implicit */long long int) -7))))));
                }
            }
            var_54 = ((/* implicit */signed char) var_8);
        }
    }
    var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 921369424U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (var_2)))) ? (var_8) : (((/* implicit */unsigned int) max((var_12), (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_14)))) : (var_6))))))));
}
