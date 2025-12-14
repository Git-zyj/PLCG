/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48774
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [(_Bool)1] [i_1] |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)179))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (unsigned char)106);
                arr_12 [i_0] [9LL] [20LL] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(signed char)7] [i_2]))));
                /* LoopSeq 1 */
                for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_13 [i_3] [i_1])))));
                    arr_16 [i_0] [(short)20] [(short)20] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                    var_16 = ((/* implicit */short) ((unsigned int) arr_1 [i_0] [i_0]));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        arr_19 [10ULL] [12LL] [(unsigned char)18] [12LL] [(unsigned char)6] |= ((/* implicit */unsigned int) ((var_1) ? (((int) arr_1 [i_0] [2])) : (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]))));
                        var_17 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_2)) ? (arr_13 [i_1] [i_4]) : (var_10))));
                    }
                }
            }
            for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_5] [i_0] [i_0] &= var_11;
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((unsigned int) (+(var_15))))));
                }
                for (short i_7 = 3; i_7 < 21; i_7 += 1) 
                {
                    var_19 &= ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        var_20 = ((((/* implicit */int) arr_18 [i_1] [i_8])) % (((((((/* implicit */long long int) ((/* implicit */int) arr_3 [6ULL]))) < (arr_4 [i_0] [i_0] [12U]))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_0])))));
                        var_21 = arr_13 [i_8] [i_7];
                        arr_29 [i_8] [i_7 + 1] [i_0] [i_0] [i_1] [18] = ((/* implicit */unsigned int) ((_Bool) (-(1901168960))));
                    }
                    for (int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_0] [(_Bool)1] = ((/* implicit */long long int) max((max((((/* implicit */int) (!(((/* implicit */_Bool) -1901168964))))), (((((/* implicit */_Bool) -1097806906)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_9])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))))), (((/* implicit */int) arr_9 [i_9] [i_0] [i_0] [i_0]))));
                        var_22 = ((/* implicit */unsigned int) arr_18 [i_1] [(unsigned char)2]);
                    }
                }
                /* LoopNest 2 */
                for (long long int i_10 = 4; i_10 < 21; i_10 += 4) 
                {
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_38 [i_0] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [20ULL] [i_1] [i_0] [i_1]))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (unsigned char)100))));
                            var_24 = ((min((max((((/* implicit */long long int) var_5)), (arr_37 [i_0] [0LL] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5] [i_11]))), (((/* implicit */long long int) arr_8 [i_0] [i_1] [i_5 + 1] [i_1])))) + (((long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_10]))))));
                            var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-4932))) <= (arr_4 [i_0] [i_5 - 1] [i_10 - 1]))))));
                            arr_39 [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)8190)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (7160910786698936396LL))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45)))))) : ((-(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 2; i_12 < 19; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 20; i_13 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) ((unsigned char) arr_35 [i_1] [i_12 - 1] [i_13] [i_13] [i_13 + 2]));
                    arr_48 [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) ((signed char) var_4));
                    var_27 = ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_0] [i_0] [i_0] [(unsigned char)20] [(signed char)5]))) ? (var_10) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))));
                    var_28 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_1 [11] [i_0])) | (arr_20 [i_0] [i_1] [i_1] [i_0]))));
                }
                for (unsigned char i_14 = 1; i_14 < 20; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_12] [i_14] [i_14] [i_0])) ? (arr_34 [i_0] [i_1] [i_1] [i_0]) : (var_15))))))));
                        var_30 = ((/* implicit */long long int) arr_0 [(_Bool)1]);
                    }
                    arr_54 [(unsigned short)3] [(unsigned short)3] [i_1] [i_12 + 2] [(unsigned short)1] [i_0] = ((/* implicit */long long int) ((min(((-(7116888318243567140ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_1] [i_14 - 1])) - (arr_50 [i_14])))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_12])))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 1; i_16 < 19; i_16 += 4) /* same iter space */
                    {
                        var_31 = (-((~(arr_34 [(unsigned char)14] [i_1] [i_1] [i_0]))));
                        var_32 |= ((/* implicit */int) ((-28LL) == (((/* implicit */long long int) ((int) (-(1845177315311788714ULL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_17 = 1; i_17 < 19; i_17 += 4) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] = ((/* implicit */int) arr_8 [(short)16] [i_12] [i_14] [i_17]);
                        var_33 ^= ((/* implicit */short) ((unsigned short) (unsigned char)151));
                        var_34 = ((/* implicit */unsigned char) arr_32 [i_0] [i_1] [i_12] [i_12 + 2] [i_14 + 1] [i_12]);
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_20 [i_17] [6ULL] [i_17] [i_12]))));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) -3384764458618553281LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_12] [i_12 - 1] [i_12] [i_0] [i_14 + 1] [i_14 - 1] [i_18 - 1]))) : (arr_46 [i_12 + 3] [i_12 + 1] [i_12 + 3] [i_14 - 1] [i_14 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((((int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [4])) != (((/* implicit */int) (unsigned short)16281))))))));
                        arr_64 [i_0] [i_18] = (((!(((/* implicit */_Bool) arr_4 [i_0] [i_12 + 2] [0])))) ? (((/* implicit */int) (unsigned short)7680)) : (((((/* implicit */_Bool) var_0)) ? (arr_31 [i_0] [(unsigned short)8] [3] [i_1] [i_12 + 3]) : (arr_31 [i_0] [i_14] [i_12] [i_0] [i_0]))));
                        var_37 = var_8;
                    }
                }
                arr_65 [i_0] [i_0] [i_12] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_0] [i_1] [i_1] [i_12] [0ULL])) + (((/* implicit */int) var_7))))) : (((long long int) arr_26 [i_0] [i_12] [6] [i_0])))));
                var_38 = ((/* implicit */signed char) ((unsigned char) ((int) (-(((/* implicit */int) arr_55 [i_0] [i_1] [i_12 - 2] [i_1] [i_0]))))));
                /* LoopSeq 1 */
                for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (!(min((((_Bool) var_5)), (((((/* implicit */_Bool) arr_22 [i_0] [i_12] [i_19])) || (((/* implicit */_Bool) var_6)))))))))));
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) max((((/* implicit */long long int) arr_25 [i_12] [i_1])), (((((/* implicit */_Bool) arr_43 [i_0] [(unsigned char)17] [(unsigned char)17])) ? (((((/* implicit */_Bool) arr_43 [i_0] [i_1] [i_12])) ? (((/* implicit */long long int) var_11)) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_12] [i_1] [i_1] [i_19] [i_19]))))))))));
                }
            }
            var_41 |= ((/* implicit */short) max((max((((unsigned int) arr_68 [(unsigned char)20] [(unsigned char)20] [6] [(unsigned char)12] [i_1])), (((/* implicit */unsigned int) ((int) arr_23 [i_1] [(short)18] [0LL] [(short)18] [i_0]))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
            /* LoopSeq 2 */
            for (long long int i_20 = 1; i_20 < 21; i_20 += 1) 
            {
                arr_72 [i_0] [i_0] [i_1] [(short)19] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((int) (signed char)73))) ? (arr_50 [(unsigned char)15]) : (((/* implicit */int) arr_66 [i_0] [(unsigned char)10] [i_0])))));
                var_42 ^= ((/* implicit */short) (-((-(((long long int) (unsigned char)56))))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) ((short) -18));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((int) var_11))) ? (((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_20]) << (((((/* implicit */int) arr_7 [i_20] [i_1] [i_20])) - (86)))))) : (((arr_57 [i_0] [i_1] [i_20] [i_21] [i_22 + 1] [(unsigned char)18] [i_21]) ? (9718470543982768718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned char)14] [i_21]))))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_24 = 0; i_24 < 22; i_24 += 4) 
                {
                    var_45 = ((/* implicit */long long int) arr_34 [7LL] [i_1] [i_23] [i_0]);
                    var_46 = max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_75 [i_23] [i_0] [i_23] [i_24] [i_0] [i_24]))))) || (((/* implicit */_Bool) arr_0 [10LL]))))), (arr_5 [3LL] [i_0]));
                    arr_83 [i_1] [i_1] [3LL] [i_1] [i_0] [i_1] = ((/* implicit */signed char) max((((int) arr_71 [i_23] [i_1] [i_23] [i_0])), (((/* implicit */int) max((((/* implicit */short) arr_71 [i_0] [21U] [i_23] [i_0])), (var_13))))));
                }
                var_47 = ((/* implicit */_Bool) arr_53 [i_0] [15LL] [(_Bool)1] [i_23] [i_23]);
                arr_84 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_3 [i_1])))), ((~(1901168960)))));
                var_48 = ((/* implicit */long long int) arr_20 [i_0] [i_0] [i_1] [i_0]);
            }
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((int) (((!(((/* implicit */_Bool) arr_67 [i_0] [i_0] [16] [i_1])))) ? ((~(((/* implicit */int) (signed char)35)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_79 [(unsigned short)16])) : (((/* implicit */int) var_9))))))))));
        }
        var_50 *= ((/* implicit */signed char) max((((/* implicit */int) ((short) (-(((/* implicit */int) arr_66 [5] [5] [5])))))), (((((/* implicit */_Bool) min((-1901168940), (855271880)))) ? (min((arr_34 [(unsigned char)16] [i_0] [i_0] [(short)0]), (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min(((unsigned short)57855), (((/* implicit */unsigned short) (unsigned char)179)))))))));
        arr_85 [i_0] = ((/* implicit */int) ((unsigned int) ((unsigned char) ((((/* implicit */_Bool) -1525299135)) ? (((/* implicit */int) (unsigned char)34)) : (-1901168960)))));
        arr_86 [i_0] = ((/* implicit */unsigned long long int) 159577209);
    }
    var_51 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_14)))))) | ((~(((/* implicit */int) var_13))))));
}
