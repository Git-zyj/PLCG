/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33764
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_13 [i_2] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)1] [i_3])), (18427728461326347286ULL)))));
                        arr_14 [i_2] = ((/* implicit */unsigned long long int) -4535768271007103114LL);
                        var_15 &= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((var_3) << (((/* implicit */int) (unsigned char)8))))) & (min((((/* implicit */unsigned long long int) arr_1 [4ULL])), (18427728461326347286ULL))))), ((~(arr_10 [i_2] [i_3 + 2] [i_3 + 2] [8ULL] [i_3])))));
                        var_16 ^= ((/* implicit */short) max((min((arr_10 [5LL] [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (arr_11 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((int) arr_11 [i_0] [i_3])))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (short)20007)) - ((-((-(((/* implicit */int) (unsigned char)8))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_4 = 3; i_4 < 12; i_4 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((14559390119566944053ULL) & (((((/* implicit */_Bool) 0ULL)) ? (7689154226731604944ULL) : (arr_6 [i_0] [i_4])))));
            arr_18 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4 + 2] [i_4 - 1] [i_4 - 1]))) * ((-(6736118335557516454ULL)))));
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                var_19 = ((/* implicit */int) arr_22 [(unsigned char)8] [(short)5] [(short)5]);
                var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? ((-(var_13))) : (((/* implicit */int) arr_16 [i_0] [(unsigned char)11] [i_6]))));
                var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_21 [i_6]) - (arr_21 [i_0]))));
            }
            for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) (((-(arr_7 [i_7 + 2] [i_9 - 1]))) + (((((/* implicit */_Bool) arr_17 [i_5] [i_7 - 3] [i_9 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7 - 2]))) : (arr_7 [i_7 - 1] [i_9 - 2])))));
                            var_23 ^= ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [12]))))) + (min((((/* implicit */unsigned long long int) (short)-20017)), (18446744073709551615ULL))))));
                            arr_34 [i_0] [i_5] [i_7] [0U] [i_9] |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7 + 1] [i_8 + 2] [i_9] [11U]))) - (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((576460614864470016LL) & (((/* implicit */long long int) 1016383571)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_8 + 1])) : (((/* implicit */int) (short)8506)))))))));
                        }
                    } 
                } 
                var_24 -= ((/* implicit */short) var_8);
            }
            for (short i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((~(((/* implicit */int) (short)-14402)))) - (((/* implicit */int) ((short) arr_12 [i_0] [i_0]))))))));
                var_26 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) -551717824)) : (arr_15 [i_0] [i_0]))))) ? (19015612383204330ULL) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) arr_12 [i_10] [i_10])), (arr_25 [i_5]))))));
                var_27 = ((/* implicit */short) max((arr_36 [i_5]), (((min((((/* implicit */unsigned long long int) var_7)), (6692609375074592284ULL))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_0] [i_5] [i_0])))))))));
                var_28 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_21 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) : (2775370373139719158LL))));
                var_29 *= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [i_10])) ? (((17179869180ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0] [i_5]))))) : (arr_15 [i_0] [13ULL])))));
            }
            var_30 = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_33 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5] [i_5]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_5])) && (((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */int) ((short) max((((/* implicit */int) (unsigned char)171)), (var_0))))) : ((-(((/* implicit */int) ((short) arr_3 [i_0]))))));
            var_31 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 0U)))) && (((/* implicit */_Bool) min((var_11), (var_12)))))))) | (((-4535768271007103114LL) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        }
        arr_37 [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                {
                    arr_44 [i_12] = ((/* implicit */short) min((10619407439483835405ULL), (((/* implicit */unsigned long long int) (short)-8506))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_32 |= min((((unsigned long long int) (~(arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) var_4)));
                        var_33 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) max(((short)-18358), ((short)(-32767 - 1)))))))));
                        var_34 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)21))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
    {
        var_35 &= var_2;
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) ((short) min((5034641383289466467ULL), (3160108402526812768ULL))));
                    arr_53 [(unsigned char)12] [(unsigned char)12] = ((/* implicit */short) ((min((((-5516748472471386083LL) / (((/* implicit */long long int) 2147418112)))), (((/* implicit */long long int) (short)-18358)))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_37 *= ((/* implicit */unsigned char) min((((/* implicit */short) ((arr_33 [i_14] [i_14] [i_14] [i_15] [(short)8] [i_16] [i_17]) < ((~(0ULL)))))), (min((((/* implicit */short) arr_0 [i_14] [i_17])), (max((arr_17 [i_14] [13ULL] [i_14]), (arr_54 [i_14] [i_14] [i_15] [i_16] [i_14] [i_14])))))));
                        var_38 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), (((((((/* implicit */unsigned long long int) 1023LL)) + (18446744073709551599ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_14] [i_14] [i_15] [i_16] [i_17]) == (((/* implicit */unsigned long long int) arr_19 [i_15] [i_16] [i_17]))))))))));
                        arr_56 [i_14] [i_14] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 1023LL)) : (arr_30 [i_14] [i_15] [i_15] [i_15] [i_16] [i_15])));
                        var_39 = ((/* implicit */short) ((((/* implicit */int) min((var_2), (arr_43 [i_14])))) + (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551614ULL)))))));
                    }
                }
            } 
        } 
        var_40 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8))));
        var_41 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_40 [i_14] [i_14] [i_14])))), (min((((/* implicit */int) arr_50 [i_14])), ((-(((/* implicit */int) (short)25497))))))));
    }
    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) /* same iter space */
    {
        arr_60 [i_18] = min(((~(((/* implicit */int) var_1)))), (((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_12)) - (186))))) / ((~(((/* implicit */int) (short)-4704)))))));
        arr_61 [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)57)) >= (((/* implicit */int) (short)-30814))));
        var_42 += ((/* implicit */long long int) min((min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_18] [i_18])) && (((/* implicit */_Bool) arr_3 [i_18]))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_18] [i_18] [i_18])), (var_3)))), (8388607ULL)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
    {
        arr_66 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_19])) ? (8388607ULL) : (((/* implicit */unsigned long long int) arr_65 [i_19]))));
        var_43 = ((/* implicit */unsigned int) ((4535768271007103114LL) & (((/* implicit */long long int) -1429407244))));
        arr_67 [16LL] = ((/* implicit */short) arr_62 [(unsigned char)6]);
        arr_68 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_64 [i_19])) : (((18446744073709551611ULL) + (((/* implicit */unsigned long long int) -657040022))))));
    }
    for (long long int i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            for (unsigned char i_22 = 0; i_22 < 25; i_22 += 3) 
            {
                {
                    arr_78 [i_20] [i_22] [i_22] [i_20] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 15270507233807253226ULL)))) ^ ((~(arr_63 [i_22]))));
                    arr_79 [i_22] [i_21] = ((/* implicit */short) var_13);
                    var_44 = ((/* implicit */short) 27021597764222976LL);
                    arr_80 [i_20] [i_22] [i_20] = ((/* implicit */unsigned int) (~(8733514436310965827ULL)));
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [(unsigned char)20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14))) : (arr_62 [i_20])))) ? (((/* implicit */int) max(((short)-14818), (arr_77 [i_20])))) : (((/* implicit */int) (short)6221))));
        var_46 ^= ((/* implicit */long long int) ((unsigned char) var_14));
        arr_81 [i_20] = ((/* implicit */unsigned long long int) (~((~(arr_69 [i_20] [i_20])))));
    }
    /* LoopNest 2 */
    for (short i_23 = 1; i_23 < 11; i_23 += 1) 
    {
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 1) 
        {
            {
                var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_29 [i_23 - 1])), (arr_8 [i_23 + 1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    arr_90 [8] [i_24] [i_24] &= ((/* implicit */unsigned char) ((arr_6 [i_23 - 1] [i_23 - 1]) <= (((/* implicit */unsigned long long int) arr_19 [i_23 + 1] [i_23 - 1] [i_23 - 1]))));
                    var_48 ^= ((/* implicit */short) ((((/* implicit */_Bool) -657040014)) ? (arr_84 [i_23 - 1] [(short)3] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_82 [i_23]))))) ? (((((/* implicit */_Bool) 1073741824U)) ? (arr_30 [i_23 - 1] [i_24] [i_25] [i_25] [i_25] [i_26]) : (13595123596280071006ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -782407620)) && (((/* implicit */_Bool) 113952327))))))));
                        var_50 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_65 [i_26])) ? (arr_55 [i_23]) : (((/* implicit */unsigned long long int) 113952327)))));
                    }
                    for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        var_51 = ((/* implicit */long long int) ((short) 1935134861));
                        arr_95 [i_25] [i_25] [i_27] = ((/* implicit */unsigned long long int) var_12);
                        arr_96 [i_23] [i_24] [i_25] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1023LL)) ? (((/* implicit */long long int) (-(1433577832)))) : (((long long int) 8150937198070498871ULL))));
                    }
                    var_52 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_4))) ? ((+(arr_55 [i_25]))) : (((/* implicit */unsigned long long int) var_5))));
                }
                var_53 = ((/* implicit */unsigned long long int) max((((((((/* implicit */long long int) 3221225440U)) - (9223372036854775796LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2147483646) : (((/* implicit */int) (short)-32754))))))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_23 + 1])))));
            }
        } 
    } 
}
