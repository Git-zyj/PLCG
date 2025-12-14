/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249852
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
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) 225135403704567375ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_2] [i_2] [(unsigned char)16] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (short)-32745)))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [9ULL])) ? ((-(2778691375139878389ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            var_19 = arr_15 [i_1];
                            var_20 = ((/* implicit */unsigned char) (short)32744);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                            var_22 = ((/* implicit */unsigned char) (short)32744);
                            var_23 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (short)-32766)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)8] [i_1])))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 12053903637283876215ULL))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (short)-18415))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (var_9)));
                        }
                        arr_20 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = arr_14 [(short)13] [i_0] [i_1] [i_1] [i_2] [(unsigned char)6] [i_4];
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [7ULL] [i_4])) <= (((/* implicit */int) ((arr_16 [(short)8] [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [(short)4] [i_1] [i_1] [i_0] [i_1] [i_0]))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_28 += ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_14)), (arr_19 [i_7] [6ULL] [6ULL] [i_0]))), (min((((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (18446744073709551615ULL)))));
                        arr_24 [i_2] = (((!(((/* implicit */_Bool) arr_17 [i_2] [i_0] [i_1] [i_2] [i_7])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (arr_7 [i_7] [(unsigned char)2]) : (max((((/* implicit */unsigned long long int) (short)21503)), (arr_0 [(short)7] [(short)7]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-15735)) : (((/* implicit */int) (unsigned char)84))))));
                        var_29 += ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((arr_0 [8ULL] [i_1]) <= (((max((((/* implicit */unsigned long long int) (short)-29663)), (1ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1])))))));
                    arr_25 [i_0] [i_2] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (arr_16 [i_0] [i_1])))) << ((((-(((/* implicit */int) (short)32765)))) + (32784)))))), (((18446744073709551610ULL) & (19ULL)))));
                    arr_26 [i_2] [i_2] = 18446744073709551615ULL;
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_8])) ? (0ULL) : (11725195504023333478ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_4)));
                    var_32 = ((((/* implicit */_Bool) arr_10 [i_8 + 3] [i_8 - 1] [i_8 + 2] [i_8 + 4] [i_8 + 4] [i_8 + 2])) ? (arr_22 [i_8]) : (((((/* implicit */_Bool) var_2)) ? (17847970572360606967ULL) : (2380649683973126961ULL))));
                    arr_30 [i_8] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 836847862289712680ULL)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)10)))))) ? (((/* implicit */int) arr_4 [3ULL] [i_8])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                }
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) 
                {
                    var_33 |= ((/* implicit */unsigned long long int) var_11);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        var_34 *= max((((arr_34 [0ULL] [7ULL] [(short)1] [(short)1] [7ULL] [i_9]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) ((10ULL) <= (arr_18 [i_0] [i_0] [i_10] [i_0] [i_10])))));
                        var_35 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_10] [i_0]))))), (arr_16 [i_0] [i_0])));
                    }
                    arr_36 [i_0] = (-((~(4344612590449404629ULL))));
                }
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_6))));
                var_37 -= ((/* implicit */unsigned char) max((min((arr_21 [i_1] [18ULL] [18ULL] [i_0]), (arr_21 [i_0] [(short)18] [(unsigned char)4] [i_0]))), ((~(arr_21 [i_0] [i_0] [(short)10] [10ULL])))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 3) 
                {
                    for (short i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1])) + (((/* implicit */int) (unsigned char)252))))) ? (arr_12 [(unsigned char)18] [i_1] [i_1]) : (598773501348944628ULL)))));
                            /* LoopSeq 2 */
                            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                            {
                                var_39 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (8932474239397165835ULL) : (var_7))));
                                var_40 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_10))))) ? (7822705358313968732ULL) : (((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_11 - 2] [i_12] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))))))), (arr_22 [i_12])));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                            {
                                arr_46 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_12 - 1] [i_11 - 2] [i_11 - 2]))));
                                var_41 += ((/* implicit */short) var_12);
                                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_4 [(short)0] [i_1]))));
                                var_43 = ((/* implicit */short) var_4);
                                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16406226229094561841ULL)) ? (((/* implicit */int) (short)-18094)) : (((/* implicit */int) arr_32 [i_11 + 1] [2ULL] [i_11 + 1]))));
                            }
                            var_45 |= ((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [i_11 + 1]);
                            arr_47 [i_11 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_12);
                            var_46 += ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [(short)8] [i_12] [(short)3] [i_1] [i_0]))) & (0ULL));
                        }
                    } 
                } 
            }
        } 
    } 
    var_47 = ((/* implicit */short) var_3);
    var_48 = ((/* implicit */unsigned char) 13246630012942974885ULL);
}
