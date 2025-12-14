/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38983
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
    var_14 = max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))) / ((+(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (8110624553021280870ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_0)))))) : (((10336119520688270724ULL) * (((/* implicit */unsigned long long int) 6704091376996849910LL)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))) : (max((2847844091U), (((/* implicit */unsigned int) var_2))))))), (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) - (max((((/* implicit */unsigned long long int) var_8)), (var_12)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) 1447123205U)) ? ((+(arr_3 [i_1] [(signed char)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_17 *= ((/* implicit */long long int) (+(((/* implicit */int) ((10336119520688270725ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_18 = ((/* implicit */short) (-(8110624553021280879ULL)));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_10 [9ULL] [i_2] [i_2] [i_2]) : (arr_10 [i_1] [i_2] [i_1] [i_4])));
                        arr_14 [i_1] [(unsigned char)1] [(unsigned char)1] [i_4] = ((/* implicit */unsigned short) (-2147483647 - 1));
                    }
                } 
            } 
        } 
        var_20 &= ((/* implicit */short) ((arr_5 [i_1]) + (((/* implicit */unsigned long long int) 1447123228U))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 3ULL))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((signed char) var_0)))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (signed char)65))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        {
                            var_24 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7] [i_5] [(short)8] [i_10]))) >= (arr_3 [i_5] [i_5]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_26 [(short)6] [i_7] [i_7] [10ULL] [i_11 + 1] [i_7] [i_10]));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_1 [i_5]))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
            {
                arr_36 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((arr_25 [i_6] [i_6] [i_6] [i_5]) ? (arr_20 [i_5] [i_5] [i_5] [(signed char)0]) : (((/* implicit */unsigned long long int) 2122032699U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765)))));
                arr_37 [4ULL] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 5196467344373768495ULL)) || (((/* implicit */_Bool) var_3))));
                var_26 ^= ((/* implicit */_Bool) var_5);
            }
            for (int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((arr_25 [i_5] [i_5] [i_13] [i_14]) ? (1139409595) : (((/* implicit */int) arr_41 [i_6])))) * (((/* implicit */int) ((((/* implicit */int) arr_12 [i_14] [i_6] [i_13] [i_14] [i_13] [i_15])) == (((/* implicit */int) var_11)))))));
                            arr_46 [i_5] [3LL] [4LL] [(unsigned short)8] [i_6] [i_5] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)111)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */int) arr_27 [i_6])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        {
                            arr_51 [i_6] [(unsigned short)10] [i_6] = ((/* implicit */int) var_11);
                            var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
                            arr_52 [i_5] [i_6] [i_13] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) 10336119520688270725ULL)) ? (7427524395739486608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_11)))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_30 [4ULL]))))))))));
                        }
                    } 
                } 
                arr_53 [i_6] [i_6] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6 + 2] [i_5])) / (((/* implicit */int) arr_12 [i_5] [i_5] [i_6] [i_13] [i_13] [i_13]))));
            }
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((_Bool) arr_35 [i_5])))));
        }
        /* LoopNest 3 */
        for (long long int i_18 = 3; i_18 < 8; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 3) 
            {
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    {
                        var_31 = ((/* implicit */int) (short)32749);
                        arr_62 [6U] [8] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_11 [i_5] [i_18] [i_18 - 3] [i_20])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_19]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 3; i_21 < 10; i_21 += 2) /* same iter space */
                        {
                            var_32 *= ((/* implicit */signed char) (short)32744);
                            arr_66 [i_5] [i_5] [i_21] [i_21] [i_20] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-22658))))) ? (((/* implicit */long long int) ((var_1) / (((/* implicit */int) arr_31 [i_5] [i_18] [i_19] [i_20] [i_21]))))) : (9223372036854775807LL)));
                        }
                        for (unsigned short i_22 = 3; i_22 < 10; i_22 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (unsigned short)37614))));
                            arr_69 [i_20] [i_20] [i_20] [i_20] [i_20] = ((((arr_34 [i_18] [i_18] [i_19]) / (((/* implicit */int) arr_50 [i_5] [i_5] [i_19] [i_5] [i_5])))) >= (((/* implicit */int) ((unsigned char) arr_63 [i_5] [i_19]))));
                            arr_70 [(_Bool)1] [(_Bool)1] [i_19] [(unsigned short)8] [i_22] [i_22 - 1] = ((/* implicit */unsigned short) ((arr_3 [i_18 + 3] [i_18]) * (var_5)));
                            var_34 -= ((/* implicit */_Bool) var_7);
                        }
                        var_35 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_20])) && (((/* implicit */_Bool) arr_33 [i_20] [i_20]))));
                    }
                } 
            } 
        } 
        var_36 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) << (((/* implicit */int) (short)0))))));
        arr_71 [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
    }
    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (((+(((/* implicit */int) arr_57 [i_23] [i_23] [i_23] [i_23])))) >= (-81309341))))));
        var_38 |= ((/* implicit */unsigned int) var_1);
        var_39 = ((/* implicit */_Bool) min(((+(arr_65 [i_23]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)43)))))));
    }
    /* LoopSeq 1 */
    for (int i_24 = 0; i_24 < 13; i_24 += 1) 
    {
        var_40 = ((/* implicit */unsigned int) var_4);
        arr_77 [i_24] [i_24] = ((/* implicit */unsigned long long int) ((signed char) (-(13699993409815181584ULL))));
        var_41 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_24] [i_24] [i_24] [i_24]))));
        arr_78 [i_24] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_76 [i_24])) || (((/* implicit */_Bool) arr_4 [i_24]))))) << (((((/* implicit */_Bool) arr_4 [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_76 [i_24])))));
    }
    var_42 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_11))));
    var_43 -= ((/* implicit */signed char) var_11);
}
