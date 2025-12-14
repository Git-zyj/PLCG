/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47607
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 898657213U)))) < (var_1)))), (var_16))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) (_Bool)1))))) & (5591944U)));
            arr_5 [i_1] = ((/* implicit */int) ((short) (-(-7721298740565230454LL))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_15))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [(unsigned char)9] [i_0] = ((/* implicit */signed char) ((arr_7 [i_2]) == (((/* implicit */unsigned long long int) arr_2 [i_0] [i_4]))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) arr_18 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 2]);
                        var_21 = (-(arr_9 [i_5 + 1] [i_5]));
                        arr_19 [i_0] = ((/* implicit */signed char) ((arr_9 [i_5 + 1] [i_5 - 2]) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        var_22 = ((/* implicit */unsigned long long int) ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) <= (7248323650596466969LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) 589063495102706138ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) : (7248323650596466970LL)))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) var_14)) ^ (var_16)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((unsigned int) 1175167328U));
                        arr_23 [(signed char)4] [i_4] [7LL] [7LL] [7LL] = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_4]))));
                        var_24 = ((/* implicit */long long int) (~(arr_1 [i_2])));
                    }
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_1] [i_1] [2LL] [i_7]) * (arr_14 [i_7] [i_1] [i_2] [i_1] [i_0])));
                        var_26 = ((long long int) var_13);
                        var_27 = ((/* implicit */unsigned int) var_9);
                    }
                    for (long long int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_28 &= ((/* implicit */int) ((long long int) (short)-1036));
                        arr_28 [i_0] [i_8] = ((/* implicit */_Bool) (-(-5324742024089387613LL)));
                        var_29 = ((/* implicit */unsigned long long int) arr_27 [i_8 - 2] [i_8] [(short)0] [i_8 - 2] [i_8]);
                        var_30 = ((arr_17 [1LL] [i_8 - 3] [i_8 + 1] [i_8] [i_8 - 2]) << (((((/* implicit */int) (short)1045)) - (1039))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (-(var_14))))));
                    }
                    var_32 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (arr_16 [i_0] [i_0] [i_1] [i_2] [i_4]));
                }
                arr_29 [i_1] = arr_26 [i_0] [i_0] [(unsigned char)8] [i_0];
            }
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                arr_32 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ^ (var_10)));
                var_33 = ((/* implicit */int) ((arr_6 [i_0] [i_9 + 1] [i_0] [i_9 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) var_9))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 3; i_10 < 7; i_10 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 4; i_11 < 8; i_11 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (_Bool)1))));
                        arr_37 [i_11] [6U] [i_9 + 1] [i_11] [6U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(59010359830071404LL)))) ? (arr_16 [i_11 - 4] [(signed char)2] [(signed char)1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) arr_10 [i_10 + 2]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_40 [i_0] [i_0] [i_9] [i_12] [i_0] [i_12] = ((/* implicit */long long int) (short)822);
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_9]))))) : (arr_21 [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 - 1])));
                    }
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) 3101764568U);
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        var_39 = ((/* implicit */long long int) max((var_39), ((+(arr_12 [i_9] [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [i_10 + 1])))));
                        var_40 = ((/* implicit */unsigned int) ((long long int) arr_16 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1]));
                    }
                    arr_45 [(unsigned char)5] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
                    var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)57933))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 1; i_15 < 8; i_15 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) var_12);
                        var_43 = ((/* implicit */long long int) (-(arr_25 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])));
                        arr_48 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10 - 3] [i_15 + 2])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) * (var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
                for (long long int i_16 = 0; i_16 < 10; i_16 += 4) 
                {
                    arr_52 [(signed char)7] [i_1] [(signed char)7] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (short)1032)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9])));
                    arr_53 [i_0] [i_1] [i_1] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)1004)) <= (((/* implicit */int) (short)-14269)))) ? (((/* implicit */int) arr_24 [i_9 + 1])) : (((/* implicit */int) var_0))));
                    arr_54 [i_16] [i_9 - 1] [i_1] [i_0] = ((/* implicit */long long int) arr_18 [(unsigned char)8] [i_9 - 1] [i_9] [i_16] [i_1]);
                }
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_44 = ((/* implicit */short) (!(((/* implicit */_Bool) 576583335369905386LL))));
                arr_57 [i_17] [i_1] [i_0] [i_0] = (((~(var_1))) >> (((((/* implicit */int) arr_49 [i_0] [(_Bool)1] [i_17] [i_17])) - (56049))));
                /* LoopNest 2 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (long long int i_19 = 1; i_19 < 9; i_19 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) arr_55 [i_18 - 1] [i_19] [i_19 - 1] [i_19 - 1]))));
                            var_46 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                            arr_63 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_59 [i_1] [i_18 - 1] [i_19] [i_19 + 1]) : (arr_59 [i_0] [i_18 - 1] [i_18] [i_19 + 1])));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_20 = 1; i_20 < 9; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_21 = 3; i_21 < 8; i_21 += 4) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        arr_73 [i_0] [i_20] [i_21] [i_22] = ((/* implicit */short) var_11);
                        /* LoopSeq 2 */
                        for (short i_23 = 3; i_23 < 9; i_23 += 3) 
                        {
                            arr_76 [i_0] [i_20] [i_23] [i_22] [i_23] [(signed char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1048)) ? (((((/* implicit */_Bool) var_10)) ? (7754492204061031387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1036)))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)7))))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */_Bool) arr_33 [i_0] [1U] [i_22] [i_0] [i_0])) && (((/* implicit */_Bool) 10296598023156269663ULL)))))))));
                            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_20] [i_0] [i_23 - 3] [(unsigned char)4] [i_21 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_20]))) : ((+(var_1)))))) : (((8400947004960531953ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))))))))));
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 7248323650596466978LL)) && (((((/* implicit */_Bool) arr_17 [i_23 - 2] [i_23 - 3] [i_23] [i_23] [i_23])) && (((/* implicit */_Bool) arr_51 [i_23 + 1] [8LL] [i_23] [i_23] [8LL]))))));
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [6LL] [6LL] [(unsigned short)4] [i_22] [i_23]))) >= (var_15))))) ^ ((-(var_17)))))), (((((/* implicit */_Bool) max((var_8), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1055))) : (min((((/* implicit */unsigned long long int) var_13)), (var_7)))))))));
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_20 + 1] [i_21] [i_21 - 1] [i_23 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [i_20] [i_20 + 1] [i_20 + 1] [i_21 - 2] [i_23 - 1])))) : (((arr_21 [i_0] [i_20 - 1] [i_20] [i_21 - 1] [i_23 - 1]) + (arr_21 [i_0] [i_20 + 1] [i_0] [i_21 + 1] [i_23 + 1]))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned long long int) 0LL);
                            arr_79 [i_0] [i_20] [i_21] [i_22] [i_24] [i_24] = ((/* implicit */unsigned char) ((arr_67 [(short)8] [i_20] [(short)8]) << (((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) arr_31 [i_0] [i_20] [i_21] [i_24])) : (arr_75 [i_24]))) - (3731731502LL)))));
                            var_52 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_61 [i_20 + 1] [i_24] [i_20 + 1] [i_21 - 3])) <= (-59010359830071404LL)));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
            {
                for (long long int i_26 = 0; i_26 < 10; i_26 += 1) 
                {
                    {
                        arr_87 [i_20] [i_25] [i_20] [i_20] [i_0] = ((/* implicit */unsigned int) (-(var_4)));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) -1017293186))));
                    }
                } 
            } 
            arr_88 [i_0] = ((/* implicit */signed char) max((88504646866552923ULL), (((/* implicit */unsigned long long int) 5773385127298445849LL))));
            arr_89 [i_0] [i_0] [i_20] = var_5;
        }
        var_54 = ((((arr_61 [i_0] [(unsigned short)6] [(unsigned short)6] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [8LL] [i_0] [i_0]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [0LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) var_6))));
    var_56 = ((/* implicit */int) min((var_56), (((/* implicit */int) var_4))));
    var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((var_14) - (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (signed char)90))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
}
