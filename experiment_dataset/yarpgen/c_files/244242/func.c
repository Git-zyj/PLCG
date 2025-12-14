/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244242
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
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((884035669U), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))) ? (var_2) : (var_12)));
    var_15 &= ((/* implicit */unsigned short) ((short) max((max((((/* implicit */unsigned int) (unsigned char)10)), (884035669U))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 3025977565U)) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_4)))))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (((unsigned int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [8ULL] [17LL] [i_0] [i_0] = (+(((((3025977536U) == (arr_7 [i_0] [i_1] [i_2]))) ? ((~(var_10))) : (min((((/* implicit */unsigned int) (unsigned char)10)), (3324201624U))))));
                            arr_11 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2])) >> (min((((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 - 2] [i_2 - 2])), (arr_1 [i_3])))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [(unsigned char)20] [i_0] [i_3] [i_0])) : (arr_13 [i_0] [(unsigned char)15] [i_2] [i_3] [i_4]))));
                                var_18 ^= ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (arr_13 [i_0] [(short)17] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10526)))));
                            }
                            for (int i_5 = 2; i_5 < 21; i_5 += 1) 
                            {
                                arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((var_12) >= (2393768716U)))))), (((unsigned char) ((3253509574U) > (arr_8 [i_0] [i_1] [i_2] [i_3] [i_5] [20U]))))));
                                arr_20 [19ULL] [i_1] [0LL] [i_3] [i_0] = ((/* implicit */long long int) arr_18 [i_5] [i_3] [i_0] [i_2 + 1] [i_1] [i_0]);
                                arr_21 [i_5] [i_0] [i_2] [i_0] [i_0] = max((((((/* implicit */_Bool) max((arr_9 [i_0] [(_Bool)1] [i_0] [15LL] [i_0]), (((/* implicit */int) arr_12 [i_0] [i_0] [16LL] [i_0]))))) ? (var_7) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2291))) : (1901198580U))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) (unsigned short)48276)))) & (((/* implicit */int) arr_18 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1]))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_1] [0ULL] [i_6] [i_7] &= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_3))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */signed char) 970765670U);
                            arr_32 [i_0] [i_1] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) var_3);
                            var_19 *= ((/* implicit */unsigned int) var_11);
                        }
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            arr_35 [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((unsigned int) (unsigned short)10540)) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                            arr_36 [i_0] [i_0] [i_6] [i_7] [i_0] = ((/* implicit */_Bool) ((arr_1 [3U]) ^ (max((max((8770350554900194988ULL), (((/* implicit */unsigned long long int) -1447141354424850133LL)))), (((/* implicit */unsigned long long int) (unsigned short)30318))))));
                        }
                        arr_37 [17U] [i_1] [i_1] [i_0] [(unsigned char)21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 0ULL))) > ((~(arr_23 [i_0])))));
                        arr_38 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29839))) > (2U)))), (max((arr_16 [i_0] [(unsigned short)16]), (((/* implicit */unsigned int) (unsigned char)0))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) arr_14 [20U] [i_1] [i_1] [i_1] [i_1] [i_1])), (((arr_12 [i_7] [i_7] [i_7 - 2] [i_7]) ? (arr_30 [(short)16] [i_7] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48283)) >> (((arr_5 [i_6] [i_6] [i_6] [i_6]) - (2010791659046393608ULL)))))))))))));
                            var_21 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((var_1) ? (((/* implicit */int) arr_12 [i_0] [i_1] [20U] [i_7 - 2])) : (((/* implicit */int) arr_25 [i_0])))), (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)1)))))))), ((-(max((arr_16 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))));
                            var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)182))));
                        }
                    }
                    arr_42 [i_6] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_23 [i_6])))) ? (max((((/* implicit */long long int) var_1)), (arr_30 [10ULL] [i_0] [i_0] [i_1] [i_1] [i_6]))) : (((/* implicit */long long int) 652891195U))))), (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_29 [i_0])), (0ULL))))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 2; i_11 < 19; i_11 += 1) 
                {
                    arr_46 [18ULL] [i_1] [i_11 - 1] &= (+(arr_6 [i_0] [i_1] [i_11 + 3]));
                    var_23 += ((/* implicit */unsigned long long int) ((((879800964U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_11] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_12)) > (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [17])))) : (((/* implicit */int) arr_28 [i_0] [i_0]))));
                    var_24 = ((unsigned int) arr_33 [i_11 - 2]);
                }
                arr_47 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_8), (max((arr_8 [i_0] [i_0] [i_0] [(unsigned short)17] [i_0] [i_0]), (((/* implicit */unsigned int) arr_27 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) max((((/* implicit */int) arr_4 [i_0])), (arr_23 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [14ULL] [i_1] [(unsigned char)16] [i_1] [i_1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))))) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
}
