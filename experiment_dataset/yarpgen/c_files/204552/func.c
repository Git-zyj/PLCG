/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204552
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
    var_16 = var_12;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [6] = ((/* implicit */unsigned char) (-(arr_5 [i_2])));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) 1565860285);
                        arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */long long int) (_Bool)1);
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((unsigned long long int) ((unsigned char) 3570176147131309139LL))))));
                        /* LoopSeq 3 */
                        for (int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_1] [i_2] [(_Bool)1] &= ((/* implicit */unsigned int) ((long long int) ((arr_2 [6U] [i_1]) % (((/* implicit */long long int) 209493265U)))));
                            var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((-(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_4 - 1] [i_4 + 1]))));
                            var_20 -= ((/* implicit */int) (_Bool)1);
                        }
                        for (int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned char) (-(arr_9 [i_0] [i_1] [(unsigned char)8] [8] [(unsigned char)8] [i_5 + 1])));
                            var_22 |= ((/* implicit */unsigned long long int) ((int) 4633446586310444334ULL));
                            var_23 = ((/* implicit */int) arr_0 [i_1]);
                            var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_5) * (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 1] [i_1]))));
                        }
                        for (int i_6 = 1; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_6 - 1] [i_1]))));
                            var_25 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (4611685949707911168LL) : (-3570176147131309110LL))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551605ULL))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_26 &= ((/* implicit */unsigned int) ((arr_9 [i_7] [i_8 + 1] [i_7] [i_8 + 1] [i_8] [i_8]) - (18446744073709551610ULL)));
                                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_9)))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_7])) ? (arr_18 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [(unsigned char)6] [i_7]) : (arr_18 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8] [i_7]))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)178))) : (arr_26 [i_1] [i_1] [i_0] [i_0])))) || ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))));
                }
            } 
        } 
        var_30 = ((/* implicit */unsigned int) (~(14ULL)));
        arr_29 [i_0] = ((/* implicit */unsigned long long int) (-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_30 [i_0] = ((/* implicit */long long int) arr_26 [(_Bool)1] [i_0] [i_0] [(_Bool)1]);
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((unsigned long long int) ((int) 162906219U))))));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [4ULL] [4ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_14)) : (18420332912867611639ULL))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (int i_12 = 3; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (2843579781U)))));
                            var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_12 + 2])) ? (arr_21 [i_12 + 2] [i_9] [i_10] [i_9] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_9] [3LL] [i_10] [i_10] [i_11] [i_12]))))) * (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (20)))))));
                var_36 = ((/* implicit */long long int) arr_33 [i_13] [i_9]);
            }
            arr_44 [i_0] [i_9 + 1] [i_9] = ((/* implicit */int) ((((unsigned int) (_Bool)1)) >> (((((((/* implicit */_Bool) 4294967295U)) ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) -1874816633)))) - (160902831U)))));
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 4) 
    {
        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_14]))))) : (((/* implicit */int) (_Bool)1))));
        arr_47 [i_14] = ((/* implicit */unsigned long long int) arr_45 [i_14]);
    }
    /* LoopSeq 3 */
    for (long long int i_15 = 0; i_15 < 12; i_15 += 2) /* same iter space */
    {
        var_38 = min(((~((~(18420332912867611639ULL))))), (((/* implicit */unsigned long long int) var_15)));
        var_39 &= ((/* implicit */unsigned int) 1ULL);
    }
    /* vectorizable */
    for (long long int i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
    {
        var_40 += ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)255)))));
        /* LoopNest 3 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 10; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) 
                {
                    {
                        arr_59 [5] [i_18] [0] [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_16] [i_19]))) & (arr_57 [i_16] [i_17] [i_17] [i_18] [i_19])))) ? ((~(var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_19] [i_17] [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))));
                        var_41 = ((((/* implicit */_Bool) ((arr_21 [i_19] [i_16] [i_18] [i_16] [i_16]) | (((/* implicit */long long int) arr_25 [i_19] [i_17] [i_18] [i_16]))))) || (((/* implicit */_Bool) ((long long int) var_12))));
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */_Bool) min((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_11 [i_16] [i_16] [i_16]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))) > (1050650527U)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165))))))))));
    }
    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
    {
        var_43 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)213)))));
        var_44 = ((/* implicit */int) (-(min(((~(1653789359746257121ULL))), (((/* implicit */unsigned long long int) arr_58 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]))))));
        var_45 = ((/* implicit */unsigned int) -3892766528376883534LL);
        /* LoopSeq 2 */
        for (int i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_22 = 1; i_22 < 9; i_22 += 2) 
            {
                var_46 ^= ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_15)))) : (((((/* implicit */_Bool) 5484396011857870196ULL)) ? (arr_58 [i_22] [9] [(unsigned char)0] [i_21] [0U] [9]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_22]))))))) - (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_64 [i_22] [i_21])))))))));
                var_47 = ((/* implicit */int) arr_50 [i_21] [i_21]);
                var_48 = (-(min((arr_54 [i_20] [i_20]), (arr_54 [i_20] [i_21]))));
            }
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                var_49 = ((/* implicit */int) arr_10 [4U] [i_23]);
                var_50 = ((/* implicit */_Bool) 1504390388U);
                var_51 &= ((/* implicit */unsigned char) ((unsigned int) arr_53 [i_20] [i_20] [i_20]));
            }
            var_52 = ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (((/* implicit */unsigned long long int) (-(arr_51 [i_20]))))));
        }
        /* vectorizable */
        for (int i_24 = 3; i_24 < 9; i_24 += 2) 
        {
            var_53 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
            var_54 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_20] [i_20] [i_24] [i_20] [i_20])) ? (-3462715587624132511LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) ? (arr_36 [9ULL] [i_24]) : (arr_18 [i_20] [i_24 + 2] [i_24 - 2] [8] [i_24] [i_24] [i_20])));
        }
        var_55 |= arr_32 [i_20] [i_20];
    }
    /* LoopSeq 3 */
    for (int i_25 = 0; i_25 < 20; i_25 += 4) 
    {
        /* LoopNest 3 */
        for (int i_26 = 1; i_26 < 17; i_26 += 2) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                for (int i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    {
                        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [14] [14] [i_27] [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) ((-4611685949707911147LL) != (((/* implicit */long long int) 245017231)))))) : (arr_74 [i_28])))))))));
                        arr_86 [(_Bool)1] [11LL] [i_27] [i_27] [i_28] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) << (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3064910065U)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 3803452456U)) : (11858271265934119584ULL)))))));
                        arr_87 [i_25] [i_25] [i_27] [i_28] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                        var_57 = ((/* implicit */int) 12609354516221683779ULL);
                        var_58 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((((-489272758) | (((/* implicit */int) var_13)))), (((/* implicit */int) ((_Bool) arr_79 [i_27] [i_27] [i_27])))))), ((~(max((arr_82 [(_Bool)1] [(_Bool)1] [i_27] [(_Bool)1]), (30LL)))))));
                    }
                } 
            } 
        } 
        arr_88 [i_25] = ((/* implicit */unsigned int) ((int) -245017205));
        var_59 += ((/* implicit */int) (_Bool)1);
    }
    for (unsigned long long int i_29 = 3; i_29 < 8; i_29 += 1) 
    {
        var_60 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_29] [i_29] [(unsigned char)6] [i_29] [i_29])), (6031314615311072994LL)))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_53 [i_29] [i_29 + 1] [i_29 - 2]))));
        /* LoopNest 2 */
        for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        arr_97 [i_32] [i_31] [i_30] [7U] [i_32] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((int) arr_46 [i_31]))))) + (-2687304035924070140LL)));
                        var_61 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) -1)) | (min((((/* implicit */long long int) (unsigned char)208)), (arr_82 [i_29 + 2] [i_29 - 2] [4ULL] [4ULL])))));
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 3) 
                    {
                        arr_101 [i_29] [i_30] [i_33] [i_33] = ((/* implicit */int) var_1);
                        /* LoopSeq 1 */
                        for (int i_34 = 1; i_34 < 7; i_34 += 2) 
                        {
                            var_62 = ((/* implicit */int) ((_Bool) (_Bool)1));
                            var_63 ^= ((/* implicit */unsigned long long int) arr_38 [i_34 + 1] [4LL] [4LL] [i_29]);
                            var_64 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_29] [i_29] [i_29] [i_33] [i_29])) || (((/* implicit */_Bool) arr_0 [i_29])))))) : (((unsigned long long int) var_15))))));
                            var_65 += ((/* implicit */unsigned long long int) (~(((-2053380819) ^ (((/* implicit */int) arr_49 [i_29]))))));
                        }
                    }
                    var_66 = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (((arr_46 [i_31]) ^ (2489716915U))));
                    var_67 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_93 [i_29] [i_30] [i_31] [i_30])) ? (((/* implicit */int) arr_37 [6] [i_29 + 1] [i_29 - 2] [6])) : (((/* implicit */int) arr_33 [i_29 + 3] [i_30]))))) ^ (3562025545U)));
                    /* LoopNest 2 */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        for (long long int i_36 = 0; i_36 < 11; i_36 += 2) 
                        {
                            {
                                var_68 = ((/* implicit */_Bool) arr_48 [i_35]);
                                var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) arr_3 [i_29 + 1] [i_29 - 1] [i_36]))));
                            }
                        } 
                    } 
                    var_70 = ((/* implicit */unsigned long long int) max((var_70), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) ((((/* implicit */int) var_7)) >> ((((((-2147483647 - 1)) - (-2147483633))) + (23))))))), ((-(((((/* implicit */long long int) 4294967295U)) - (var_1))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_37 = 0; i_37 < 15; i_37 += 2) 
    {
        arr_113 [i_37] [i_37] = (+(arr_112 [14ULL]));
        arr_114 [i_37] = ((unsigned long long int) arr_78 [i_37]);
    }
}
