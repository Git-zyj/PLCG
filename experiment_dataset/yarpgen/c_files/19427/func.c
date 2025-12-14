/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19427
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 *= ((/* implicit */signed char) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) arr_0 [(unsigned short)7]);
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1])))))) || (((var_7) >= (((/* implicit */long long int) arr_1 [i_1 - 1]))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32198)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_11))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_15 = max((arr_6 [i_2 + 1]), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) : (arr_7 [i_2] [5U]))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_7 [i_2 - 2] [i_2 + 1])))) ? (max((((/* implicit */long long int) -451687227)), (min((((/* implicit */long long int) arr_7 [(unsigned short)10] [(unsigned short)10])), (arr_6 [9LL]))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-8))))), (max((arr_6 [i_2]), (((/* implicit */long long int) (signed char)34))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */_Bool) ((short) arr_7 [i_3] [i_3]));
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) var_4);
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3 + 1] [(short)9]))));
        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (var_5) : (arr_9 [i_3 - 1])));
    }
    for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
    {
        var_19 = arr_9 [i_4];
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
            {
                var_20 = ((/* implicit */short) min((var_5), (((/* implicit */long long int) (signed char)73))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1048064U)))))));
            }
            for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1535389510)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (1444021958U))) << (((((/* implicit */int) arr_21 [i_5 + 2] [i_5 + 2] [i_4])) >> (((max((((/* implicit */long long int) (unsigned char)170)), (arr_9 [i_4]))) - (164LL)))))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_17 [i_4] [i_4] [i_7])), (var_6))) / (((/* implicit */long long int) ((/* implicit */int) (short)15471)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(signed char)18] [i_5])) ? (1048064U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (arr_13 [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5 + 1] [(signed char)7]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-117))))) + (((/* implicit */int) (short)-29364)))))));
                var_24 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1535389512))));
                var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) var_1)), (arr_7 [i_4 + 1] [i_7 + 3]))) < (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7]))))))))));
                var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4 - 2] [i_5 - 2] [i_7 + 2])) ? (((/* implicit */int) max((arr_22 [i_4 - 2] [i_5 - 2] [i_7 + 2]), (arr_22 [i_4 - 2] [i_5 - 2] [i_7 + 2])))) : (((/* implicit */int) ((unsigned short) arr_22 [i_4 - 2] [i_5 - 2] [i_7 + 2])))));
            }
            var_27 = ((/* implicit */_Bool) arr_7 [i_4] [i_4]);
            arr_23 [i_4] [i_4] = ((/* implicit */unsigned long long int) max(((+(min((((/* implicit */long long int) arr_14 [i_4] [15LL] [i_4])), (var_7))))), (max(((-(arr_19 [i_4]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_4] [(unsigned char)5] [(unsigned char)5])))))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_4 + 1] [i_4] [i_4 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 2; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            arr_35 [i_10] [i_10] = ((/* implicit */long long int) (+(arr_31 [i_10 + 2] [i_8] [i_9] [i_10] [i_9] [i_4 + 1])));
                            arr_36 [i_4] [13LL] [i_10] [i_10 - 1] [13LL] = ((((/* implicit */_Bool) arr_6 [i_4 - 2])) ? (((1657688160460003859ULL) / (((/* implicit */unsigned long long int) 536870848U)))) : (((((/* implicit */_Bool) arr_12 [i_8])) ? (2305843000623759360ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8] [i_8] [14U] [i_10] [i_11] [i_10])))))));
                            arr_37 [i_10] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_9])) && (((/* implicit */_Bool) 507904ULL))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1874706689)) ? (((/* implicit */long long int) 1048064U)) : (3683010987017841912LL)));
                arr_38 [i_9] [i_8] [i_8] [i_8] = ((/* implicit */signed char) var_7);
                var_31 = ((/* implicit */unsigned char) ((short) (!((_Bool)1))));
            }
            for (unsigned char i_12 = 3; i_12 < 17; i_12 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    arr_45 [i_4] [i_8] [5] [i_13] = ((/* implicit */_Bool) (-(arr_34 [i_4] [i_13 - 2] [i_12 - 2] [i_12 - 2] [i_4 - 2])));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_4] [i_8] [i_4])) || (((/* implicit */_Bool) arr_21 [i_4] [i_8] [i_8]))));
                }
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    arr_48 [14LL] = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [(signed char)1] [i_8] [i_12 + 1] [13ULL] [i_12] [7])) >> ((((-(1535389510))) + (1535389536)))));
                    arr_49 [i_4] [i_4 - 2] [i_4 - 2] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) 1535389510);
                }
                for (unsigned short i_15 = 3; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)94))))));
                    var_34 = ((/* implicit */_Bool) ((long long int) arr_47 [i_4 - 1] [i_15 - 3]));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 19; i_16 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_4 - 2])) ? (arr_44 [i_12] [i_12 - 1] [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_12 - 2] [i_12 - 2])))));
                        var_36 &= ((/* implicit */short) var_6);
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (-(2097152))))));
                        var_38 = ((/* implicit */unsigned long long int) (-((+(709406082U)))));
                        arr_54 [(_Bool)1] [i_4] = ((/* implicit */signed char) ((arr_7 [i_4] [i_8]) << (((((arr_7 [i_12] [i_16]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_4] [i_4] [i_4]))))) - (376U)))));
                    }
                    var_39 = ((/* implicit */_Bool) (~(var_1)));
                }
                for (unsigned short i_17 = 3; i_17 < 16; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_12 - 2])) ? (((/* implicit */long long int) 2097152)) : (arr_6 [i_12 + 2])));
                        var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */long long int) var_3)) : (var_5))) ^ (arr_6 [i_4])));
                        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_4] [i_4] [i_4] [i_8] [i_4 + 1] [(signed char)5])) ? (1535389509) : (((/* implicit */int) arr_46 [i_4] [i_8] [i_12] [i_8] [i_4 - 2] [i_8]))));
                        arr_60 [i_18] [i_8] [i_12] [i_8] [i_18] [i_8] [i_18] = ((/* implicit */unsigned int) ((7559294628041502665LL) << (((/* implicit */int) (!(((/* implicit */_Bool) 36028797010575360ULL)))))));
                    }
                    for (unsigned long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                    {
                        var_43 = ((/* implicit */int) ((unsigned short) var_10));
                        var_44 = ((/* implicit */signed char) (~(arr_59 [i_19 - 1] [i_12] [i_4] [i_12] [i_4] [i_4 + 1] [i_4])));
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_45 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (arr_14 [i_4] [i_8] [i_20]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_57 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_29 [i_4] [i_8])))) : (arr_18 [i_4 - 1] [i_4 + 1] [i_4 - 1])));
                        arr_65 [2ULL] [2ULL] [(signed char)6] [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_17 [i_20 - 1] [i_12 + 1] [i_4 - 1]))));
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_17 [i_4 - 1] [i_12 + 2] [i_17 - 2]))));
                    }
                    for (unsigned int i_21 = 1; i_21 < 17; i_21 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_43 [i_4 - 1] [i_4 - 1] [i_4 - 1])) - (((/* implicit */int) arr_57 [i_4 - 2] [i_17] [i_12 - 2] [i_17 + 3] [i_17 + 3] [i_17 + 1] [i_4]))));
                        var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12 + 1] [i_12] [i_21 + 1]))) : (arr_42 [i_4] [i_4] [i_4] [i_17])));
                        arr_69 [i_4] [i_4] [i_4] [i_4] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4488770495890311710LL)) ? (-2785186036088318145LL) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [2U] [2U] [(unsigned short)18])))))) <= (((((/* implicit */unsigned long long int) 2145386496U)) * (var_9)))));
                    }
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_64 [i_4] [i_12] [i_4] [i_4] [i_4]))))))));
                }
                var_50 = ((/* implicit */unsigned int) ((-7556892395354914123LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))));
                var_51 = ((/* implicit */unsigned short) ((signed char) ((arr_67 [(short)14] [i_8] [(unsigned char)1] [i_8] [i_8] [(signed char)18] [(unsigned char)1]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                var_52 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_4] [i_4] [i_8] [i_12])) ? (arr_53 [(short)11] [(short)11] [i_8] [(short)11] [i_4 - 1]) : (((/* implicit */unsigned long long int) arr_19 [i_8])))))));
            }
            for (short i_22 = 0; i_22 < 19; i_22 += 3) 
            {
                var_53 = (!(((/* implicit */_Bool) 8388608U)));
                arr_72 [i_4] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_41 [i_4] [i_8] [i_4 + 1])) >= (arr_71 [18U] [18U])));
            }
            /* LoopSeq 2 */
            for (signed char i_23 = 0; i_23 < 19; i_23 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_24 = 0; i_24 < 19; i_24 += 1) 
                {
                    arr_78 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_4 - 2] [i_4 - 2] [i_4] [i_4])) - (((/* implicit */int) var_11))))) ? (((/* implicit */int) (unsigned char)255)) : (((int) arr_26 [i_4 + 1] [i_8] [17] [i_8]))));
                    arr_79 [i_4] [i_8] [i_23] [i_23] [(signed char)15] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_58 [i_23] [(short)0] [i_23] [i_23] [(short)0] [(short)0]))) ? (((/* implicit */int) arr_29 [i_23] [i_8])) : (((/* implicit */int) arr_68 [i_4] [i_8] [i_23] [i_24] [i_4 - 1]))));
                    var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) -7304728180303239186LL))));
                }
                /* LoopSeq 1 */
                for (signed char i_25 = 1; i_25 < 15; i_25 += 3) 
                {
                    arr_82 [i_23] [i_23] [i_23] [i_25] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_26 [i_4] [(signed char)17] [i_23] [i_23])) ? (6721988174299465950ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_25 + 4] [i_23]))))));
                    var_55 += ((/* implicit */signed char) (short)8335);
                }
                var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) ((_Bool) arr_71 [i_4] [i_4]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_80 [i_4 + 1] [i_4 + 1])))))));
            }
            for (short i_26 = 2; i_26 < 18; i_26 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_27 = 3; i_27 < 15; i_27 += 1) 
                {
                    for (long long int i_28 = 0; i_28 < 19; i_28 += 1) 
                    {
                        {
                            arr_90 [i_4] [i_8] [(signed char)12] [i_8] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 534773760)) ? (1657688160460003859ULL) : (((/* implicit */unsigned long long int) arr_19 [i_4]))))) ? (1069547520) : (((/* implicit */int) arr_14 [i_4] [i_8] [i_8]))));
                            var_57 = arr_67 [i_4 - 2] [i_4 - 2] [i_8] [i_4 - 2] [i_27 - 1] [i_28] [(short)12];
                            var_58 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_4 - 1]))));
                        }
                    } 
                } 
                arr_91 [i_4 - 2] [i_8] [i_4 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) arr_67 [i_4] [12LL] [12LL] [12LL] [i_4] [15U] [i_4]))))) ? (((/* implicit */int) arr_58 [i_4] [i_26 - 2] [i_26 - 2] [i_26] [i_26 - 2] [i_26])) : (((/* implicit */int) arr_76 [i_8] [i_4] [i_4] [i_8]))));
            }
        }
        for (long long int i_29 = 0; i_29 < 19; i_29 += 1) 
        {
            var_59 *= ((/* implicit */long long int) ((min((((/* implicit */int) (signed char)64)), (arr_18 [i_4 - 1] [i_4 - 1] [(short)17]))) / ((+(65280)))));
            var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24525)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (unsigned char)255)))))));
        }
    }
}
