/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214155
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min(((~(((var_12) / (2147483643))))), (((/* implicit */int) var_5)))))));
    var_17 |= ((/* implicit */signed char) 4294967295U);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [i_1] [i_1] [i_0])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((429309987U) / (3865657294U))))));
                        var_19 = (-(((/* implicit */int) (unsigned short)55330)));
                        var_20 = ((/* implicit */unsigned int) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) -1104675977))));
                    }
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) & (3865657309U)))) : ((~(arr_4 [i_0] [i_4] [i_4])))));
                        var_22 = (-((+(var_3))));
                    }
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) (-((-(4294967295U)))));
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (2648796848336167752LL) : (((/* implicit */long long int) 3865657309U)))))));
                                var_25 = ((/* implicit */int) (-((+(arr_8 [i_0] [i_1] [i_2] [i_6])))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [(unsigned char)0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -1104675954)) ? (6348500044999322162ULL) : (max((16427141821420811734ULL), (((/* implicit */unsigned long long int) (unsigned short)661))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_7 = 2; i_7 < 9; i_7 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_26 = (!(((/* implicit */_Bool) var_9)));
            var_27 |= ((/* implicit */unsigned int) (~(var_12)));
            var_28 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
            var_29 = ((/* implicit */unsigned int) var_13);
        }
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_31 [i_7 - 1] [i_9 + 2] [i_10 + 1])) == (((/* implicit */int) arr_31 [i_7 - 2] [i_9 + 1] [i_10 + 1]))))));
                var_31 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (min((((/* implicit */long long int) (short)-23388)), ((~(arr_33 [i_7] [i_7])))))));
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_26 [i_10])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 429309986U)) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (unsigned char)58))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_31 [i_10] [i_9] [(unsigned short)2])), (var_6)))) ? (((/* implicit */unsigned long long int) (+(429309987U)))) : (arr_24 [i_7 - 2])))));
                arr_34 [i_10] = ((/* implicit */unsigned char) ((((var_3) % (((/* implicit */unsigned long long int) arr_23 [i_9 - 1])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_7 - 2] [i_7 - 2] [i_10])) | (((/* implicit */int) (signed char)98)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)34295))))) ^ (334569732U)));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_38 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_10] [i_11 + 2]))));
                        var_35 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_12] [i_9 + 2] [i_12] [i_11] [i_12])) && (((/* implicit */_Bool) arr_40 [i_12] [i_11 - 3] [i_10] [i_9 + 1] [i_7 + 3]))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((var_14) ? (((/* implicit */int) (unsigned short)48493)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        arr_41 [i_12] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_11)))) ? (var_3) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_37 &= ((/* implicit */unsigned int) arr_38 [i_7] [i_9] [i_10 + 1] [i_7] [i_9]);
                        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(2019602252288739876ULL)))))))));
                        var_39 = ((/* implicit */unsigned short) max((var_39), (var_6)));
                        var_40 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-70)) ? (arr_43 [i_9 + 1] [i_9 + 1] [i_7 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9]))))), (((/* implicit */unsigned long long int) ((arr_43 [i_9 + 1] [0ULL] [i_7 + 3]) <= (arr_43 [i_9 + 2] [i_9] [i_7 + 2]))))));
                        arr_44 [i_7] [i_9] [i_10] [i_11] [i_10] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_7] [i_9 + 1] [i_10] [i_7] [i_13]))))), ((~(-613675629)))));
                    }
                    arr_45 [i_7 + 2] [i_7] [i_7] [i_7] [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 + 1] [i_10 - 1]))) == (var_1)))) & (((((/* implicit */_Bool) arr_36 [i_7 - 2] [i_9 + 1] [i_7 - 2] [i_11 + 1] [3ULL])) ? (((/* implicit */int) arr_28 [i_10] [i_9])) : (((/* implicit */int) arr_30 [i_10] [i_10] [i_10]))))));
                }
                for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 3) 
                {
                    var_41 += ((/* implicit */signed char) ((min((((((/* implicit */_Bool) 18446744073709551599ULL)) ? (14566668849493098309ULL) : (12098244028710229454ULL))), (((/* implicit */unsigned long long int) 4167586250U)))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0)))))));
                    var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [i_14] [i_9]))));
                    var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4889))) < (arr_43 [i_10 - 3] [i_10 - 3] [i_7]))))) / (min((((((/* implicit */unsigned long long int) 2380451471U)) & (1056345628831489537ULL))), (max((1296759648521550227ULL), (((/* implicit */unsigned long long int) var_2))))))));
                }
                for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    var_44 += ((/* implicit */_Bool) (-(((((/* implicit */long long int) 1311584214U)) & (6022216998804475777LL)))));
                    arr_50 [i_10] [i_9] [i_9] [i_9 + 1] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (arr_32 [i_7] [i_9 - 1] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : ((-(var_12)))))) : (min((max((arr_39 [i_15]), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31240))) != (arr_38 [i_10] [i_15] [i_10] [i_10] [i_9]))))))));
                    arr_51 [i_7] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3019287130U))));
                    var_45 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)27467))));
                }
                for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    var_46 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)71)), ((unsigned short)34295)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) (short)32757))));
                        arr_60 [i_7] [i_9 + 2] [i_10] [i_10] [i_10] [i_9 + 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_52 [i_17] [i_9] [i_9] [i_7 + 3]))) == (((/* implicit */unsigned long long int) var_7)))))) | (arr_52 [i_10 - 1] [i_10] [i_10] [i_10 - 1])));
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)4876)) ? (((((12098244028710229457ULL) + (((/* implicit */unsigned long long int) 2983383066U)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1882)))));
                    }
                    /* vectorizable */
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_49 = var_1;
                        arr_63 [i_10] [i_10] [i_9 + 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)120)) ^ (499783775)));
                        var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)4876))));
                        var_51 = ((/* implicit */unsigned int) max((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)26161)) ? (1377247615752176608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10639))))))));
                        var_52 *= ((/* implicit */unsigned int) (signed char)-47);
                    }
                    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_53 -= ((/* implicit */unsigned long long int) (((-(max((var_11), (((/* implicit */unsigned int) var_0)))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_68 [i_9] [i_10] [i_9] [i_9] [(unsigned short)2] [(signed char)7] = ((/* implicit */int) 6348500044999322176ULL);
                        var_54 = ((/* implicit */_Bool) var_6);
                        arr_69 [i_7] [i_10] [i_10] [i_16] [i_7] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) % (var_11)))))) ? (((arr_59 [i_7] [i_7 + 2] [i_9 + 1] [i_9 + 1] [i_10 + 1]) | (arr_59 [i_7] [i_7 + 1] [i_9 + 1] [i_9 + 2] [i_10 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-127)) <= (((/* implicit */int) ((arr_55 [i_10] [i_9] [i_10 + 1] [i_16]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_16]))))))))))));
                    }
                }
            }
            arr_70 [(unsigned char)6] [i_7 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_42 [i_7] [i_7 + 3] [i_7]), (((/* implicit */unsigned char) arr_27 [i_9 - 1] [1LL] [i_7 - 1]))))) ? (((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_27 [i_9 - 1] [i_9] [i_7 + 3])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) < (((/* implicit */int) arr_42 [i_7] [10ULL] [i_7])))))));
        }
        var_55 = ((arr_67 [i_7] [i_7] [i_7 + 2] [i_7] [i_7 + 3] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 1393032184U)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (557916744U))) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (var_7)))))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_20 = 0; i_20 < 23; i_20 += 1) 
    {
        for (unsigned int i_21 = 4; i_21 < 21; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 23; i_22 += 1) 
            {
                {
                    var_56 = ((/* implicit */long long int) ((min((14080202284224765876ULL), (((/* implicit */unsigned long long int) (unsigned short)34542)))) << (((((((/* implicit */_Bool) arr_79 [i_21] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) 4294967287U)) : (arr_79 [i_21 - 4] [i_21 - 4] [i_20]))) - (4294967253ULL)))));
                    var_57 = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
}
