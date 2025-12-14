/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23195
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
    var_15 = ((/* implicit */_Bool) var_3);
    var_16 = ((/* implicit */long long int) var_8);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
    var_18 *= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) <= (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_0))))) ? (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (short)-2043)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (short)-2043)), ((unsigned short)11251)));
        arr_4 [i_0 - 2] = ((/* implicit */short) (-(18446744073709551615ULL)));
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)162), ((unsigned char)89))))) != ((+(10554757481704579852ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_20 = (-(((/* implicit */int) (short)2047)));
                    arr_11 [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 1834169318450794190ULL)) && (((/* implicit */_Bool) (unsigned short)14571)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */signed char) ((arr_6 [i_3 - 1] [i_0 - 2]) / (arr_6 [i_0 + 1] [i_0 + 1])));
                        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) var_13);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_0 - 2])))))));
                            var_25 = ((/* implicit */short) (+(((/* implicit */int) arr_9 [i_4 - 1] [i_2] [i_1]))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_26 -= ((/* implicit */unsigned char) ((int) 1814651390));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 1] [(short)2] [6ULL] [i_2] [i_5])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_3] [i_3]))));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_0 - 1])) + (((/* implicit */int) arr_10 [i_3 - 2] [i_2] [i_0]))));
                        }
                        arr_21 [8U] [i_1] [i_2] [i_2] = arr_1 [(unsigned short)16] [i_0];
                        var_29 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_30 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0 + 1] [(unsigned char)9] [1] [i_0 - 2])) || (((/* implicit */_Bool) var_12))))) | ((+(((/* implicit */int) arr_22 [i_0 - 2] [i_1] [i_1] [i_6])))));
                        var_31 = var_2;
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) max(((signed char)122), ((signed char)65)));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) min(((-(((/* implicit */int) arr_25 [i_0 - 1] [i_1] [1ULL] [i_7])))), (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 1213022009)) && (((/* implicit */_Bool) (short)21805))))), (arr_10 [i_0 + 1] [i_0 - 2] [i_0 - 2])))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) (+(min((((((/* implicit */int) arr_22 [i_0] [(unsigned char)2] [i_0] [i_0])) << (((var_13) - (360039303))))), (((/* implicit */int) arr_0 [i_1]))))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (signed char)48))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_11] [(unsigned short)3] [i_11] [i_11] [1LL] [i_12])) + (((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)162))))))) ? (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_0 [i_10]))))) : (((/* implicit */int) (unsigned short)52294)));
                        var_36 = ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)-2048)) <= (((/* implicit */int) (unsigned char)167))))) << (((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)22269)) : (arr_12 [i_9] [(signed char)16] [(signed char)16] [(unsigned char)17])))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (var_3))))) - (22246U)))));
    }
    for (signed char i_13 = 2; i_13 < 12; i_13 += 4) 
    {
        arr_47 [i_13] = arr_24 [i_13 + 2] [i_13 + 2] [i_13 - 1];
        var_38 += (((((~(((/* implicit */int) var_14)))) != ((~(((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)1))))) : (var_7));
    }
    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            var_39 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_51 [i_14] [i_15])) ? (((/* implicit */int) arr_48 [i_14])) : (((/* implicit */int) var_14)))));
            /* LoopSeq 1 */
            for (short i_16 = 2; i_16 < 18; i_16 += 4) 
            {
                var_40 = ((/* implicit */short) ((((/* implicit */int) arr_51 [i_16 + 3] [i_15 + 1])) << (((((/* implicit */int) arr_51 [i_16 - 2] [i_15 + 4])) - (695)))));
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((((/* implicit */int) (unsigned char)33)) * (((/* implicit */int) (unsigned char)157)))) != (((/* implicit */int) var_2)))))));
            }
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                var_42 -= ((/* implicit */short) var_1);
                arr_59 [(signed char)9] = ((/* implicit */unsigned long long int) var_10);
                var_43 = ((/* implicit */unsigned char) 1079635479);
            }
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
            {
                var_44 &= ((/* implicit */long long int) (~(8ULL)));
                var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (unsigned short)22269))) ? (((/* implicit */int) arr_54 [(short)18] [16ULL] [i_19])) : (((/* implicit */int) arr_54 [(_Bool)1] [0] [i_14]))));
            }
            for (unsigned short i_20 = 0; i_20 < 21; i_20 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 19; i_21 += 4) 
                {
                    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)29)) % (((/* implicit */int) (short)-2048)))))));
                            var_47 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)227))));
                        }
                    } 
                } 
                arr_71 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_51 [i_14] [(unsigned short)5])) - (((/* implicit */int) arr_51 [i_17] [i_20]))));
                var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) (~(3570699462317008758LL))))));
            }
            arr_72 [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_14] [i_14])) & (((/* implicit */int) (short)23833))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_14] [i_17]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) & (17752272002888966475ULL)))));
        }
        arr_73 [i_14] = (unsigned char)98;
    }
}
