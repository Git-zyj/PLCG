/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51859
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */int) var_1);
        var_13 &= ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0 - 1]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_7)));
        var_14 *= ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_3 [(_Bool)0]))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) 
        {
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_3 - 2] [i_2] [i_2]))));
            arr_10 [i_3] [i_2] = ((/* implicit */signed char) min((max((8372224U), (((/* implicit */unsigned int) (signed char)-119)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3 + 1])))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                var_16 = ((/* implicit */int) ((signed char) ((((arr_5 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [8LL] [i_4] [i_2]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_4])))))));
                var_17 |= ((/* implicit */int) ((((int) max((((/* implicit */short) var_8)), (var_5)))) != (((((int) arr_2 [i_2])) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))))));
            }
            for (short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
            {
                arr_18 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((int) (~(((/* implicit */int) arr_11 [i_2] [i_4])))));
                arr_19 [i_4] [i_4] = ((/* implicit */signed char) (((~(((/* implicit */int) min(((signed char)119), ((signed char)-38)))))) << (((var_0) - (2683839059U)))));
                arr_20 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)123))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)71))));
                            var_19 = ((/* implicit */signed char) (~((((~(((/* implicit */int) var_6)))) + (((/* implicit */int) ((((/* implicit */int) arr_21 [i_4])) != (((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
            for (short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((arr_16 [i_2] [(signed char)12] [i_2] [i_2]), (((/* implicit */int) arr_8 [i_2] [i_4] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9]))) : (((arr_23 [i_2] [i_2] [i_4] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_2] [i_9] [i_2]))) : (var_10)))))));
                /* LoopSeq 4 */
                for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [(unsigned short)10] [(unsigned short)10] [i_9] [i_4]))))), (max((((/* implicit */unsigned int) var_3)), (arr_12 [i_2])))));
                    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (var_10)))) ? (min((((/* implicit */long long int) arr_25 [i_2] [i_2] [i_4] [(unsigned short)14] [i_9] [(unsigned short)14])), (((long long int) 9223372036854775808ULL)))) : (((/* implicit */long long int) ((int) arr_14 [13] [i_4] [i_4])))));
                    var_23 = min(((~((+(((/* implicit */int) var_3)))))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_6)))))));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) + (17438848519489725837ULL)));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32767))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2] [i_4] [(signed char)11])) ^ (((/* implicit */int) arr_14 [i_2] [i_4] [i_9]))));
                    arr_33 [i_4] [i_4] [i_9] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_2]))));
                    arr_34 [i_4] [(unsigned short)17] [i_4] = ((/* implicit */_Bool) arr_0 [i_2]);
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 3; i_12 < 17; i_12 += 3) /* same iter space */
                    {
                        arr_38 [0U] [i_2] [(unsigned short)6] [i_11] [(unsigned char)14] [(unsigned char)10] &= ((/* implicit */unsigned short) ((_Bool) arr_31 [i_12] [i_12 + 2] [i_12 - 2] [i_12 + 1] [i_12 + 2] [i_12 + 2]));
                        arr_39 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) arr_25 [i_2] [i_4] [i_9] [i_11] [(short)7] [i_12 + 3]);
                        var_27 = ((/* implicit */_Bool) var_9);
                        var_28 = ((/* implicit */unsigned int) ((short) var_6));
                        arr_40 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                    }
                    for (unsigned int i_13 = 3; i_13 < 17; i_13 += 3) /* same iter space */
                    {
                        var_29 = (-(((/* implicit */int) arr_43 [i_2] [i_4] [i_9] [(_Bool)1] [i_13 + 2])));
                        var_30 = (-(((((/* implicit */int) var_6)) + (((/* implicit */int) arr_22 [i_2] [i_2] [i_9] [i_4])))));
                        var_31 = ((((/* implicit */int) arr_43 [i_13 + 2] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 3])) + (((/* implicit */int) arr_31 [i_2] [i_2] [(signed char)13] [i_11] [i_11] [i_9])));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 3])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        arr_45 [i_2] [i_4] [i_9] = (+(arr_36 [i_2] [i_2] [i_2] [8] [(signed char)2] [i_2]));
                    }
                }
                for (short i_14 = 2; i_14 < 18; i_14 += 3) 
                {
                    var_33 *= ((/* implicit */_Bool) (-(((((unsigned long long int) arr_3 [i_2])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_2)))))))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_41 [(unsigned short)3] [i_14 + 1] [i_14 - 2] [i_14 - 2] [i_14 - 2])))) | (((/* implicit */int) min((arr_41 [(unsigned char)16] [i_14 - 2] [i_14 - 2] [8LL] [i_14 + 2]), (arr_41 [i_14 + 1] [i_14 + 1] [i_14 - 2] [i_14 - 1] [i_14 + 1])))))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_35 = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_2])) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_31 [i_9] [i_4] [1ULL] [i_15] [i_15] [i_2]))))));
                    var_36 = ((/* implicit */short) var_9);
                    var_37 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_37 [(_Bool)1] [i_9] [i_2])))) + (min((var_11), (((/* implicit */unsigned long long int) arr_37 [i_2] [i_2] [i_2]))))));
                    arr_50 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3306209009U))));
                }
            }
            var_38 = ((/* implicit */unsigned int) max((-5317917243390787744LL), (((/* implicit */long long int) 3306209009U))));
        }
        var_39 = ((/* implicit */short) ((((/* implicit */int) (signed char)52)) <= (((/* implicit */int) (short)228))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_16 = 3; i_16 < 16; i_16 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            for (unsigned int i_18 = 3; i_18 < 18; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    {
                        arr_62 [i_16 + 2] [i_17 - 1] [i_18 - 1] [i_19] &= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_5))))));
                        var_40 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_16 + 1] [i_18] [16LL]))));
                        var_41 = ((/* implicit */long long int) (((_Bool)0) ? (16051498256947580899ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20034)))))));
                        /* LoopSeq 1 */
                        for (short i_20 = 0; i_20 < 19; i_20 += 1) 
                        {
                            var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                            arr_67 [i_17 - 1] [i_18] = (~(((/* implicit */int) (_Bool)1)));
                            var_43 += ((int) arr_15 [i_17 - 1] [i_19] [i_17 - 1]);
                            var_44 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_16 - 2]))));
                            var_45 = ((/* implicit */unsigned short) var_11);
                        }
                    }
                } 
            } 
        } 
        var_46 &= ((/* implicit */long long int) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((((/* implicit */int) ((short) var_2))) + (2024)))));
        /* LoopSeq 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_47 = (!(((/* implicit */_Bool) arr_9 [i_16 + 2])));
            arr_70 [i_21] [i_16 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1738384181)) && (((/* implicit */_Bool) (unsigned char)0))));
            var_48 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_1 [i_21]))))));
        }
        for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 15; i_23 += 1) 
            {
                for (long long int i_24 = 3; i_24 < 18; i_24 += 2) 
                {
                    {
                        arr_79 [(unsigned short)3] [i_24] [i_23 + 2] [i_22] [i_16 + 3] [(unsigned short)3] = ((((arr_44 [i_16 + 1] [i_24 + 1] [i_24 + 1] [i_24 - 3] [i_23 + 4] [i_16 - 1]) + (2147483647))) << (((((arr_44 [i_16 - 3] [i_22] [i_23] [i_24 + 1] [i_23 + 2] [i_16 + 2]) + (1852656690))) - (14))));
                        arr_80 [10] [i_22] [i_22] [i_22] = ((/* implicit */int) ((short) ((unsigned int) var_7)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                var_49 = ((/* implicit */short) arr_73 [i_16 - 3] [i_22] [(unsigned short)6]);
                var_50 = ((/* implicit */unsigned short) ((int) var_5));
                arr_84 [i_22] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_74 [i_16 + 2] [(_Bool)1]))));
                var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((signed char) arr_47 [i_16 - 2] [13ULL] [i_16 - 2] [i_22] [i_22] [13ULL])))));
                /* LoopNest 2 */
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
                {
                    for (unsigned short i_27 = 0; i_27 < 19; i_27 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */int) arr_73 [i_16 + 3] [i_16 + 3] [i_16 + 3])) + (((/* implicit */int) arr_73 [i_16 + 3] [i_16 + 3] [i_16 + 3])))))));
                            var_53 = ((/* implicit */_Bool) ((unsigned char) (~(arr_56 [i_22] [i_25] [i_22]))));
                            var_54 |= ((/* implicit */unsigned short) ((arr_83 [i_22] [i_16 + 3] [i_16 - 1]) ? (((unsigned int) arr_28 [i_16 - 1] [i_22])) : (var_10)));
                            arr_89 [i_26] [i_26] [i_26] |= ((/* implicit */int) ((unsigned short) arr_46 [i_16 + 2] [i_22] [i_25] [i_25]));
                            var_55 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (var_10) : (var_10))) > (((/* implicit */unsigned int) ((int) arr_12 [8ULL])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned short i_28 = 0; i_28 < 19; i_28 += 4) 
            {
                var_56 = ((/* implicit */short) (-(arr_3 [i_28])));
                var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) (-(((/* implicit */int) var_5)))))));
                arr_92 [i_16 - 3] [i_22] [i_22] [i_22] = ((/* implicit */signed char) arr_72 [i_16 + 2]);
            }
            var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) var_3))));
        }
    }
    var_59 = var_2;
}
