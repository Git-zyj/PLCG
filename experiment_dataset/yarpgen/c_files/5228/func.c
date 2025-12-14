/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5228
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
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (arr_4 [5ULL] [i_0]))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)21403))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-21404)) * (((/* implicit */int) (signed char)-75))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21396))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)31))) & (3963748309135018660LL)))))));
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) ((short) arr_0 [i_2] [18LL])))) + (min((((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))), (min((arr_3 [i_0] [i_0]), (((/* implicit */int) (unsigned char)83))))))));
                        arr_12 [21ULL] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))));
                        var_23 += ((/* implicit */short) arr_9 [i_0] [i_2]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)9756)) >= (arr_3 [i_0] [i_1]))) ? (((((/* implicit */_Bool) arr_4 [i_4] [i_0])) ? (((/* implicit */long long int) arr_9 [i_0] [(unsigned char)15])) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_17)) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_4] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_8))) <= (((((/* implicit */_Bool) (short)-21377)) ? (((/* implicit */int) (unsigned short)15354)) : (((/* implicit */int) (short)-21381))))));
                arr_16 [(unsigned short)12] [i_4] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0])) ? (((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_0] [17U])))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)3222)))))));
            }
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            arr_26 [24LL] [i_7] [(signed char)18] [22ULL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_7] [i_6] [i_0]))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_12))))))));
                            var_26 = ((/* implicit */int) min((min((((/* implicit */long long int) (short)-16027)), (((arr_22 [i_0] [(short)22] [i_5] [i_6] [i_7] [i_8]) ^ (((/* implicit */long long int) arr_9 [(short)0] [(signed char)13])))))), (((/* implicit */long long int) (unsigned short)63))));
                            var_27 = ((/* implicit */long long int) (~(((arr_23 [(short)22] [i_5] [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) (short)21396)) : (((/* implicit */int) var_8)))))))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)26705)), (0ULL)))) ? (((((/* implicit */_Bool) 10602329370071543649ULL)) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_6] [i_7])) : (arr_23 [i_0] [i_0] [i_6]))) : (((/* implicit */unsigned long long int) ((4294967295U) >> (((arr_4 [i_6] [i_6]) + (1820695497)))))))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0])))));
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_0]))), (arr_21 [i_5] [i_5] [i_5] [i_0] [(_Bool)1] [i_0])))) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_0] [i_5] [i_5] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)21944))) : (max((((/* implicit */long long int) (signed char)36)), (4411885133157150556LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            arr_29 [i_9] [i_0] [i_0] = ((arr_9 [i_9 + 2] [i_9 - 2]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9 + 3] [i_9 + 1]))));
            arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_0] [(short)20])) == (((/* implicit */int) arr_27 [i_9 + 2] [i_0]))));
            var_31 = ((/* implicit */unsigned short) -3749227524683041900LL);
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 24; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_9 + 1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_28 [i_9 + 1] [i_10 - 1])) : (((/* implicit */int) arr_28 [i_9 + 1] [i_10 + 1]))));
                    arr_36 [i_0] [i_9] [i_9] [i_10 + 1] [i_10] = ((/* implicit */unsigned char) arr_11 [i_11] [i_0] [12U] [i_0]);
                    arr_37 [i_0] [(unsigned short)1] [i_10 - 1] [i_0] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((var_18) - (2842458161U)))));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_9 - 2] [i_0] [i_10 - 1])) ? (arr_20 [i_9 - 2] [i_11] [i_10 - 1]) : (arr_20 [i_9 + 1] [i_9] [i_10 - 1])));
                }
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (arr_24 [i_0] [i_0] [i_10] [i_10] [15LL]) : (((/* implicit */unsigned long long int) arr_14 [17ULL] [i_9] [i_10] [i_12])))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_10] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_39 [i_12] [i_12] [i_10] [i_9] [i_0]))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 2) 
                    {
                        arr_44 [(signed char)10] [i_9] [i_9 + 3] [(signed char)10] [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_12] [i_12] [i_12])) ? (arr_13 [i_9 + 2] [i_9 + 1] [i_9 - 2]) : (((/* implicit */int) ((signed char) var_11)))));
                        arr_45 [i_9] [i_9] [i_9] [i_10] [(signed char)17] = ((/* implicit */signed char) (((-(7239623041842270407ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-21945))))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1009673685)) ? (((/* implicit */int) ((unsigned short) (unsigned short)65535))) : (((/* implicit */int) arr_41 [i_0] [i_9 - 2] [i_10 + 1] [i_12] [i_13]))));
                        arr_46 [(short)8] [(short)8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_13 + 1] [i_12] [i_9] [i_0]) : (((/* implicit */int) var_5))))) ? (((long long int) arr_24 [(short)15] [i_12] [i_10] [i_9] [i_0])) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))));
                        var_36 = ((/* implicit */unsigned long long int) (-(-1771847165919772122LL)));
                    }
                    for (long long int i_14 = 3; i_14 < 24; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (arr_33 [i_0] [i_9] [(unsigned short)23] [i_12] [i_14 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [i_10] [i_9 + 3] [i_10 + 1] [i_14 + 1])))));
                        var_38 += ((/* implicit */unsigned short) arr_23 [i_14 - 2] [i_9] [i_9 + 2]);
                        var_39 = ((((/* implicit */_Bool) arr_47 [i_14] [i_12] [i_10] [i_9] [i_0])) ? (arr_47 [i_0] [i_9] [i_10 - 1] [i_9] [(short)11]) : (arr_47 [i_0] [2] [i_10] [2] [0]));
                    }
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_52 [i_0] [i_0] [i_10] [i_10] [(unsigned short)20] = ((/* implicit */unsigned long long int) var_8);
                        arr_53 [2U] [i_10] [i_10] [i_12] [i_10] [i_12] = ((/* implicit */unsigned short) (~(arr_34 [i_10] [i_10 - 1] [i_9] [i_9 + 1] [(signed char)2] [i_10])));
                    }
                }
                for (short i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) 39192103U)) ? (1009673697) : (((/* implicit */int) (unsigned short)4)))))));
                    var_41 = ((/* implicit */short) arr_47 [i_9] [3] [i_10] [i_0] [i_9]);
                    var_42 = ((/* implicit */signed char) arr_47 [i_0] [i_0] [i_10] [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 25; i_18 += 2) 
                    {
                        {
                            arr_62 [i_10] [i_10] [i_18] = ((/* implicit */short) (signed char)-62);
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) -1009673690))));
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) var_10))));
                            arr_63 [i_17] [i_10] [(signed char)11] [23ULL] = ((/* implicit */long long int) (unsigned short)4);
                            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_9 - 2]))) - (((arr_11 [i_18] [(unsigned short)8] [19U] [22U]) - (var_7))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 2; i_19 < 24; i_19 += 4) 
            {
                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [14U] [i_19] [i_19 - 1] [i_9] [i_9])) ? (((unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_19] [i_19])) : (((/* implicit */unsigned long long int) (+(var_0))))));
                var_47 = ((/* implicit */signed char) var_19);
                var_48 -= ((/* implicit */signed char) ((short) arr_22 [i_9 + 1] [i_19 + 1] [24ULL] [i_9] [(short)3] [i_19]));
                var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((arr_31 [i_0]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) : (arr_34 [i_19] [i_9] [i_9 - 2] [i_9 + 3] [i_9 + 2] [i_19 - 1]))))));
            }
        }
        arr_66 [i_0] = ((/* implicit */_Bool) arr_54 [i_0] [i_0] [10ULL] [i_0] [i_0]);
        var_50 = ((/* implicit */long long int) var_15);
    }
    var_51 = ((/* implicit */long long int) min(((unsigned char)64), (((/* implicit */unsigned char) var_14))));
}
