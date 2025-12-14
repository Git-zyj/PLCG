/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224094
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
    var_16 -= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15347813842351878961ULL)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169)))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1])) : (((/* implicit */int) (unsigned char)29)));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [(_Bool)0]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_7);
    var_19 *= var_4;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_6 [i_2] [i_2]))));
        var_21 = arr_7 [i_2];
        var_22 = ((arr_7 [i_2 + 1]) ? (((/* implicit */int) arr_7 [i_2 + 1])) : (((/* implicit */int) arr_7 [i_2 + 1])));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
            {
                for (signed char i_6 = 2; i_6 < 21; i_6 += 4) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_3] [(unsigned char)6] [i_5] [17LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [6])) ? (((var_11) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_11 [i_4])))) : (((/* implicit */int) arr_14 [i_4 + 3]))));
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (short)-4028)) : (((/* implicit */int) (signed char)15))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) ((arr_8 [i_3] [i_4]) ? (((/* implicit */int) arr_11 [i_4 - 1])) : (((/* implicit */int) arr_8 [i_3] [i_4]))));
            var_24 = ((/* implicit */short) arr_8 [22LL] [i_4]);
            arr_25 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_15 [i_4 + 1] [i_4 - 2] [i_4 - 4] [i_4]))));
        }
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) 
        {
            arr_28 [i_3] [i_7] = ((/* implicit */short) arr_20 [i_3] [i_7] [i_7 + 3] [i_7]);
            var_25 = arr_17 [i_7];
            var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_7 + 4] [i_7 + 2] [i_7])) : (((/* implicit */int) (unsigned char)165))))) ? (((arr_13 [i_7]) ? (((/* implicit */int) arr_20 [i_7 + 4] [i_7 + 1] [i_7 - 2] [i_7 - 1])) : (((/* implicit */int) arr_21 [i_3] [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) (unsigned short)27365)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (short)7164))))));
            var_27 = ((/* implicit */int) max((var_27), (((((/* implicit */_Bool) ((arr_19 [i_7 - 2] [i_7 + 4] [i_7 + 3] [i_7 + 3]) ? (((/* implicit */int) arr_21 [i_7 - 2] [i_7 + 3] [i_7 + 1] [i_7 + 3])) : (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 3] [i_7 + 4] [i_7 + 1]))))) ? (((/* implicit */int) arr_21 [i_7 + 4] [i_7 + 2] [i_7 + 2] [i_7 - 1])) : (((arr_19 [i_7 + 3] [i_7 + 4] [i_7 + 2] [i_7 + 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_19 [i_7 + 3] [i_7 + 4] [i_7 + 4] [i_7 - 1]))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            var_28 = ((/* implicit */int) var_7);
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) 
            {
                for (long long int i_10 = 2; i_10 < 22; i_10 += 3) 
                {
                    {
                        arr_35 [i_3] [i_3] [i_8] [(short)10] = ((/* implicit */unsigned long long int) arr_19 [i_9 - 2] [i_8] [i_10 - 1] [(unsigned char)22]);
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (14494833628886796114ULL)));
                        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5383880925326974749LL)) ? (((/* implicit */int) arr_15 [i_3] [i_9 - 2] [i_10 - 2] [i_10])) : (((/* implicit */int) (unsigned short)6063))));
                    }
                } 
            } 
        }
        /* LoopSeq 4 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                {
                    {
                        arr_45 [i_13] [i_11] [i_11] [i_11] [i_3] = arr_40 [i_11 - 1];
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 3; i_14 < 22; i_14 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -537098127)) : (arr_29 [i_3] [i_3])))) ? ((((_Bool)1) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26491))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_11] [(short)15] [i_13])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_14 - 3] [(_Bool)0] [i_11 - 1] [i_13] [i_14] [i_12]))) : (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_14] [i_12]))) : (((((/* implicit */_Bool) (unsigned char)154)) ? (20ULL) : (((/* implicit */unsigned long long int) -2147483641))))))));
                            var_32 = ((/* implicit */unsigned int) arr_48 [i_3] [(signed char)8] [i_11] [(unsigned short)14] [i_13] [19ULL]);
                        }
                        for (long long int i_15 = 3; i_15 < 19; i_15 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */long long int) arr_21 [i_3] [(_Bool)1] [i_12] [i_11]);
                            arr_51 [22] [i_13] [i_12] [i_11] [22] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3] [i_11] [(unsigned char)11] [i_15])) ? (((/* implicit */int) arr_20 [i_11 - 1] [i_15 - 1] [i_15] [i_15])) : (((((/* implicit */_Bool) arr_12 [(unsigned char)8])) ? (((/* implicit */int) arr_32 [i_11] [i_12])) : (((/* implicit */int) arr_42 [i_12]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_8 [i_3] [i_13]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(unsigned char)8] [i_11] [4U])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [5LL])) ? (((/* implicit */int) arr_19 [i_3] [i_11] [i_12] [i_15])) : (((/* implicit */int) arr_16 [i_3] [17] [i_12]))))) : (arr_10 [i_15])))) : (((((/* implicit */_Bool) (signed char)-2)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        for (long long int i_16 = 3; i_16 < 19; i_16 += 2) /* same iter space */
                        {
                            arr_55 [i_3] [10U] [i_12] [i_11] [i_16] = ((/* implicit */int) arr_22 [i_11] [i_12]);
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13684))));
                            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3] [i_11] [i_13] [i_16 + 1])) ? (((/* implicit */int) arr_21 [i_3] [(unsigned short)9] [i_3] [i_3])) : (((/* implicit */int) arr_52 [i_3] [i_11] [i_12] [i_13] [i_16]))));
                            arr_56 [i_3] [i_11] [i_12] [i_11] [(unsigned short)18] = arr_38 [i_3] [22LL] [i_11];
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_13 + 1] [i_11 - 1]) ? (((((/* implicit */_Bool) (signed char)12)) ? (1048575ULL) : (((/* implicit */unsigned long long int) -4242547560618955548LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11 - 1])))))) ? (arr_33 [i_3] [8U] [i_12] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_11] [(unsigned char)18])))));
                        }
                        /* vectorizable */
                        for (long long int i_17 = 3; i_17 < 19; i_17 += 2) /* same iter space */
                        {
                            var_37 = arr_18 [i_12];
                            arr_59 [i_17] [i_11] [i_12] [i_11] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_38 [i_3] [i_3] [i_11])) : (arr_58 [i_11])));
                            arr_60 [i_3] [i_11] [i_12] [i_13] [i_17] = ((/* implicit */unsigned short) arr_44 [(unsigned char)11] [i_3] [(unsigned char)22] [i_12] [i_13 + 1] [i_17 + 1]);
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */long long int) arr_29 [i_13] [i_11])) : (arr_26 [i_3])));
                            arr_61 [i_3] [i_3] [i_3] [i_3] [i_11] = ((/* implicit */unsigned short) arr_18 [i_3]);
                        }
                        var_39 = ((/* implicit */_Bool) arr_18 [i_3]);
                    }
                } 
            } 
            arr_62 [i_3] [i_11] = ((/* implicit */long long int) arr_18 [i_11]);
            var_40 -= ((/* implicit */unsigned char) arr_47 [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [i_11] [i_11]);
            arr_63 [i_11] = ((/* implicit */int) arr_16 [i_3] [(_Bool)1] [(unsigned char)21]);
        }
        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_18])) ? (((((/* implicit */_Bool) arr_39 [i_3] [i_18])) ? (((/* implicit */int) arr_15 [i_18] [(_Bool)1] [i_3] [7LL])) : (((/* implicit */int) arr_39 [i_3] [i_3])))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_18] [i_18] [i_3])) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_18] [i_18])) : (((/* implicit */int) arr_15 [i_18] [i_3] [i_3] [i_3]))))));
            var_42 &= arr_11 [i_18];
            arr_67 [i_3] [i_18] = ((/* implicit */unsigned char) var_11);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            arr_70 [i_3] [i_3] [i_19] = ((/* implicit */signed char) var_3);
            var_43 = ((/* implicit */unsigned int) arr_66 [i_3] [i_3] [i_19]);
        }
        for (unsigned short i_20 = 3; i_20 < 22; i_20 += 4) 
        {
            arr_75 [18LL] = ((/* implicit */_Bool) arr_38 [i_3] [i_20 - 3] [12LL]);
            var_44 = ((/* implicit */unsigned char) min((var_44), (arr_11 [i_3])));
        }
        var_45 -= ((/* implicit */unsigned short) ((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [9U]))));
        arr_76 [14] = ((/* implicit */int) var_9);
    }
}
