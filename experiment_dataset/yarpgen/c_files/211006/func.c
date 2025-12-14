/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211006
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
    var_17 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) var_8)))) + (9223372036854775807LL))) << (((((/* implicit */int) var_3)) - (5632)))))) ? (((/* implicit */int) ((short) ((var_7) - (((/* implicit */long long int) var_8)))))) : (((/* implicit */int) var_13)));
    var_18 = ((/* implicit */short) max(((-(((/* implicit */int) (short)19409)))), (((/* implicit */int) var_3))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */int) max(((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((var_16) ? (min((((/* implicit */long long int) arr_0 [i_0])), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) <= (var_0)))))))));
        var_20 = ((/* implicit */int) min((var_20), (max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0])))) <= (((/* implicit */int) var_16))))), (((((((/* implicit */int) var_3)) == (((/* implicit */int) (unsigned short)26892)))) ? (var_11) : (((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] [i_0] = min((max((((/* implicit */int) arr_3 [i_0])), (var_0))), (((/* implicit */int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) < (((((/* implicit */_Bool) (short)8870)) ? (var_15) : (((/* implicit */int) var_13))))))));
            var_21 += ((/* implicit */short) (-(((max((arr_2 [6LL]), (((/* implicit */long long int) (unsigned short)26905)))) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((short) arr_5 [i_2] [i_0] [0LL]))));
            arr_9 [i_0] = var_16;
            arr_10 [i_0] [i_2] [i_2] = ((((/* implicit */long long int) ((min((var_11), (arr_7 [i_2] [i_2] [i_0]))) * (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) arr_6 [i_2] [i_2])))))))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_0] [i_2] [10]) : (arr_2 [i_0]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
        {
            arr_14 [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_8 [i_0] [i_3]))))));
            var_23 |= ((/* implicit */long long int) ((((arr_11 [(_Bool)1]) / (-1882359816285239302LL))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0]) != (arr_11 [i_0])))))));
            arr_15 [i_0] [7] &= ((/* implicit */unsigned short) arr_8 [i_0] [i_0]);
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1)))) ? (-1261835489190393325LL) : (((/* implicit */long long int) var_0)))))));
        }
    }
    for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((/* implicit */long long int) ((int) arr_16 [i_4]))), (min((arr_16 [i_4 + 1]), (((/* implicit */long long int) ((1882359816285239309LL) > (32512LL)))))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
            arr_21 [i_4] = arr_18 [i_4 - 1] [i_4] [(unsigned short)14];
        }
        /* vectorizable */
        for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            var_26 = arr_23 [i_4] [i_6];
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 1])) ? (((((/* implicit */_Bool) arr_17 [(short)6])) ? (var_8) : (((/* implicit */int) arr_19 [(_Bool)0] [i_4] [i_6 + 3])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_18 [i_6] [i_4] [i_4 - 1]))))))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            arr_27 [15LL] [i_7] [i_4] = (-(((/* implicit */int) ((short) arr_23 [i_4] [i_4]))));
            /* LoopSeq 4 */
            for (long long int i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                arr_30 [i_4] [i_4] [i_7] [(_Bool)1] = ((/* implicit */_Bool) arr_29 [i_4] [i_4] [i_4]);
                var_28 = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)24696)) == (((/* implicit */int) var_13))))) >= (((/* implicit */int) arr_25 [i_4 + 1] [i_4 - 1] [i_8 - 2])));
                arr_31 [i_4] = ((/* implicit */_Bool) ((int) (short)-32767));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4 + 1] [i_8 - 1])) && (((/* implicit */_Bool) arr_24 [i_4 - 1] [i_8 + 1]))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                arr_35 [i_4] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55941)) ? (arr_16 [(short)16]) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_7] [i_4 - 1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_4] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        {
                            arr_42 [i_4] [i_7] [3LL] [i_4] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 251925837764716030LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((-426115159) < (((/* implicit */int) (unsigned short)47404)))))) : (arr_17 [i_4])));
                            arr_43 [i_4] [i_4] [i_9] [i_4] [i_11] = ((((/* implicit */int) ((unsigned short) (_Bool)1))) | (((/* implicit */int) arr_26 [i_4 + 1] [i_9 + 1])));
                            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_24 [i_7] [i_7])))) ? (arr_16 [i_9 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_5))))))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 4; i_12 < 23; i_12 += 4) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) arr_33 [i_4] [i_7] [i_12] [i_12]);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            arr_52 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] = ((/* implicit */_Bool) arr_32 [i_12 + 1] [i_13] [i_14]);
                            arr_53 [i_14] [18LL] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((var_6) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)19900)))) != (arr_29 [i_4] [i_4 - 1] [i_4 + 1])));
                            arr_54 [i_4] [i_4] [i_4] [(short)4] [i_4 + 1] [i_12 - 4] [(short)4] = ((/* implicit */short) ((((/* implicit */int) var_6)) | (arr_29 [i_4 - 1] [i_4 + 1] [i_4])));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))));
            }
            for (long long int i_15 = 4; i_15 < 23; i_15 += 4) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_11))));
                /* LoopSeq 3 */
                for (short i_16 = 1; i_16 < 20; i_16 += 3) 
                {
                    var_34 = ((((/* implicit */long long int) ((/* implicit */int) var_10))) * (arr_45 [i_15 - 4] [i_15 - 4] [i_4 + 1]));
                    arr_61 [i_4] [(_Bool)1] [i_15 - 2] [i_16 - 1] = arr_33 [i_4] [i_15 - 3] [i_4 - 1] [i_4];
                    arr_62 [i_4] [i_7] [i_4] = ((/* implicit */long long int) ((int) (unsigned short)0));
                    arr_63 [i_16] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_34 [i_4] [(unsigned short)18] [i_15] [i_15]);
                    arr_64 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_59 [(unsigned short)21]);
                }
                for (long long int i_17 = 3; i_17 < 21; i_17 += 1) /* same iter space */
                {
                    arr_67 [i_4 + 1] [i_4] [i_4 + 1] [i_17 + 3] = ((/* implicit */int) (_Bool)0);
                    arr_68 [i_4] [i_15] [i_4] = (-((-(((/* implicit */int) arr_40 [i_17 + 3] [i_7] [i_7] [i_4] [i_4 + 1])))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((arr_66 [i_17 + 2] [i_15 + 1] [i_15] [i_15] [i_15] [i_15]) / (((/* implicit */int) arr_18 [i_15] [i_15] [i_15])))))));
                }
                for (long long int i_18 = 3; i_18 < 21; i_18 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_32 [i_18] [(_Bool)1] [(unsigned short)5]))));
                    var_37 &= ((/* implicit */unsigned short) ((arr_65 [i_18 - 3] [i_18] [i_18] [i_18]) <= (arr_65 [i_18 - 3] [i_18] [i_18] [i_18])));
                    arr_71 [i_4 + 1] [i_4 + 1] [i_15] [i_4] [i_4 + 1] = ((/* implicit */int) ((long long int) arr_38 [i_18] [i_15 - 3] [i_4 - 1]));
                    arr_72 [i_15] [i_7] [i_15] &= ((/* implicit */short) var_1);
                }
            }
        }
        arr_73 [i_4] = ((/* implicit */long long int) var_9);
    }
    for (unsigned short i_19 = 1; i_19 < 23; i_19 += 2) /* same iter space */
    {
        arr_78 [10] [(_Bool)0] |= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14)) - (((/* implicit */int) (unsigned short)65535))));
        arr_79 [i_19] = ((/* implicit */_Bool) var_3);
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 24; i_20 += 3) 
        {
            for (int i_21 = 2; i_21 < 23; i_21 += 2) 
            {
                {
                    var_38 = ((/* implicit */short) max((var_10), ((((_Bool)1) && (var_6)))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1321624795)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_20] [i_19])) ? (((/* implicit */int) (unsigned short)14533)) : ((-2147483647 - 1))))) ? (min((arr_33 [i_19] [i_20] [i_20] [i_20]), (((/* implicit */int) arr_51 [i_19] [i_20] [i_21 + 1] [i_19] [i_20] [i_19 - 1] [i_20])))) : (var_8))) : (((/* implicit */int) (_Bool)1))));
                    arr_86 [i_20] [i_19] [i_20] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_5))))) <= (min(((-2147483647 - 1)), (((/* implicit */int) (short)-19900))))))) < (((/* implicit */int) min((arr_70 [i_19] [i_20] [i_19]), ((_Bool)1))))));
                }
            } 
        } 
    }
    var_40 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6148509001524320888LL)) ? (((/* implicit */long long int) -1887521138)) : (2961866447733146765LL)))) ? (var_1) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_4)));
}
