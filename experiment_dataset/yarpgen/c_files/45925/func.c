/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45925
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
    var_11 = min(((-(((/* implicit */int) var_8)))), (((var_7) | (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_12 -= ((/* implicit */unsigned short) max((arr_1 [i_0]), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : ((+(arr_1 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [12ULL] [i_1] &= ((/* implicit */long long int) (-(((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(unsigned short)10]))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */long long int) (signed char)100);
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                var_14 = ((/* implicit */_Bool) (~((~((~(arr_3 [i_3] [i_2])))))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) arr_4 [i_1]))));
                    var_16 -= min((((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4 + 2])), (((((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4])))) * (((/* implicit */int) arr_9 [i_4])))));
                    arr_14 [i_4] [i_2] [i_4 - 1] [i_1] = ((/* implicit */unsigned short) var_1);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_2] [i_3] [i_5] [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (((/* implicit */int) arr_17 [i_1] [(_Bool)1] [i_3] [i_5]))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) arr_7 [i_6 + 1] [i_6 + 1] [i_6 + 1]);
                        var_19 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((((((/* implicit */int) max((((/* implicit */short) arr_9 [16])), (arr_12 [i_6] [i_5] [i_1] [i_2] [i_1] [i_1])))) + (((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1] [(short)14])))), (((/* implicit */int) arr_16 [(short)12] [(short)18] [i_3] [16ULL] [(short)12])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        var_21 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_2] [i_2] [i_7 + 2]))) <= (arr_3 [(_Bool)1] [(_Bool)1])));
                        var_22 = ((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_3] [i_5] [i_7 + 2]);
                        var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_16 [i_1] [i_2] [i_5] [i_7 - 1] [i_1])))) <= (((/* implicit */int) arr_16 [i_1] [i_7 - 1] [i_3] [i_7 - 1] [i_1]))));
                    }
                }
                for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_27 [i_1] [i_2] [(_Bool)1] [i_8] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_1] [i_2] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_3] [i_1] [i_8])) ? (arr_11 [i_1] [i_1] [i_3] [i_3]) : (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8] [i_1] [i_3] [(unsigned short)15] [i_1])))))));
                    var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (arr_25 [i_2] [i_3] [i_8])))) ? (min((arr_25 [i_1] [i_3] [i_8]), (arr_25 [i_1] [i_2] [i_3]))) : ((-(arr_25 [i_1] [i_8] [i_1])))))));
                    arr_28 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_3] [i_2] [i_3] [17] [i_3]))));
                    var_25 = ((/* implicit */short) (+(arr_15 [i_3] [i_3] [(signed char)13] [(_Bool)1] [i_1] [i_1])));
                }
                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_3] [(_Bool)1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_12 [i_1] [i_1] [i_3] [i_2] [i_1] [i_2]), (((/* implicit */short) arr_13 [i_1] [i_2] [i_2] [i_2] [i_3])))))) : (((arr_11 [i_1] [i_1] [i_2] [i_2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_3] [i_3]))))))))));
                var_27 -= ((/* implicit */unsigned short) arr_17 [i_1] [(signed char)9] [(signed char)2] [(signed char)9]);
                arr_29 [i_1] [i_2] [1ULL] = min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [(_Bool)1] [i_1] [i_2] [i_3] [i_1])) : (arr_22 [i_1] [i_2] [i_2] [i_2] [i_2]))));
            }
            for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
            {
                arr_33 [i_1] [i_1] [i_1] [(unsigned short)15] = ((/* implicit */unsigned short) arr_3 [(unsigned short)11] [i_9]);
                arr_34 [i_1] [i_2] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1]))))), (arr_15 [i_9] [(_Bool)1] [i_1] [i_1] [i_1] [i_1]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_6 [i_2])))))))));
            }
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~((-(var_7))))))));
        }
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                arr_42 [i_1] [i_1] = ((/* implicit */short) (+((+(var_2)))));
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_2))));
            }
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_1])))))));
        }
        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) var_10))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_32 = ((/* implicit */_Bool) arr_43 [i_12] [i_12]);
            var_33 = ((/* implicit */int) arr_9 [i_12]);
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    {
                        arr_54 [i_12] [i_13] = ((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_14]);
                        var_34 = ((/* implicit */short) arr_16 [i_12] [i_13] [i_14] [i_14] [i_12]);
                    }
                } 
            } 
            var_35 = ((/* implicit */short) (~(arr_3 [i_12] [i_13])));
            arr_55 [i_12] [i_12] = ((/* implicit */unsigned short) arr_37 [i_12]);
        }
        for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            var_36 = ((/* implicit */unsigned char) arr_45 [i_12]);
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (signed char)(-127 - 1)))));
                    var_38 *= ((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_12] [(_Bool)1] [(short)10]);
                    arr_63 [(unsigned short)2] [i_12] [i_12] [i_18] = ((/* implicit */int) arr_38 [i_17] [i_17]);
                }
                var_39 = (~(((((((/* implicit */int) arr_40 [i_12] [i_16] [(short)7] [(short)17])) + (((/* implicit */int) arr_8 [i_12])))) & ((+(((/* implicit */int) arr_20 [i_12] [i_12] [i_16] [i_16] [i_16] [i_17])))))));
            }
            /* vectorizable */
            for (long long int i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    arr_69 [i_16] [i_16] [i_16] [i_12] [i_16] = (!((!(((/* implicit */_Bool) arr_58 [i_20] [i_12] [i_20] [i_20])))));
                    arr_70 [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_12] [(unsigned short)4] [i_19] [i_20] [i_20]))));
                    var_40 ^= ((/* implicit */int) var_2);
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) arr_3 [i_16] [i_16]))));
                }
                /* LoopSeq 2 */
                for (short i_21 = 0; i_21 < 17; i_21 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_22 = 0; i_22 < 17; i_22 += 2) 
                    {
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) var_0))));
                        var_43 -= (~(((/* implicit */int) arr_58 [i_16] [i_19] [i_21] [i_22])));
                        var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12] [i_22])) ? (((/* implicit */int) arr_12 [(short)0] [(short)14] [(short)0] [(short)0] [(short)0] [i_22])) : (((/* implicit */int) arr_66 [i_22] [i_12] [i_12])))))));
                        var_45 = ((/* implicit */int) arr_60 [i_12] [i_12] [(_Bool)1] [i_22]);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_47 [6] [i_19])) ? (((((/* implicit */_Bool) arr_48 [i_16] [(short)6] [i_21])) ? (arr_65 [i_12] [(short)9] [i_12]) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57265)))));
                        arr_78 [i_12] [i_12] [i_19] [i_12] [i_12] = ((/* implicit */long long int) (-(((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_19] [i_21])))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_24 = 0; i_24 < 17; i_24 += 2) 
                    {
                        var_47 = ((/* implicit */unsigned short) (+(arr_71 [i_12] [i_16] [i_21] [(_Bool)1])));
                        var_48 *= ((/* implicit */short) ((((/* implicit */int) arr_58 [i_21] [i_24] [i_19] [i_19])) / (((/* implicit */int) (short)-32765))));
                        var_49 = ((/* implicit */long long int) arr_6 [i_21]);
                    }
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */signed char) var_2);
                        var_51 = ((/* implicit */unsigned short) arr_39 [i_12] [i_19] [i_21] [i_25]);
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_87 [i_12] [i_21] [i_12] [(short)7] [i_12] [i_12] = var_5;
                        arr_88 [i_12] [i_12] [(_Bool)1] [i_21] [i_12] = (_Bool)0;
                        arr_89 [i_12] [i_21] [i_21] [i_21] [(short)13] [2ULL] = ((/* implicit */unsigned short) arr_9 [i_12]);
                    }
                    var_52 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_16] [i_16] [12U])) ? (arr_81 [i_12] [i_16] [i_12] [i_19] [i_12] [i_12]) : (((/* implicit */int) arr_39 [i_21] [i_19] [i_16] [i_12]))))) ? (((/* implicit */int) arr_26 [i_16] [i_16] [i_12] [i_12])) : (((/* implicit */int) arr_45 [i_12]))));
                }
                for (short i_27 = 0; i_27 < 17; i_27 += 2) /* same iter space */
                {
                    arr_92 [13] [(short)8] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_65 [i_12] [i_12] [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12] [i_16] [i_12]))) : (arr_31 [i_12] [i_12] [i_19] [i_19])));
                    var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_12] [i_16] [i_19] [i_27])) ? (((/* implicit */int) arr_60 [i_12] [i_12] [i_12] [i_12])) : (var_7)));
                }
                /* LoopSeq 2 */
                for (short i_28 = 1; i_28 < 16; i_28 += 2) 
                {
                    var_54 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_58 [i_12] [i_19] [i_28 - 1] [i_28 - 1]))));
                    var_55 = ((/* implicit */short) arr_40 [i_12] [i_28] [i_19] [i_28]);
                }
                for (unsigned long long int i_29 = 0; i_29 < 17; i_29 += 1) 
                {
                    arr_100 [i_12] [i_29] [i_12] [i_29] [i_29] [i_19] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-7859))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                    var_56 = ((/* implicit */_Bool) ((arr_73 [i_16]) & (arr_73 [i_12])));
                }
                var_57 = ((/* implicit */int) arr_45 [i_16]);
            }
            arr_101 [i_12] [i_12] = ((/* implicit */signed char) 42573777U);
            var_58 = ((/* implicit */short) (~(var_7)));
        }
        for (short i_30 = 0; i_30 < 17; i_30 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_31 = 0; i_31 < 17; i_31 += 3) 
            {
                var_59 = ((/* implicit */unsigned short) min(((+(min((arr_3 [i_12] [(_Bool)1]), (((/* implicit */long long int) arr_22 [i_12] [i_30] [i_30] [i_31] [2U])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_26 [(short)9] [i_30] [i_31] [i_30])) / (min((arr_22 [i_31] [i_30] [i_12] [i_12] [i_31]), (((/* implicit */int) arr_80 [i_12] [i_30] [i_31])))))))));
                var_60 -= ((/* implicit */_Bool) (-(arr_11 [i_12] [i_12] [i_30] [i_31])));
                var_61 += ((/* implicit */unsigned int) var_3);
            }
            arr_106 [i_12] [i_12] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [17LL])), (arr_91 [i_30] [i_30] [i_12])))), (arr_71 [i_12] [i_12] [i_12] [16]))))));
        }
        /* LoopNest 2 */
        for (short i_32 = 0; i_32 < 17; i_32 += 1) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    arr_112 [i_12] [i_12] [i_12] [i_33] = ((/* implicit */int) var_6);
                    /* LoopSeq 3 */
                    for (int i_34 = 4; i_34 < 16; i_34 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_35 = 0; i_35 < 17; i_35 += 2) 
                        {
                            arr_119 [i_35] [i_35] [i_35] [i_12] [i_35] = ((/* implicit */unsigned int) arr_48 [i_32] [i_33] [i_35]);
                            var_62 -= ((/* implicit */unsigned long long int) arr_107 [i_35]);
                        }
                        var_63 = ((/* implicit */_Bool) max((var_63), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_104 [i_12] [i_34] [i_33])))))))));
                        arr_120 [i_34] [i_32] [i_12] [i_33] [i_34 - 4] [i_33] = ((/* implicit */unsigned int) min((max((arr_82 [i_12] [i_12] [i_32] [i_33] [i_34]), (((/* implicit */long long int) max((arr_23 [i_12]), (((/* implicit */short) var_4))))))), (((/* implicit */long long int) var_6))));
                        arr_121 [i_32] [i_32] [i_12] = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_12]))));
                    }
                    for (int i_36 = 0; i_36 < 17; i_36 += 3) 
                    {
                        var_64 *= ((/* implicit */_Bool) (+((-(arr_99 [i_12] [5U] [i_32] [i_33] [i_12])))));
                        var_65 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(arr_36 [i_12] [i_12] [(_Bool)1])))), ((+(arr_31 [i_33] [i_12] [16] [i_36])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_37 = 0; i_37 < 17; i_37 += 1) 
                        {
                            var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) var_1))));
                            arr_126 [i_12] [(unsigned short)1] [i_12] [i_36] [(short)2] = ((/* implicit */long long int) (~(var_7)));
                            var_67 = ((/* implicit */int) ((((/* implicit */_Bool) arr_124 [i_12] [i_12] [i_12] [i_12] [1])) ? (arr_124 [i_37] [i_36] [i_33] [i_32] [i_12]) : (arr_124 [i_12] [i_12] [i_33] [i_32] [i_12])));
                            var_68 = ((/* implicit */_Bool) min((var_68), (((/* implicit */_Bool) (-(((/* implicit */int) (short)32764)))))));
                        }
                        /* vectorizable */
                        for (short i_38 = 0; i_38 < 17; i_38 += 1) 
                        {
                            var_69 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-100))));
                            var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) (+(arr_79 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                        }
                    }
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        var_71 = ((/* implicit */signed char) max((var_71), (((/* implicit */signed char) (-(((arr_49 [i_39] [11] [i_12]) << (((((/* implicit */int) arr_19 [i_12] [i_32] [18])) - (27220))))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
                        {
                            var_72 -= ((/* implicit */unsigned char) (~((~(arr_99 [i_12] [i_32] [i_33] [i_39] [i_40])))));
                            var_73 = (!(((/* implicit */_Bool) arr_19 [i_32] [i_33] [i_12])));
                        }
                        /* vectorizable */
                        for (short i_41 = 0; i_41 < 17; i_41 += 4) 
                        {
                            var_74 |= ((/* implicit */unsigned int) ((((/* implicit */int) (short)22120)) & (((/* implicit */int) var_0))));
                            arr_137 [i_12] = ((/* implicit */unsigned int) arr_47 [i_12] [i_32]);
                            var_75 = ((/* implicit */unsigned short) var_1);
                        }
                        for (int i_42 = 0; i_42 < 17; i_42 += 3) 
                        {
                            arr_140 [(short)1] [i_12] = ((/* implicit */short) arr_122 [i_12] [i_39] [i_12]);
                            var_76 = ((/* implicit */unsigned long long int) arr_107 [i_12]);
                            arr_141 [i_39] [i_32] [2] [(signed char)3] [i_12] = ((/* implicit */short) max((((/* implicit */long long int) (+(arr_95 [i_42] [i_39] [i_33] [i_32] [(_Bool)1])))), (min((arr_65 [i_12] [i_32] [i_33]), (((/* implicit */long long int) arr_59 [i_12] [i_12]))))));
                            arr_142 [10] [i_32] [i_12] [i_39] [i_42] = ((/* implicit */_Bool) arr_15 [i_42] [i_39] [i_39] [i_33] [i_32] [i_12]);
                            var_77 = ((/* implicit */_Bool) max((var_77), (((/* implicit */_Bool) arr_8 [i_32]))));
                        }
                    }
                    var_78 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_56 [i_12]))));
                }
            } 
        } 
    }
}
