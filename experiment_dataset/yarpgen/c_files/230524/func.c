/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230524
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
    var_16 = ((/* implicit */_Bool) ((var_3) << (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) var_5);
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2])));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [(_Bool)1])) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
            var_19 -= ((/* implicit */short) arr_1 [i_0]);
            arr_8 [i_1] [9U] = ((/* implicit */unsigned int) arr_1 [i_1]);
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                var_20 |= ((/* implicit */_Bool) arr_2 [i_1] [i_0]);
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_2 [i_2 - 3] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 + 1] [i_2 - 1] [i_1 + 1] [i_1 + 1])))));
                    var_22 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_1] [i_0]) >> ((((+(1853697588))) - (1853697536)))));
                }
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_1 [i_2 - 2]))));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 + 3] [i_1] [i_1 + 3])) ? (arr_17 [i_1] [i_1] [i_1] [i_1]) : (arr_17 [i_1] [(unsigned short)10] [i_0] [i_1 + 3])));
                arr_18 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_9 [i_0] [7] [i_4] [i_1 - 1]);
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : ((-(((/* implicit */int) arr_15 [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */short) (-(arr_17 [i_1] [i_1 + 1] [i_1] [i_5 - 1])));
                        arr_25 [i_0] [i_0] [i_1] [i_1] [i_0] [(signed char)6] [i_1] = ((/* implicit */unsigned short) var_13);
                        arr_26 [i_6] [i_1] [i_0] = ((var_4) || (((/* implicit */_Bool) arr_17 [i_1] [i_5 - 3] [i_5 - 1] [i_1])));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | ((-(((/* implicit */int) var_0))))));
                        var_27 ^= ((/* implicit */short) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(var_8))))));
                        arr_29 [i_0] [i_1] [i_4] [(_Bool)1] [i_5 + 3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7] [i_1 + 3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))));
                        var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (arr_17 [i_4] [i_1 - 1] [i_4] [i_4])));
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_33 [i_1] [(unsigned short)0] = ((/* implicit */unsigned int) arr_13 [(signed char)10] [(signed char)10] [i_8]);
                        arr_34 [i_0] [i_0] [i_4] [7U] [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_29 = (~(arr_17 [i_1] [(unsigned char)7] [i_1] [i_1]));
                }
            }
        }
        for (long long int i_9 = 0; i_9 < 13; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 4; i_10 < 10; i_10 += 2) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11 - 1] [i_11] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))) : (arr_19 [i_0] [i_0])));
                        arr_43 [i_0] [i_11] [i_10] [i_11 - 1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (arr_31 [i_11] [i_11 - 1]) : (arr_31 [i_11] [i_11 - 1])));
                        var_31 ^= ((/* implicit */unsigned long long int) arr_42 [i_11] [i_0] [i_0] [i_9] [i_0]);
                    }
                } 
            } 
            arr_44 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
            {
                arr_49 [i_0] [i_12] [i_13] [i_0] = ((/* implicit */short) arr_35 [i_0] [i_12] [i_13]);
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 4; i_14 < 12; i_14 += 2) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                            arr_56 [i_12] [i_12] [i_12] [i_12] [i_15 - 1] = ((/* implicit */_Bool) arr_17 [i_12] [i_12] [i_15 + 3] [i_14 - 4]);
                            var_33 -= ((/* implicit */unsigned int) 0);
                        }
                    } 
                } 
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) arr_12 [i_0] [i_12] [i_12] [2LL]))));
            }
            for (short i_16 = 0; i_16 < 13; i_16 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_16] [i_16]))))) ? (((/* implicit */int) arr_5 [i_0] [i_16])) : (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                var_36 = (!(arr_37 [i_0] [i_0] [i_16]));
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 12; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        {
                            var_37 -= ((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_38 [i_0] [i_0] [i_17 + 1] [i_0]))));
                            var_38 ^= ((/* implicit */int) var_12);
                        }
                    } 
                } 
            }
            for (short i_19 = 0; i_19 < 13; i_19 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 2) 
                {
                    var_39 -= ((/* implicit */int) var_1);
                    var_40 ^= ((/* implicit */unsigned long long int) arr_32 [i_0] [i_12] [(unsigned short)2] [0] [i_0] [i_20 + 2] [i_20]);
                    var_41 -= ((/* implicit */unsigned int) var_7);
                }
                var_42 -= ((/* implicit */_Bool) ((arr_45 [i_0] [i_12]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_0]))) : (14541078305043732961ULL)));
                arr_71 [i_19] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_0] [11ULL] [11U] [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) arr_37 [i_19] [i_12] [i_0])))) : (((/* implicit */int) arr_40 [i_0] [i_12] [i_19]))));
            }
            for (long long int i_21 = 1; i_21 < 10; i_21 += 2) 
            {
                arr_74 [i_0] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_36 [i_21 + 3] [i_12] [(_Bool)1]))));
                var_43 ^= ((/* implicit */_Bool) ((arr_67 [i_0] [i_21 + 1] [i_21 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_21] [i_21 + 1] [i_21 + 3]))) : (6242534171069264067LL)));
                arr_75 [i_12] [i_12] = ((/* implicit */unsigned short) (_Bool)1);
                var_44 = var_4;
            }
            arr_76 [i_0] [i_12] [i_12] = ((/* implicit */unsigned int) arr_13 [i_12] [i_0] [i_0]);
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_79 [i_0] [i_22] = ((/* implicit */signed char) arr_30 [i_0] [(_Bool)1] [i_0] [i_0] [i_22] [(_Bool)1] [i_22]);
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 1; i_24 < 9; i_24 += 2) 
                {
                    var_45 = arr_48 [i_22] [i_22] [i_24 + 2];
                    arr_85 [i_0] [(_Bool)1] [i_22] [i_22] [i_0] [i_24] = ((/* implicit */short) ((arr_37 [i_0] [i_22] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_0] [12ULL] [i_23] [i_24 - 1] [i_23]))) : (var_6)));
                    arr_86 [i_22] [i_22] [i_22] [i_24] = ((/* implicit */long long int) ((arr_66 [i_24 + 3] [i_24 + 2]) ? (((/* implicit */int) arr_66 [i_24 + 3] [i_24 + 3])) : (((/* implicit */int) var_12))));
                    var_46 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_23] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_10 [i_24 + 4] [i_24 + 4] [i_23])) : (arr_60 [i_0] [i_22] [i_0])));
                    arr_87 [i_22] = ((/* implicit */unsigned short) var_4);
                }
                var_47 = (!(((/* implicit */_Bool) (short)0)));
                /* LoopSeq 3 */
                for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 2; i_26 < 11; i_26 += 1) 
                    {
                        arr_92 [i_0] [i_0] [i_22] [i_25] = ((/* implicit */long long int) (-(arr_50 [i_0] [i_22] [i_22])));
                        arr_93 [i_0] [2ULL] [i_22] [i_25] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_39 [i_0] [i_0] [i_0]);
                    }
                    arr_94 [(_Bool)1] [i_22] [i_22] = arr_77 [i_22] [i_22];
                    var_48 = ((/* implicit */_Bool) arr_63 [i_0] [i_22] [i_23]);
                }
                for (short i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    arr_97 [i_0] [i_0] [i_0] [i_22] = ((/* implicit */unsigned int) (signed char)9);
                    arr_98 [i_0] [i_22] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                }
                for (short i_28 = 1; i_28 < 12; i_28 += 1) 
                {
                    var_49 -= ((/* implicit */short) ((((var_14) == (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_28]))))) && (arr_45 [i_28 - 1] [i_28 - 1])));
                    var_50 ^= ((/* implicit */_Bool) (((~(arr_46 [i_22] [i_23] [i_28 + 1]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                    arr_101 [i_0] [i_22] [i_22] [i_28 - 1] [i_28] = ((/* implicit */int) ((arr_19 [i_28 + 1] [i_28 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    arr_102 [(_Bool)1] [i_22] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_82 [i_22] [i_28 + 1] [i_28 + 1] [3] [i_28 + 1] [i_22])) + (2147483647))) >> (((arr_4 [i_28 + 1] [i_28 + 1] [i_28 - 1]) + (4538590910801395908LL)))));
                    arr_103 [i_28] [i_0] [i_22] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_12))))));
                }
            }
        }
    }
    var_51 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)9)), (var_1)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : (max((((/* implicit */unsigned int) var_1)), (var_14)))))));
}
