/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197590
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
    var_15 &= ((/* implicit */_Bool) ((((/* implicit */int) (short)15773)) >> (((((/* implicit */int) var_4)) - (18900)))));
    var_16 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)127)), ((-(((/* implicit */int) (short)-15214))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32)) ? (1565404607U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) (short)15773);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)32)))))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_2] [i_4] [i_0] [i_4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned int) var_8)) : (arr_5 [i_0] [i_0]))))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : ((-(((/* implicit */int) (unsigned short)32))))));
                        var_20 = ((/* implicit */signed char) (short)-15747);
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((short) (~(arr_5 [i_1] [i_1])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((var_8) / (((/* implicit */int) arr_12 [i_5] [(signed char)4] [i_2] [i_5])))))))));
                            arr_18 [i_0] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2729562689U)) ? (var_3) : (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_5] [i_6]))))));
                            var_23 = ((/* implicit */int) 1449796399U);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [17ULL] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [8] [i_0] [8] [i_5 - 1]))) > (arr_15 [i_6 - 2] [i_6] [i_5 - 3] [i_2] [i_1] [i_0]))))) : (arr_7 [i_6] [i_6 + 4] [i_6 - 3])));
                            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9553959517842018772ULL)) || (((/* implicit */_Bool) var_8))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_5 - 2] [i_1]))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 1987016507))));
                            var_28 -= ((/* implicit */unsigned char) arr_8 [(short)14] [(short)14] [(short)14] [i_2] [i_2] [i_7]);
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (-(var_11))))));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((var_6) - (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32761))))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned short) (~(arr_25 [i_8 - 4] [(_Bool)1] [i_8 - 3] [i_8 - 1] [i_8 + 1])));
                        var_32 += ((/* implicit */unsigned char) 4428124522329653624LL);
                        arr_26 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_25 [i_0] [i_2] [i_1] [i_0] [i_0]));
                    }
                    arr_27 [0LL] [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)127)))) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [13] [i_2]) : (((((/* implicit */_Bool) arr_17 [(unsigned char)14] [i_1] [i_1] [i_1] [i_2] [i_2] [i_2])) ? (max((((/* implicit */unsigned long long int) var_11)), (9553959517842018772ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_28 [i_0] = ((/* implicit */unsigned char) ((short) (unsigned char)255));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            arr_34 [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) / (((unsigned int) -9223372036854775792LL))))));
            var_33 -= ((/* implicit */unsigned int) var_8);
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65519)) ? (arr_32 [i_10]) : (arr_32 [i_9]))) + (((/* implicit */long long int) ((int) (-(((/* implicit */int) (unsigned short)11788)))))))))));
        }
        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            arr_37 [i_9] [i_11] &= ((/* implicit */short) (~((-(min((((/* implicit */unsigned long long int) (signed char)6)), (8892784555867532843ULL)))))));
            /* LoopSeq 3 */
            for (long long int i_12 = 3; i_12 < 19; i_12 += 1) /* same iter space */
            {
                arr_42 [3ULL] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_38 [i_9] [i_12] [i_12] [9LL]))))))));
                var_35 = ((/* implicit */_Bool) max((max((arr_30 [i_12 - 3] [i_12 + 1]), (arr_30 [i_12 + 2] [i_12 + 2]))), (((/* implicit */long long int) ((unsigned int) arr_30 [i_12 + 1] [i_12 + 2])))));
            }
            for (long long int i_13 = 3; i_13 < 19; i_13 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned char)60)))), ((((_Bool)0) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (unsigned short)8191))))));
                /* LoopSeq 2 */
                for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_43 [i_13 - 3] [i_13 - 1] [i_13 - 1]))) ? (((/* implicit */long long int) min((1987016507), (((/* implicit */int) (signed char)6))))) : (((arr_33 [i_9] [i_14]) / ((-(-9223372036854775764LL)))))));
                    var_38 = ((/* implicit */int) (!((((((_Bool)1) ? (((/* implicit */int) arr_48 [i_9] [i_11] [i_13] [i_14])) : (((/* implicit */int) (signed char)46)))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_48 [i_9] [i_11] [i_9] [i_14]))))))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (unsigned short)31925))))) ? (var_3) : (((/* implicit */int) var_14))))) | (min((((((/* implicit */_Bool) 9223372036854775763LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_32 [(unsigned char)13]))), (((/* implicit */long long int) arr_40 [i_13 - 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_53 [i_14] [i_11] [(unsigned char)7] [i_13 - 1] [(unsigned short)5] [(unsigned short)14] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (9223372036854775764LL) : (((/* implicit */long long int) arr_52 [i_14]))))));
                        arr_54 [i_9] [16] [3U] [i_13] [i_14] [i_14] [16] = (-((-(5281002944412937683LL))));
                        var_40 = ((/* implicit */long long int) max((var_40), (((((arr_33 [i_15 - 1] [17]) + (9223372036854775807LL))) >> (((5281002944412937683LL) - (5281002944412937660LL)))))));
                    }
                }
                /* vectorizable */
                for (short i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    var_41 = ((/* implicit */int) arr_40 [i_11]);
                    var_42 = ((/* implicit */unsigned short) arr_40 [i_9]);
                }
                /* LoopNest 2 */
                for (unsigned char i_17 = 2; i_17 < 20; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */_Bool) var_1);
                            var_44 = ((/* implicit */signed char) (~((~(max((((/* implicit */unsigned long long int) arr_60 [i_11] [i_11] [i_11] [6U])), (arr_36 [i_17 + 1])))))));
                            var_45 = ((/* implicit */signed char) arr_62 [i_13] [i_11] [i_13] [i_17] [(short)3] [(_Bool)1] [(short)3]);
                            var_46 = ((/* implicit */unsigned short) (-(((arr_36 [i_13 + 1]) / (((/* implicit */unsigned long long int) arr_39 [i_13] [i_13] [i_13 + 1] [i_17 + 2]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                var_47 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_45 [i_9]))));
                var_48 = ((/* implicit */short) arr_62 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (var_3)));
            }
        }
        /* vectorizable */
        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            var_50 &= ((/* implicit */unsigned short) (+(arr_33 [i_9] [i_20])));
            var_51 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_52 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_53 = ((((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_9] [i_20]))) + (var_11))) / (((((/* implicit */_Bool) arr_61 [(unsigned char)13] [i_20] [i_21] [i_22])) ? (arr_32 [(unsigned short)3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))));
                        var_54 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */int) var_12))))) ? (arr_31 [i_20] [i_21]) : (((/* implicit */unsigned int) arr_52 [i_22]))));
                        arr_72 [i_22] [i_20] [i_21] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) ((var_3) > (((/* implicit */int) arr_60 [i_9] [i_9] [i_9] [21]))))) << (((((-5281002944412937711LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))) + (5281002944412937720LL)))));
                        arr_73 [i_22] [i_21] [i_20] [i_20] [i_20] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        }
        var_55 = ((/* implicit */int) (((~((((_Bool)1) ? (2365680785U) : (((/* implicit */unsigned int) arr_52 [i_9])))))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [4U] [i_9] [i_9] [i_9])) - (((/* implicit */int) var_4)))))));
    }
    var_56 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)244))))) ? (((((/* implicit */_Bool) ((-9160267202425023972LL) | (((/* implicit */long long int) 1166697359))))) ? (var_8) : (((/* implicit */int) (unsigned short)25676)))) : (((/* implicit */int) var_2))));
    var_57 ^= ((/* implicit */unsigned short) var_6);
}
