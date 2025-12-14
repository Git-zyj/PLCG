/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209968
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
    var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_2)) + (24317)))))) < (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)))))), (((var_11) - ((~(var_3)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((short) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned short) ((var_1) ? (min((((/* implicit */int) (_Bool)1)), (204278149))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
                    /* LoopSeq 4 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_17 |= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_1))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) arr_5 [i_2] [i_3])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(arr_11 [i_1 - 1] [i_2] [i_1 - 1] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 3) 
                        {
                            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)135)) ? (1886198724) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) -2036190616)) && (((/* implicit */_Bool) 3617724377152154319ULL))))) <= (((arr_11 [i_0] [i_1] [i_2] [i_4 - 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14)))))))));
                            var_19 = (((((-(3148910276370484238LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [(unsigned short)8] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])))) ? (((/* implicit */int) var_4)) : (max((arr_7 [i_0] [i_1] [7ULL] [i_3]), (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])))))));
                            arr_15 [i_4] = ((/* implicit */unsigned char) arr_6 [i_0]);
                            var_20 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (73434269)));
                            var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_13)), ((~(((arr_6 [i_0]) & (arr_0 [i_0] [i_0])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) (unsigned short)35262))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) >= (var_6)))) : (((((/* implicit */_Bool) 6516651594147823645LL)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)21))));
                        arr_19 [i_0] [i_0] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) ((unsigned char) var_14))) && (((/* implicit */_Bool) var_3)));
                    }
                    for (long long int i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        arr_23 [(_Bool)1] [i_1] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_9)) < (arr_18 [i_0] [i_0] [i_0] [i_0])))) : ((+(73434269)))))) + (min((var_11), (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_11))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_0) : (var_11)))) ? (min((arr_18 [i_0] [i_0] [i_0] [i_0]), (arr_20 [(short)16] [i_1 + 1] [i_1] [i_2] [i_6]))) : (((((/* implicit */_Bool) (unsigned char)166)) ? (-6429408075188999550LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) : ((~(((unsigned long long int) var_7))))));
                        var_25 = ((/* implicit */int) ((unsigned char) (unsigned short)65535));
                    }
                    for (long long int i_7 = 2; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_0] = ((/* implicit */short) var_5);
                        var_26 = ((/* implicit */_Bool) var_4);
                        arr_28 [i_0] [i_0] [i_0] [(unsigned short)12] = ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_12)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [4LL] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) ((((var_3) + (9223372036854775807LL))) >> (((max((((/* implicit */int) var_2)), (arr_21 [i_1]))) - (660602063))))))));
                    }
                    var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))) ? (((/* implicit */unsigned long long int) ((arr_21 [i_0]) & (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_11)) : (var_6))))), (((/* implicit */unsigned long long int) ((_Bool) arr_25 [i_0] [(unsigned short)15])))));
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
        var_29 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [(unsigned char)16] [i_0] [14ULL] [i_0])) : (((/* implicit */int) var_4))))), ((-(var_3)))))) ? (((((((/* implicit */_Bool) var_11)) ? (var_6) : (arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)4] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15124))) : (-3148910276370484239LL))))));
        var_30 = ((/* implicit */_Bool) arr_25 [(_Bool)1] [i_0]);
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 1; i_8 < 17; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)2625)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)224)), (13122851327488576387ULL))) : (((max((arr_8 [i_8 - 1] [i_8]), (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_17 [i_8] [i_8] [(unsigned char)20] [i_8])))))))));
        var_31 = ((/* implicit */long long int) max((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((unsigned short) var_6)), (((/* implicit */unsigned short) var_7)))))));
        arr_33 [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (arr_11 [i_8] [i_8 + 1] [21ULL] [i_8]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [(unsigned char)5] [i_8]) : (arr_31 [i_8 + 1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_1))))), ((~(((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8] [i_8])))))))));
    }
}
