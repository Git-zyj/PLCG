/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223996
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
    var_11 += ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-111))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(signed char)14] = ((((/* implicit */_Bool) (signed char)-124)) ? (4675454705222258358LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (((!((_Bool)0))) ? ((((_Bool)1) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(short)11] [i_0 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))))));
                        var_13 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_1])) : (((/* implicit */int) (short)-24804))));
                        arr_10 [i_0 - 1] [i_1] [22LL] [13LL] = ((/* implicit */short) ((arr_0 [i_3 + 1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (9223372036854775807LL)));
                        arr_11 [i_0] [8LL] [i_2] [i_3] = ((/* implicit */unsigned short) (!(var_3)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) arr_7 [i_0] [i_4])) : (((/* implicit */int) (_Bool)1))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) : (arr_8 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_1])));
            }
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) var_2)))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (-1457078658)));
        }
        arr_15 [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0])) : (((/* implicit */int) (short)-32760)))));
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = min((((/* implicit */int) min((arr_0 [i_5 - 1] [i_5 - 1]), (arr_0 [i_5 - 1] [i_5 - 1])))), (((((/* implicit */_Bool) 1457078661)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) / (var_5))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (short)-19061)))))))));
                    arr_28 [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) (short)-24804)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)15] [i_6]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
        {
            for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                {
                    var_19 = ((((((/* implicit */_Bool) arr_12 [i_10 + 1])) ? (arr_8 [i_10] [(_Bool)1] [i_9] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30515)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24807))) : (var_4)));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((arr_3 [i_10] [i_10 - 1] [i_10]) ? (((/* implicit */int) (short)2849)) : (((/* implicit */int) (short)885)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_8] [i_8])) << (((((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) arr_36 [i_8] [i_8] [(short)9] [i_8])) : (((/* implicit */int) var_2)))) + (20865)))));
    }
    var_23 += ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
    {
        arr_39 [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) -1457078666)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_4 [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_4 [i_11] [(unsigned char)20] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_11])))))) : (((((/* implicit */_Bool) arr_4 [(signed char)4] [i_11] [(signed char)2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_11] [i_11] [i_11])))))));
    }
    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8721594344713220012LL)) ? (((/* implicit */int) (signed char)0)) : (-1457078649)))) ? (((/* implicit */long long int) (~(arr_17 [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_17 [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-974154833841638693LL))))))));
        arr_43 [i_12] [i_12] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_12] [i_12])) ? (-2302085321808131815LL) : (var_4)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
        {
            arr_46 [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [(unsigned char)6] [i_12] [i_13]))) : (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_12] [i_13] [i_13])))))) : (((((/* implicit */unsigned long long int) 2781325606354095057LL)) * (arr_40 [i_13])))));
            arr_47 [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)230)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22477)))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */int) min((var_26), (min((min((-1), (((/* implicit */int) arr_19 [i_14])))), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_19 [i_12])))))))));
            arr_52 [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1457078620)), (-974154833841638680LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22462)) ? (((/* implicit */int) (unsigned char)167)) : (((/* implicit */int) (_Bool)1)))))));
            arr_53 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_30 [(unsigned short)3])) ? (((/* implicit */int) arr_33 [i_12] [i_14])) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-2214185849663586390LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 1457078665)) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_12] [i_14]))) : (var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [i_12])))) : ((+(var_8)))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (-1925019947191175485LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_12])))));
                            var_29 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)31))));
                            var_30 = ((/* implicit */unsigned long long int) ((arr_32 [i_12] [i_15] [i_16]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
                            var_31 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (short)1951)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) arr_1 [i_17])))));
                            var_32 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) arr_14 [i_12] [i_12] [i_12]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    arr_66 [i_15] = ((signed char) ((((/* implicit */_Bool) arr_62 [i_12] [i_12] [i_12] [i_19] [(_Bool)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (short i_20 = 1; i_20 < 9; i_20 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_49 [i_12] [i_20] [i_16]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2016)) ? (((/* implicit */int) arr_58 [i_15] [i_15] [i_19] [i_20])) : (((/* implicit */int) var_2))))) : (var_5)));
                        var_34 -= ((signed char) -502204279);
                        var_35 = ((/* implicit */unsigned short) ((-2665580152987774782LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))));
                        arr_70 [(_Bool)1] [i_15] [(signed char)9] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_36 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-23888))));
                }
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1566633376868333630LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5290687364223491656LL)));
                        arr_76 [i_12] [i_15] [(signed char)7] [i_21] [i_15] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_38 [(signed char)2] [i_15])) ? (((/* implicit */int) arr_58 [i_12] [i_15] [i_15] [8ULL])) : (((/* implicit */int) var_1))))));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_22] [(unsigned short)7] [i_22])) : (((/* implicit */int) arr_35 [(signed char)12] [i_15] [i_15] [i_22]))))) : (((((/* implicit */_Bool) (short)-1949)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (3396132989017216999ULL)))));
                        arr_77 [i_12] [i_15] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6201742092813910776LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_22 - 1])) : (((/* implicit */int) (signed char)-124))));
                    }
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)64))));
                        var_41 = ((/* implicit */unsigned char) ((int) var_5));
                    }
                    var_42 *= ((/* implicit */long long int) (!((_Bool)1)));
                }
                for (long long int i_24 = 3; i_24 < 9; i_24 += 2) 
                {
                    arr_82 [i_15] [i_16] [(signed char)3] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)15884)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_16] [(_Bool)1]))) : (-3772820877180823398LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4))))));
                    var_43 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_25 [i_15] [i_16] [i_16])) ^ (((/* implicit */int) var_6))))));
                    arr_83 [i_12] &= ((/* implicit */signed char) (!((_Bool)1)));
                }
                arr_84 [i_12] [i_12] [i_15] = ((/* implicit */short) ((var_7) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1955)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1998))))) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_5)))));
            }
            /* vectorizable */
            for (unsigned short i_25 = 0; i_25 < 10; i_25 += 1) 
            {
                arr_89 [i_15] = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32359))) : (var_8)));
                var_44 = ((/* implicit */signed char) ((_Bool) var_7));
                var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_12] [i_15] [i_25] [i_25])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_61 [i_15] [i_15] [i_15] [i_25]))));
            }
            arr_90 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_50 [i_12] [i_15] [i_15]))))));
            arr_91 [i_12] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (short)-1951))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) arr_49 [i_12] [i_15] [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
            var_46 -= ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_5)))));
        }
        for (int i_26 = 0; i_26 < 10; i_26 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_27 = 4; i_27 < 8; i_27 += 1) 
            {
                for (unsigned short i_28 = 2; i_28 < 9; i_28 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_29 = 2; i_29 < 8; i_29 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_45 [i_12] [i_26] [i_29])))), (((/* implicit */int) ((unsigned short) var_9)))))) : ((~(max((var_8), (((/* implicit */unsigned long long int) arr_62 [i_12] [(short)6] [i_12] [i_12] [i_12]))))))));
                            arr_104 [i_12] [i_26] [i_27] [i_28 + 1] [i_28 + 1] [i_12] [i_29] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)28)))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_98 [i_29 + 1] [i_29] [i_29] [i_29 + 1])))));
                        }
                        var_48 &= ((/* implicit */short) ((((((long long int) var_3)) == (((/* implicit */long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_61 [i_27 + 2] [i_27 - 3] [i_28 - 1] [i_28 - 2]), (arr_61 [i_26] [i_27 - 2] [i_28 - 1] [i_28 - 2])))) : (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_31 [i_26])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned char)184)) : ((-(((/* implicit */int) var_7))))))));
                    }
                } 
            } 
            var_49 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (signed char)-119)) : (arr_80 [i_12] [i_26])))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)1955)) : (((/* implicit */int) arr_60 [i_12] [i_26] [i_12]))))))));
        }
    }
}
