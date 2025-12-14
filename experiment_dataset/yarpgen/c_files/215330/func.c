/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215330
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
    var_19 |= ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */int) var_8)))), (min((var_5), (var_5)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned char) ((unsigned int) ((short) arr_1 [i_0])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-10414)) : (var_5))) * (((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))))));
                arr_7 [15] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned char) arr_4 [i_1]));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (arr_8 [i_3] [i_0]) : (((/* implicit */unsigned int) var_5))));
                arr_11 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_4 [i_0])))) + (((/* implicit */int) arr_3 [(unsigned char)2] [i_1] [i_0]))));
                var_23 &= ((signed char) ((((/* implicit */int) var_0)) >> (((-2800545442013089945LL) + (2800545442013089959LL)))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    var_24 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_6 [i_4] [i_3] [i_1])))));
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_13 [i_4 + 1] [i_4] [i_4]))));
                }
                arr_16 [i_3] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) arr_2 [0]);
            }
            var_26 = ((((/* implicit */_Bool) (unsigned short)29)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_8 [i_0] [14U]));
        }
        for (short i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_27 *= ((/* implicit */unsigned char) var_1);
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((((((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 1] [i_6])) | (((/* implicit */int) arr_15 [(signed char)22] [i_5] [i_5 + 2] [i_7])))), ((~(((/* implicit */int) arr_15 [2] [(signed char)12] [i_5 + 1] [i_7])))))))));
                    }
                } 
            } 
            arr_26 [i_0] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) arr_18 [i_0] [i_5]);
        }
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_10 [i_0] [(short)4] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */int) (signed char)63)) : ((-(((/* implicit */int) (_Bool)1))))))) : ((+(max((arr_14 [i_0] [i_0] [(signed char)10] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (signed char i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                var_30 *= ((/* implicit */signed char) (_Bool)1);
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    var_31 = ((/* implicit */int) 9223372036854775807LL);
                    var_32 = ((((/* implicit */int) arr_6 [16] [14U] [i_8 + 1])) == (((/* implicit */int) (_Bool)1)));
                    arr_33 [i_8] [i_8] [4ULL] = ((/* implicit */unsigned short) (+(9223372036854775807LL)));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8 - 2] [i_8 - 2] [i_8 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8 + 1] [i_8 + 1] [i_8 - 1])))))) ? (max((2792397377U), (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        var_35 = min(((-(((/* implicit */int) arr_31 [16U] [i_0] [i_0] [i_8 + 1] [i_11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_8] [i_8 + 1] [12LL] [(_Bool)1]))))));
                        var_36 = arr_8 [i_0] [(unsigned char)10];
                        var_37 = ((/* implicit */int) (_Bool)1);
                    }
                    for (int i_13 = 3; i_13 < 21; i_13 += 2) 
                    {
                        arr_41 [i_0] [i_9] [i_8] = ((/* implicit */signed char) (-(min((245554382), (((/* implicit */int) arr_1 [i_13 - 2]))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((int) (-(((/* implicit */int) arr_22 [i_8] [i_13 + 1] [i_13] [i_0]))))))));
                        arr_42 [i_8] = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned int) arr_4 [i_9]))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 4) 
                {
                    var_39 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_35 [i_8 + 1] [i_8 + 1] [(unsigned short)2] [i_8 - 1])) | (((/* implicit */int) (unsigned short)38364))));
                    arr_46 [6U] [i_0] [i_8] [i_9] [12LL] [i_14] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)16802)))) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775798LL))) + (23LL)))));
                }
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    var_40 = ((/* implicit */short) (_Bool)1);
                    var_41 = ((/* implicit */unsigned char) min((((/* implicit */signed char) ((_Bool) var_15))), (arr_27 [(short)14])));
                }
                var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_2))))))) * (min((arr_24 [i_8 + 1] [i_8] [(unsigned char)21] [i_8 - 2]), (((/* implicit */unsigned int) arr_17 [(unsigned short)16] [i_8])))))))));
            }
            for (unsigned short i_16 = 1; i_16 < 22; i_16 += 4) 
            {
                var_43 = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) arr_36 [i_8] [i_8] [10] [i_8] [i_16])) ? (arr_23 [0] [(unsigned char)12] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))) << (((((/* implicit */int) var_14)) - (1545)))));
                var_44 = ((/* implicit */signed char) var_11);
            }
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                for (signed char i_18 = 2; i_18 < 21; i_18 += 4) 
                {
                    {
                        var_45 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_0] [i_8]))))) ? (max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_18 [i_17] [0])))), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_12)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_29 [i_18] [(unsigned char)10] [i_8])) : (((/* implicit */int) var_14))))))));
                        var_46 = ((/* implicit */_Bool) ((int) (_Bool)1));
                    }
                } 
            } 
        }
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_61 [7] = ((/* implicit */signed char) var_12);
        /* LoopSeq 2 */
        for (signed char i_20 = 1; i_20 < 15; i_20 += 4) /* same iter space */
        {
            var_47 -= ((/* implicit */signed char) max(((-(((/* implicit */int) arr_3 [i_20 + 2] [i_20 + 1] [i_20 - 1])))), (((/* implicit */int) arr_3 [i_20 - 1] [i_20 - 1] [i_20 + 1]))));
            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_6)))))))));
        }
        for (signed char i_21 = 1; i_21 < 15; i_21 += 4) /* same iter space */
        {
            var_49 = ((/* implicit */signed char) (short)(-32767 - 1));
            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) min((var_0), (((/* implicit */unsigned short) arr_66 [(_Bool)1])))))));
        }
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
    {
        var_51 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_27 [i_22])) ? (((/* implicit */long long int) (~(var_1)))) : (((((/* implicit */long long int) 4093257881U)) % (9223372036854775794LL)))))));
        var_52 = ((/* implicit */int) var_16);
        var_53 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_22] [(unsigned short)12] [i_22] [(short)15])))) ? (245554382) : (((int) var_15))));
        var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_12 [i_22] [i_22] [i_22]) ^ (arr_24 [i_22] [i_22] [i_22] [i_22])))))) ? (7397222804065711837ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_22] [(signed char)22] [(_Bool)1]))))))));
        var_55 = ((/* implicit */signed char) arr_19 [(short)11] [i_22]);
    }
    var_56 = ((((/* implicit */int) var_7)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
    var_57 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))))) + (((max((((/* implicit */unsigned int) (unsigned short)15222)), (268435456U))) + (var_4))));
}
