/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38950
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_11 -= ((/* implicit */unsigned short) ((((15181295579568912797ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28363)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 2) 
                {
                    arr_10 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_3 - 3] [i_2])) : (((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) (_Bool)1)))))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */int) (short)-32765)) & (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_0]))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_13 *= ((/* implicit */short) arr_12 [i_0] [i_1] [i_0] [i_0]);
                    arr_13 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                }
                var_14 = var_6;
                var_15 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))));
            }
            for (int i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_0] [i_5 + 2]));
                            var_17 += ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_5 + 3] [i_5]))))) == (arr_1 [i_5 + 2])));
                            var_18 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_5 + 1] [i_1] [i_0])) ? (((/* implicit */int) arr_11 [10LL] [10LL] [i_5] [i_6])) : (((/* implicit */int) (short)-4096)))));
                            var_19 = ((/* implicit */long long int) arr_11 [(unsigned char)3] [(signed char)6] [(unsigned short)4] [i_7]);
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] = arr_1 [(_Bool)1];
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_29 [i_0] [i_1] [i_1] [i_8] [i_9] |= ((/* implicit */short) arr_17 [i_0] [i_1] [i_5 + 3] [i_8] [i_9]);
                            arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))))) <= (((/* implicit */int) (unsigned short)28372))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_7)))));
            }
            for (short i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_11] [i_11] [i_12] [i_0] [i_10 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_12] [i_1])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_10 - 1] [i_0] [i_12])) : (((/* implicit */int) (unsigned short)50396)))))));
                            var_22 = ((((/* implicit */_Bool) arr_19 [(_Bool)1])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_12])) ? (((/* implicit */int) arr_3 [i_0] [i_10] [i_10 - 3])) : (((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) arr_11 [i_11] [(signed char)8] [i_10] [i_12])));
                        }
                    } 
                } 
                arr_40 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_18 [i_0] [i_0] [i_10 - 2] [i_0] [i_1] [i_1]));
                arr_41 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_10 - 1] [i_10] [i_1])) ? (((/* implicit */int) arr_17 [17ULL] [i_1] [i_10] [(unsigned char)10] [i_10 - 3])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_10 - 3] [(_Bool)1]))));
            }
            for (signed char i_13 = 2; i_13 < 15; i_13 += 1) 
            {
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((_Bool) arr_24 [i_13 + 1] [i_13 + 3] [i_13 + 3] [i_13 + 3] [i_13 + 2] [i_13 - 2])))));
                arr_44 [i_0] [i_0] [i_0] [i_13] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [i_13 + 3] [i_13 - 2] [i_0])) ? (arr_4 [i_0] [i_0] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_32 [1U] [(_Bool)1] [(_Bool)1] [i_1])))))));
            }
        }
        for (short i_14 = 1; i_14 < 15; i_14 += 1) 
        {
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            arr_53 [i_17] [4U] [(signed char)11] [i_16] [(signed char)11] [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned char) min((arr_7 [i_0]), (((/* implicit */unsigned int) arr_48 [i_0] [i_14] [i_14 + 1] [i_14 + 1])))));
                            var_24 = ((/* implicit */unsigned short) -3402532890404771271LL);
                            var_25 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_11 [i_0] [i_15] [(unsigned char)16] [i_17])) / (((/* implicit */int) arr_34 [i_17] [i_15] [(short)2] [i_0]))))))) ? (((/* implicit */int) arr_50 [i_0] [i_14 + 3] [i_0] [16ULL])) : (((/* implicit */int) arr_37 [i_14 - 1] [i_14 - 1] [i_14 + 3] [i_14 + 2] [i_16]))));
                            arr_54 [i_17] [i_16] [i_15] [i_14] [i_17] = ((/* implicit */unsigned int) ((unsigned char) (~(((arr_20 [(unsigned short)12] [i_14] [i_15] [(unsigned short)12] [i_17]) << (((((/* implicit */int) arr_11 [i_14 + 3] [i_14 + 3] [i_16] [i_17])) - (14752))))))));
                            arr_55 [i_16] [i_16] [i_15] [i_14] [i_16] &= ((/* implicit */_Bool) min((min((((/* implicit */int) ((((/* implicit */long long int) arr_21 [i_0] [i_0] [i_16] [i_16] [i_0] [i_16])) >= (var_0)))), ((+(((/* implicit */int) arr_52 [i_0] [i_14 - 1])))))), (arr_18 [i_0] [i_15] [i_0] [i_16] [i_16] [10LL])));
                        }
                    } 
                } 
            } 
            arr_56 [i_0] = ((/* implicit */_Bool) min((4194302U), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_14 + 1] [i_14 + 2])) : (((/* implicit */int) arr_33 [(signed char)10] [i_14] [(signed char)10] [i_14] [(signed char)10] [i_14]))))))));
            var_26 = ((/* implicit */int) ((((/* implicit */int) min((arr_50 [i_14 + 3] [i_14 - 1] [i_14] [i_14]), (((/* implicit */signed char) arr_16 [i_14 + 1] [i_14 + 3]))))) <= (((((/* implicit */_Bool) arr_50 [i_14 + 3] [i_14 - 1] [i_14] [i_14 + 3])) ? (((/* implicit */int) arr_50 [i_14 + 1] [i_14 + 3] [i_14 - 1] [i_14 + 1])) : (((/* implicit */int) arr_50 [i_14 + 2] [i_14 + 2] [i_14] [i_14]))))));
            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-124)), (15181295579568912811ULL))))));
        }
        arr_57 [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
    }
    for (long long int i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
    {
        arr_62 [i_18] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((-3135933821903739134LL), (((/* implicit */long long int) (short)4096)))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)15140)))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_18] [i_18] [i_18])), (arr_59 [i_18])))) ? (min((var_3), (((/* implicit */unsigned long long int) (short)-8841)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_18] [(_Bool)1] [i_18] [i_18])) ? (((/* implicit */int) arr_28 [(short)17] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) (unsigned short)15150)))))))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 2; i_19 < 15; i_19 += 2) 
        {
            for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
            {
                {
                    arr_69 [i_18] [5LL] = ((/* implicit */unsigned short) arr_36 [i_18] [i_18] [i_18] [i_20] [i_20]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_21 = 2; i_21 < 15; i_21 += 2) 
                    {
                        arr_73 [i_18] [i_19 + 3] [i_18] = ((/* implicit */unsigned long long int) ((arr_67 [i_18] [i_20]) ? (((/* implicit */long long int) arr_70 [i_20] [i_20])) : (((((/* implicit */_Bool) arr_59 [i_18])) ? (((/* implicit */long long int) arr_7 [i_20])) : ((-9223372036854775807LL - 1LL))))));
                        arr_74 [i_18] [i_18] [i_20] [i_21] [i_18] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) arr_60 [i_21 + 2]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 18; i_23 += 1) 
        {
            for (unsigned short i_24 = 0; i_24 < 18; i_24 += 4) 
            {
                for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                {
                    {
                        arr_85 [i_22] [i_23] [i_23] [i_25] = arr_9 [i_25] [i_23] [i_25] [i_25];
                        arr_86 [i_22] [(signed char)2] [(signed char)1] [i_24] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_60 [i_22]))));
                        var_28 ^= ((/* implicit */signed char) ((_Bool) arr_52 [i_22] [i_23]));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                for (unsigned short i_28 = 0; i_28 < 18; i_28 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_22] [i_26] [(_Bool)1] [i_28])) + (((/* implicit */int) arr_12 [i_22] [14U] [i_26] [i_28])))))));
                        arr_95 [i_22] [i_22] [i_26] [i_27] [i_28] = ((/* implicit */unsigned short) arr_83 [i_22] [i_22]);
                        var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */int) ((short) (unsigned char)253))) > (((/* implicit */int) var_9))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 0; i_29 < 18; i_29 += 2) 
                        {
                            arr_98 [11ULL] [11ULL] [i_27] [(unsigned char)2] [10U] [i_29] [i_27] = ((/* implicit */short) ((long long int) arr_33 [i_22] [i_22] [i_22] [i_28] [0ULL] [i_26]));
                            arr_99 [i_22] [i_26] [i_27] [i_26] [i_26] [i_26] [i_29] = ((/* implicit */unsigned long long int) ((signed char) arr_2 [i_27] [i_28] [i_29]));
                            var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_27 [i_22] [i_26] [i_26] [i_28] [i_28] [i_29])) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_22] [i_28] [i_27] [i_28] [i_29] [(_Bool)0])) + (12)))));
                            arr_100 [i_22] [i_26] [i_22] [i_28] [(short)7] [(_Bool)1] = ((/* implicit */short) arr_49 [i_26] [i_29] [i_27] [(signed char)2]);
                        }
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            arr_103 [i_22] = ((/* implicit */int) arr_91 [i_26] [i_27]);
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (unsigned char)148))));
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_66 [(unsigned char)9] [i_30])) / (((/* implicit */int) arr_66 [i_22] [i_22]))));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        arr_107 [i_31] = ((/* implicit */_Bool) arr_106 [i_31]);
        var_34 = arr_105 [i_31];
    }
}
