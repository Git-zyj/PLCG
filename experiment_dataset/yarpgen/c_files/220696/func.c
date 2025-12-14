/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220696
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) (+(min((((var_7) >> (((((/* implicit */int) var_3)) - (34287))))), (((/* implicit */unsigned long long int) var_5))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            var_12 |= ((/* implicit */unsigned short) var_0);
            arr_6 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1073741824U)), (4674185083202374229ULL)));
        }
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 2147483647)) : (var_8)))) ? (3221225471U) : (var_8)));
            arr_9 [i_2] = ((/* implicit */signed char) (~(((4674185083202374229ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            var_14 ^= ((/* implicit */short) ((max((var_7), (var_1))) | (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)12)) | (((/* implicit */int) (short)-7807))))) / (((long long int) 1923951962U)))))));
            arr_10 [i_2] [i_2] = ((/* implicit */short) var_8);
        }
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 19; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
            {
                arr_15 [i_4] [i_4] = ((/* implicit */_Bool) var_10);
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    arr_18 [i_4] [i_4] [(short)1] [1] = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_13 [i_4]))))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (max((arr_16 [(short)4] [i_4] [i_4] [i_5]), (((/* implicit */long long int) arr_13 [i_4])))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_15 = ((((/* implicit */_Bool) 3221225471U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)61)))))) : (1073741824U));
                }
                arr_19 [i_4] [i_3] [i_4 - 1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 11672811844466233912ULL))))));
                var_16 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) >= (((/* implicit */int) var_3)))) ? (min((((/* implicit */unsigned int) arr_12 [i_3 + 1] [i_4 + 2])), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 3; i_6 < 19; i_6 += 4) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (+((-(max((arr_2 [i_0] [i_3 - 2]), (var_4))))))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
                    arr_24 [i_0] [i_0] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) && (((/* implicit */_Bool) (short)-27678))))), ((unsigned short)65535)))) | (min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) (!(arr_21 [i_0] [i_3 - 2] [i_4] [i_4]))))))));
                }
                for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 16; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */int) var_7);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3221225443U)));
                        arr_29 [i_4] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))), (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    }
                    arr_30 [i_4] = ((/* implicit */unsigned short) 3221225471U);
                    arr_31 [i_0] [i_4] [i_0] = (-((((-(((/* implicit */int) var_11)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                }
            }
            for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
            {
                arr_34 [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) var_11);
                arr_35 [i_9] [i_3] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (var_8)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3221225473U)) ? (var_4) : (560314219)))) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38104)))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) min((8663885712954291152LL), (((/* implicit */long long int) 1073741824U))))), ((+(4674185083202374229ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_23 [i_0] [(unsigned char)6] [i_3]), (((/* implicit */unsigned long long int) var_10)))))))))));
            }
            var_22 = ((/* implicit */unsigned char) arr_13 [i_3]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
            {
                arr_39 [i_0] [(short)3] [i_10] = ((((/* implicit */_Bool) var_6)) ? (2309580U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_10] [i_10] [i_3 - 2]))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    var_23 = ((/* implicit */long long int) arr_14 [i_11] [i_3] [i_11]);
                    var_24 = ((/* implicit */int) var_8);
                }
                arr_42 [i_0] [i_10] = ((/* implicit */unsigned char) arr_14 [i_3] [i_3] [i_10]);
                arr_43 [i_10] [i_10] [i_3] [i_0] = ((/* implicit */int) var_10);
            }
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
            {
                arr_46 [i_0] [i_3] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_3))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_10)))) != (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */unsigned long long int) var_2)) : (var_1)))))));
                var_25 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4))) - (min((var_4), (((/* implicit */int) (signed char)107))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_53 [i_0] [(unsigned short)12] [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((var_9) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) min((arr_26 [i_3]), (((/* implicit */short) var_9))))) + (2147483647))) << ((((~(var_8))) - (2642275396U))))))));
                    arr_54 [i_13] [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_7 [i_3])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_44 [i_3 + 1] [i_3 - 1] [i_3 - 2])))));
                }
                for (unsigned char i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)48)) && (((/* implicit */_Bool) 1834357872)))) ? (((/* implicit */unsigned int) (~(var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3173327588338428129LL)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_6)))))))));
                    var_27 = ((var_1) / (max((((/* implicit */unsigned long long int) -555991217)), (arr_44 [i_3 - 1] [i_3 - 2] [i_13]))));
                    arr_57 [i_0] [i_0] [i_3 + 1] [i_15] [i_15] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_47 [i_3 + 1] [i_3] [i_3 - 2] [i_3]))));
                }
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 20; i_16 += 4) 
                {
                    var_28 = ((/* implicit */short) 3221225471U);
                    arr_60 [i_0] [i_0] [i_13] [i_16] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)4122)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))));
                    arr_61 [i_16] [i_13] [i_3] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) 5946317031806050699ULL)) ? (var_10) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned int) (+(var_4))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) ? (min((((/* implicit */unsigned long long int) var_2)), (var_1))) : (max((var_7), (var_1)))));
                }
                for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    arr_65 [i_17] [i_17] [i_13] [i_17] = ((/* implicit */unsigned char) var_7);
                    var_30 = ((/* implicit */short) (((_Bool)0) || (((/* implicit */_Bool) (unsigned char)113))));
                    arr_66 [i_0] [i_17] [i_17] [(signed char)18] [i_17] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
    {
        var_31 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_2)) ? (8013750501169691805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        /* LoopSeq 1 */
        for (short i_19 = 2; i_19 < 12; i_19 += 3) 
        {
            var_32 = arr_62 [i_19 + 1] [i_19] [i_19];
            /* LoopNest 2 */
            for (unsigned int i_20 = 3; i_20 < 11; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) var_10);
                        var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */int) var_11)) % (((/* implicit */int) (short)16487))))));
                        arr_79 [i_21] [i_19] [i_19] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_20 - 1] [i_20 - 3] [i_19] [i_20 - 2]))) % ((-(var_7)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 10; i_22 += 3) 
            {
                for (short i_23 = 1; i_23 < 11; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 1) 
                    {
                        {
                            arr_88 [i_18] [i_19 + 1] [11LL] [i_19] [4ULL] = ((/* implicit */unsigned int) ((signed char) (+(var_4))));
                            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                            arr_89 [i_18] [i_19] [i_24] [i_24] [i_24] [i_24] [i_23 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_63 [i_19] [i_23 - 1] [i_23] [i_23] [i_23 + 1])) : (var_1)));
                        }
                    } 
                } 
            } 
        }
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) 6763482148974387463LL)))))) ? (((((/* implicit */_Bool) ((int) (unsigned char)91))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59509))))) : (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (438383733816094601LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
