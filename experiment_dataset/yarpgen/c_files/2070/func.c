/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2070
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
    for (short i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-19553)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (max((max((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0])), (1371752139U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_4))))))));
                var_17 = ((/* implicit */unsigned long long int) 4146754833U);
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) | (((/* implicit */int) var_11))))) ? (max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_3))))))) : (((/* implicit */int) ((((/* implicit */int) var_13)) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) var_14)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_19 &= ((/* implicit */signed char) arr_4 [2U] [i_2 - 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-(((/* implicit */int) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 10; i_5 += 2) 
                    {
                        for (short i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_20 [i_2] [i_6 + 1] [i_5 - 3] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */short) (~(4146754835U)));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((((/* implicit */long long int) arr_17 [i_5] [(signed char)10] [i_4] [(signed char)10] [(short)0])) | (arr_18 [i_3]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_2 [(unsigned char)20])))))))))));
                                var_22 &= ((/* implicit */unsigned long long int) arr_18 [i_6]);
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */unsigned long long int) (signed char)-4);
                }
            } 
        } 
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [2ULL] [i_2 + 1])) || (((/* implicit */_Bool) 3582638868U))))) ^ (((/* implicit */int) arr_3 [(unsigned char)8] [(unsigned char)8])))))));
    }
    for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 4; i_8 < 15; i_8 += 4) 
        {
            for (signed char i_9 = 1; i_9 < 16; i_9 += 4) 
            {
                {
                    var_25 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_23 [i_7 + 1] [i_8 - 4] [i_9 + 1])) ? (((/* implicit */int) arr_23 [i_7 + 1] [i_8 - 3] [i_9 - 1])) : (((/* implicit */int) arr_23 [i_7 - 1] [i_8 - 2] [i_9 - 1])))), (((((/* implicit */_Bool) arr_24 [i_7 + 1] [i_8 - 4])) ? (((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_24 [i_9 + 1] [i_9]))))));
                    var_26 |= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1067104213)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_21 [(short)9])))) ? (min((arr_26 [i_8] [i_8] [i_7 - 1] [i_8]), (1599521078U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -2119489634)) && (((/* implicit */_Bool) (signed char)14)))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_7] [i_8]))))), (max(((unsigned char)113), (((/* implicit */unsigned char) var_10)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        for (signed char i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_33 [i_9] [i_9] [(unsigned char)3] = ((/* implicit */signed char) arr_26 [i_9] [i_10] [i_10] [i_10 - 1]);
                                arr_34 [i_9] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_26 [i_9] [i_8 - 2] [(signed char)10] [i_10 + 2]), (((/* implicit */unsigned int) var_6))))) ? (min((((/* implicit */unsigned long long int) (short)32764)), (arr_22 [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((((_Bool)0) ? ((+(18446744073709551601ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_12 = 3; i_12 < 14; i_12 += 4) 
        {
            var_27 = ((/* implicit */signed char) (~(((((-1067104204) >= (((/* implicit */int) arr_23 [i_7] [i_12] [i_12])))) ? (((int) arr_24 [(signed char)5] [i_12])) : (((/* implicit */int) var_10))))));
            /* LoopSeq 2 */
            for (unsigned char i_13 = 1; i_13 < 15; i_13 += 3) 
            {
                var_28 = ((/* implicit */short) max((((/* implicit */int) (unsigned char)25)), (var_8)));
                /* LoopSeq 2 */
                for (unsigned char i_14 = 3; i_14 < 14; i_14 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_13 + 1]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */unsigned long long int) -1067104214)) - (arr_22 [i_13] [i_12 + 3]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_39 [i_7] [i_12 + 1] [i_13] [i_14 - 2] [i_14] [i_15]))))) : ((((!(((/* implicit */_Bool) 31U)))) ? (max((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_13]))) : (((/* implicit */unsigned long long int) (-(arr_26 [(signed char)16] [i_12] [i_14] [i_14])))))))))));
                        var_30 = ((/* implicit */unsigned char) ((max((arr_21 [i_7 + 1]), (((/* implicit */unsigned long long int) arr_31 [i_7] [(unsigned short)13] [i_7 + 1] [i_7] [i_7 + 1] [i_14 + 1] [i_15 - 2])))) << (((arr_21 [i_7]) - (8876910800893656415ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 4; i_16 < 14; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_13 + 2] [(signed char)13] [14] [14]))) : (arr_36 [i_7] [i_7] [i_7 + 1]))))));
                        arr_48 [i_14] [i_12] [i_13 - 1] [i_14] [15ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)130))))) * (arr_0 [i_7])));
                    }
                    for (signed char i_17 = 4; i_17 < 16; i_17 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_17] [i_17 + 1])) ? (((/* implicit */int) arr_1 [i_17] [i_17 + 1])) : (((/* implicit */int) arr_1 [i_17] [i_17 + 1]))))) ? (((((/* implicit */_Bool) arr_39 [i_14] [i_14] [i_14] [i_14 - 3] [i_14] [i_14 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_14] [i_14] [i_14 - 2] [i_14 + 2] [i_14] [i_14 + 1]))) : (2695446218U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [(short)12]))))))));
                        var_33 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (~(var_8)))), (arr_40 [i_14]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_7 + 1] [i_12 - 2] [i_13] [i_14] [i_13 - 1])) > (((/* implicit */int) (unsigned char)215)))))));
                        arr_52 [i_14] [i_14 - 1] [i_13] [i_13 - 1] [i_14] [i_14] = ((/* implicit */unsigned char) max((31U), (((/* implicit */unsigned int) -1369130678))));
                        var_34 = ((/* implicit */int) arr_25 [i_7 + 1] [i_7 + 1]);
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((short) arr_43 [i_17 - 3] [i_14] [(short)14] [i_12 - 3] [i_7 + 1])))));
                    }
                    for (signed char i_18 = 4; i_18 < 16; i_18 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12937))) : (max((((/* implicit */long long int) (unsigned char)178)), (var_12)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [(short)10] [(short)10]))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-1))))), (min((18378956770018206448ULL), (((/* implicit */unsigned long long int) (short)-15478))))))));
                        arr_56 [i_7 + 1] [i_12] [i_14] [i_12] [i_18 - 4] = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) max(((unsigned char)143), (((/* implicit */unsigned char) (signed char)108))))) < (min((((/* implicit */int) (short)12867)), ((-2147483647 - 1))))))), (max((min((var_11), ((short)17969))), (((/* implicit */short) arr_5 [i_13] [i_14]))))));
                        var_37 ^= ((/* implicit */unsigned char) var_12);
                        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_7] [5U] [4ULL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (0LL))))) ? (((/* implicit */unsigned long long int) (~(arr_25 [(signed char)2] [(signed char)4])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (min((590012760717214151ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [9U] [i_14 - 3] [i_18])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)1)))))))));
                        arr_57 [i_7] [i_12 - 1] [i_12 - 1] [i_14] [i_12 - 1] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)13603)) ? (1599521067U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 2; i_19 < 14; i_19 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_14]))) : (0U))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)12167)) : (arr_30 [i_7 - 1] [(signed char)9] [i_13 + 1] [i_14])))))))));
                        var_40 = ((/* implicit */short) max((((((/* implicit */_Bool) -1711675197)) ? (max((((/* implicit */unsigned long long int) arr_27 [i_12] [i_12] [i_13 + 2] [i_14])), (576460752303423487ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_7] [i_12] [i_13] [i_13] [i_14] [i_14 - 2] [i_19])))))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)4011))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_14] [i_14 + 2]))) : (14651015679277437372ULL)))))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((signed char) 1711675197)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_32 [i_7] [i_12] [i_13 - 1] [i_14] [i_19]), (((/* implicit */short) arr_23 [i_7] [i_7] [i_13])))))) | (arr_50 [i_7] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [(short)3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_14] [i_14]))))));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (((-(max((arr_22 [i_12] [i_12 - 3]), (((/* implicit */unsigned long long int) var_14)))))) < (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_53 [i_7 - 1])) ? (arr_22 [i_7 + 1] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))));
                    var_43 ^= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) -7096486650488391800LL)), (7104765537470453076ULL))) >> (((((/* implicit */int) var_4)) - (33527)))));
                }
            }
            for (signed char i_21 = 2; i_21 < 14; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (short i_22 = 4; i_22 < 15; i_22 += 1) 
                {
                    for (short i_23 = 3; i_23 < 16; i_23 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((signed char) (signed char)-1))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (arr_0 [i_7]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_44 [i_21] [i_21] [i_21 + 1] [i_21] [i_21 - 1]))))))));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) 1067104188))));
                        }
                    } 
                } 
                arr_72 [i_21 - 2] [i_12] [1LL] [1LL] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) arr_66 [i_7])) ? (2150626971U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_21] [14] [i_21 - 2] [i_21]))))))) % (((/* implicit */unsigned int) 754748105))));
            }
        }
        arr_73 [i_7 + 1] = ((/* implicit */short) ((min(((-(arr_22 [i_7] [i_7 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) / (arr_40 [(unsigned char)8])))))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_43 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7])), (arr_61 [i_7] [i_7]))))));
        arr_74 [i_7 + 1] [i_7 + 1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(arr_69 [i_7] [i_7 - 1] [i_7] [i_7] [(unsigned char)13])))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) (short)-12937)) ? (((/* implicit */int) arr_51 [i_7] [i_7] [1ULL] [i_7])) : (((/* implicit */int) arr_68 [(unsigned char)2] [i_7] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])))))), (((/* implicit */int) min((arr_66 [i_7]), (((/* implicit */unsigned char) (signed char)-18)))))));
        arr_75 [i_7 + 1] = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (arr_62 [5ULL] [13LL] [5ULL] [i_7 + 1] [i_7 - 1]) : (arr_62 [11ULL] [i_7] [1U] [i_7 + 1] [i_7 - 1])))));
    }
    var_46 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_9))))));
}
