/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2390
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (short)11154))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_9))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_1 - 2] [i_1 - 2] [9U] = ((/* implicit */int) var_6);
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_1 - 3] [i_3])) / (((((/* implicit */_Bool) arr_10 [i_0] [i_2 + 1] [i_1 - 3] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_1 + 1] [i_3])) : (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_1 + 1] [i_0]))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) 16247316564483968147ULL))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 12; i_4 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_14 [i_4 + 1]))));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((arr_13 [i_4 - 3]) & (arr_13 [i_4 - 3])));
    }
    var_22 = var_4;
    /* LoopSeq 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_23 = ((/* implicit */int) arr_4 [(unsigned short)4]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                arr_25 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_0 [i_5]);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_8))));
                            var_25 -= ((/* implicit */short) arr_19 [i_7]);
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) arr_11 [i_5] [i_6] [i_6]))));
        }
    }
    for (short i_10 = 1; i_10 < 8; i_10 += 2) 
    {
        var_27 = ((/* implicit */signed char) arr_23 [i_10] [(_Bool)1] [i_10]);
        var_28 = ((/* implicit */short) var_2);
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    {
                        arr_42 [i_10] [i_10] [i_10 + 1] [i_11] [i_10] [i_13] = -6023655728419028516LL;
                        arr_43 [i_10] [i_10] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */short) var_11);
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)32167)) : (((/* implicit */int) arr_2 [i_10 - 1]))))) ? (arr_34 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_30 = ((/* implicit */unsigned long long int) var_13);
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_22 [2ULL] [i_10])) + (2147483647))) >> (((((((/* implicit */_Bool) arr_33 [6])) ? (((/* implicit */int) arr_26 [i_10 + 1])) : (((/* implicit */int) arr_33 [0])))) - (41412))))))));
    }
    for (int i_14 = 2; i_14 < 21; i_14 += 1) 
    {
        arr_47 [i_14] = ((/* implicit */unsigned short) arr_44 [i_14] [i_14]);
        /* LoopNest 2 */
        for (unsigned short i_15 = 1; i_15 < 21; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) var_4);
                                var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4407539845878775919LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_14] [i_14] [i_16] [i_18])))))) ? (((/* implicit */int) arr_46 [i_15 + 1])) : (((/* implicit */int) var_8)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        arr_60 [i_14] [i_15] [i_15 - 1] [i_14] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || ((_Bool)1)))) % (((/* implicit */int) var_1))));
                        var_34 -= arr_50 [(unsigned short)19] [i_15 + 3] [i_15 + 3] [(_Bool)1];
                    }
                    for (short i_20 = 3; i_20 < 20; i_20 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 2; i_21 < 22; i_21 += 2) 
                        {
                            arr_67 [i_14 + 3] [i_15] [i_16] [i_20] [i_14] = ((/* implicit */unsigned char) var_0);
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (short)-2660))));
                            var_36 -= ((/* implicit */_Bool) arr_51 [i_15 + 2] [i_15 + 1] [i_15]);
                        }
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_15 + 2] [i_20 + 2])) ? (arr_62 [i_15 + 2] [i_20 - 3]) : (arr_62 [i_15 + 2] [i_20 + 2])))) ? (((/* implicit */int) var_11)) : (arr_62 [i_15 + 3] [i_20 + 3]))))));
                        var_38 = ((/* implicit */signed char) arr_56 [i_14] [i_14] [i_14] [i_14] [i_14]);
                        /* LoopSeq 3 */
                        for (int i_22 = 1; i_22 < 22; i_22 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */_Bool) var_15);
                            var_40 -= ((/* implicit */unsigned short) var_15);
                        }
                        /* vectorizable */
                        for (int i_23 = 1; i_23 < 22; i_23 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */short) arr_45 [i_23 - 1]);
                            var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) arr_58 [(signed char)20]))));
                            arr_73 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-125)) : (((var_14) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)248))))));
                            arr_74 [i_14] [i_15 + 2] [i_16] [i_20] [i_14] = ((/* implicit */signed char) ((arr_72 [i_15] [i_14] [i_14 + 2] [i_20] [i_23 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_14] [i_14] [i_23 - 1] [i_14 - 1] [i_23 - 1] [i_23]))) : (2199427509225583474ULL)));
                        }
                        /* vectorizable */
                        for (int i_24 = 1; i_24 < 22; i_24 += 1) /* same iter space */
                        {
                            var_43 += ((/* implicit */short) arr_59 [i_14] [i_16] [i_20]);
                            var_44 = ((((/* implicit */_Bool) arr_48 [i_14 + 2] [i_14 - 2])) ? (((/* implicit */int) arr_76 [i_14 - 1] [(_Bool)1] [i_15 - 1])) : (((/* implicit */int) arr_76 [i_14 + 2] [i_14] [i_15 + 2])));
                            var_45 = ((/* implicit */signed char) arr_55 [i_14] [i_14] [i_14] [10U] [i_14]);
                            arr_77 [i_14] [i_14] [(unsigned char)19] [i_20 - 1] [i_24] = ((((((/* implicit */long long int) -30045318)) > (arr_75 [i_14 + 3] [i_15] [i_16] [i_24 - 1] [i_24] [i_16] [i_14]))) && (((/* implicit */_Bool) var_12)));
                            var_46 -= ((/* implicit */unsigned int) 16247316564483968147ULL);
                        }
                    }
                    for (short i_25 = 3; i_25 < 20; i_25 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */signed char) var_10);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_48 = ((/* implicit */int) var_12);
                            var_49 -= ((/* implicit */unsigned long long int) (_Bool)0);
                        }
                        /* vectorizable */
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                        {
                            var_50 += ((/* implicit */unsigned short) arr_54 [22U] [i_25] [i_16] [i_15 + 2] [22U]);
                            var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) arr_59 [(_Bool)1] [i_14 + 2] [i_14 - 2]))));
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) arr_70 [i_14] [(signed char)19]))));
                            arr_89 [i_14] [i_14] [i_15] [i_16] [(_Bool)1] [i_25] [i_28] = ((/* implicit */int) arr_59 [i_14 + 2] [i_14 + 1] [i_15 + 1]);
                            arr_90 [i_14] [i_15] [i_14] [i_25] [i_25] [i_28] = ((/* implicit */int) (short)19705);
                        }
                        var_53 = ((/* implicit */unsigned long long int) arr_78 [i_16] [i_16] [i_15]);
                        var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_65 [(short)2] [10LL] [i_16] [i_16] [6LL] [i_25])) == (((/* implicit */int) (_Bool)1)))))) : (((18446744073709551613ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [14LL] [22U] [i_15] [i_16] [i_25] [(_Bool)1])))))))) ? (((/* implicit */long long int) arr_88 [i_14 + 1] [i_15 + 1] [i_16] [i_25] [i_16] [i_16])) : (var_0))))));
                    }
                    arr_91 [i_14] [i_15] [i_16] [(unsigned short)21] = ((/* implicit */_Bool) 1938525284);
                }
            } 
        } 
        arr_92 [i_14] [i_14] = ((((((/* implicit */_Bool) arr_54 [i_14] [i_14 - 1] [8LL] [8LL] [i_14])) ? (((/* implicit */unsigned long long int) -30045318)) : (var_15))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_14] [i_14 + 3] [i_14 + 2]))));
    }
}
