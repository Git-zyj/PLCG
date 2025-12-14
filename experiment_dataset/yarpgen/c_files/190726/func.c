/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190726
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)7952)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_12)) : (var_6))))))));
    var_19 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (3513312111039285908ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_17)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (var_3)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) (-(376317795)));
        var_21 = ((/* implicit */long long int) min((var_21), (var_8)));
    }
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) 8796093022207LL))));
        var_23 = ((/* implicit */long long int) arr_1 [8LL] [(unsigned char)7]);
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (376317795) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [14LL]))) >= (arr_4 [i_2]))))))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((arr_0 [i_2 + 1]) % (arr_0 [i_2 - 1]))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_25 = ((/* implicit */_Bool) ((arr_4 [i_2 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2])))));
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_2] [i_3]))))) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((arr_0 [i_2 - 1]), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2]))))));
            var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) var_0))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) arr_5 [i_2] [12LL]))))))) ? (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_13)) : (-7227164648627711455LL))) >> (((9984901639486513323ULL) - (9984901639486513262ULL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_6 [(short)14] [i_2]), (var_9)))))))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    arr_20 [i_2] [i_2] [i_5] [i_2] [i_2] [i_6] = ((/* implicit */long long int) 376317800);
                    arr_21 [i_6] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_17 [i_2] [i_2]))));
                }
                for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
                {
                    var_28 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (var_13))));
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_29 = (-(1238713846666824392LL));
                        var_30 *= ((/* implicit */unsigned long long int) (unsigned short)31124);
                        var_31 += ((short) ((((/* implicit */_Bool) min((arr_15 [i_8] [i_8]), (((/* implicit */unsigned short) (unsigned char)85))))) ? (((((/* implicit */_Bool) arr_15 [i_2] [i_7])) ? (var_1) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (short)24892))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_9)))))))));
                        arr_28 [i_2 + 1] [i_4] [i_2 + 1] [i_2] [i_9] [i_7] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7 + 1])) ? (((/* implicit */int) arr_6 [i_2] [i_7 + 1])) : (((/* implicit */int) arr_17 [i_2 + 1] [i_2])))))));
                        arr_29 [i_9] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? ((+(arr_9 [i_4] [i_2] [i_4]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_2] [i_2])))))))));
                        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-27904))));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16444)) ? (5478848747865616523LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) ? (-6640224365359336682LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        arr_33 [i_5] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_14 [i_2 + 1] [i_2])), (((int) arr_14 [i_2 + 1] [i_2]))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_30 [i_7] [i_7] [i_7] [i_7] [(unsigned short)15] [i_7 + 1]))));
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) var_8))), (var_4))))));
                        arr_34 [i_2] [i_4] [i_4] [i_4] [i_2] [i_4] [i_10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_19 [i_2 + 1] [i_7 - 2] [i_5] [i_7 + 3] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)126)))))) : ((~(arr_32 [i_2] [i_4] [i_5] [i_7] [i_10]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) > ((-(((/* implicit */int) arr_30 [i_7] [i_7] [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        arr_38 [i_2] [i_4] [i_5] [i_5] [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_37 [13U] [i_7] [(_Bool)0] [i_2] [i_7]))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-430930884759669005LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_2] [i_7] [i_7])))))))));
                        arr_39 [i_2] [i_2 - 1] [i_2] [i_2] [i_5] [i_2] [i_11] = ((/* implicit */unsigned long long int) min((arr_23 [i_2] [i_2] [2]), (((unsigned char) arr_7 [i_2] [i_2]))));
                        var_38 |= ((/* implicit */signed char) (+(((unsigned long long int) var_6))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    arr_43 [i_2 - 1] [i_2] [i_5] [17LL] [17LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((7971596452419015069ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2)))))) ? ((-(((/* implicit */int) arr_30 [i_4] [i_5] [(signed char)10] [i_12] [i_12] [i_12])))) : (((int) max((((/* implicit */unsigned int) arr_42 [i_12] [i_4] [(unsigned char)4] [22])), (var_7))))));
                    arr_44 [(unsigned char)12] [i_4] [(unsigned char)12] [(short)22] &= ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_4])) > ((~(((/* implicit */int) (unsigned char)2)))))))) : (max((((/* implicit */long long int) ((unsigned char) arr_0 [i_2]))), (max((var_16), (((/* implicit */long long int) arr_35 [i_5] [i_4] [i_5] [i_12])))))));
                    arr_45 [i_2] [i_2] [i_2] [i_12] [i_12] = ((/* implicit */short) arr_37 [i_2] [i_2] [2LL] [i_2] [i_5]);
                    var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((arr_8 [i_2 - 1] [i_2 + 1]) ^ (arr_8 [i_2 - 1] [i_2 + 1]))) : (min((((/* implicit */int) (unsigned char)253)), (arr_8 [i_2 - 1] [i_2 + 1])))));
                }
                arr_46 [i_2] [i_2] = ((/* implicit */unsigned char) min((arr_0 [i_2]), (((unsigned long long int) var_4))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_13 = 1; i_13 < 22; i_13 += 3) 
            {
                var_40 = ((/* implicit */long long int) (unsigned short)15428);
                arr_50 [i_13] [i_13 - 1] [i_2] = ((/* implicit */unsigned int) min((683407328219071284LL), (var_3)));
                arr_51 [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((var_16) < (((/* implicit */long long int) var_7))))))), (((/* implicit */int) var_11))));
            }
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                arr_55 [i_2] = ((/* implicit */unsigned short) 2147483647);
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_58 [(unsigned short)18] [(unsigned short)18] [i_2] = ((/* implicit */short) var_12);
                    arr_59 [(_Bool)1] [(_Bool)1] [i_2] [i_14] [i_2] [i_14] = ((/* implicit */unsigned long long int) -486794907558349859LL);
                    var_41 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_2] [i_2] [i_14] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) > (3439733678U)))) : ((-(var_6))))) <= (var_1)));
                }
                arr_60 [i_2] [i_2] [(unsigned short)14] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(-376317792)))) / (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2] [i_2 + 1])) ? (arr_9 [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))), (17970863920119785732ULL)));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_67 [i_2] = var_10;
                            arr_68 [i_2] [i_4] [i_2] [i_2] [i_17] = ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) arr_4 [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (var_17))) >> (((var_10) + (6547913228431276066LL))))));
                            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), (arr_18 [i_2] [i_4] [i_2] [(unsigned short)4])))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned short i_18 = 1; i_18 < 21; i_18 += 2) 
        {
            arr_71 [i_2] [i_2] = ((/* implicit */unsigned char) 9270325229247484085ULL);
            arr_72 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((arr_53 [8ULL] [i_2 + 1] [i_18 + 2] [i_18]), ((unsigned char)182)))) : (((/* implicit */int) var_9))));
            arr_73 [i_2] = ((/* implicit */long long int) min((max((arr_26 [(unsigned short)7] [i_2] [i_2]), (min((((/* implicit */unsigned short) arr_70 [i_18] [i_18] [i_2])), (arr_18 [5U] [i_2] [i_2] [i_2]))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_2] [i_18]) : (((/* implicit */int) var_14))))))))));
        }
    }
    /* vectorizable */
    for (long long int i_19 = 0; i_19 < 17; i_19 += 3) 
    {
        var_43 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_57 [i_19] [i_19] [(_Bool)1] [i_19]))))) ? (((/* implicit */long long int) ((arr_40 [20U] [i_19] [i_19] [i_19]) % (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (unsigned char)74)) ? (-9105807454132459475LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_44 = ((unsigned char) ((unsigned long long int) arr_57 [i_19] [(unsigned short)4] [(unsigned short)4] [(unsigned short)0]));
    }
}
