/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34909
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
    var_12 = ((/* implicit */unsigned short) (short)12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_9;
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (0) : (((/* implicit */int) (unsigned short)8191))))) : (arr_1 [i_0]))))));
        arr_3 [i_0] = (-(-1268046178));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]);
                            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)8215));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            arr_20 [i_1] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)8755))));
                            arr_21 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_10 [i_6 - 1] [i_6 + 1] [i_6 - 1])));
                            var_16 ^= ((/* implicit */short) (!(((var_11) || (((/* implicit */_Bool) arr_5 [i_2]))))));
                            arr_22 [i_1] [i_1] [i_3] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_6 + 1] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1])) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned short)7684))));
                        }
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)8185))));
                            arr_26 [i_1] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */int) var_4);
                        }
                        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            arr_29 [i_1] [i_2] [i_2] [i_3] [i_4] [i_2] = arr_15 [i_1] [i_1] [i_4] [i_8];
                            arr_30 [i_8] [i_4] [i_1] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */short) ((max((arr_15 [i_1] [i_1] [i_4] [i_8]), (arr_15 [i_1] [i_1] [i_1] [i_1]))) - (((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_1]))))));
                            var_18 = ((/* implicit */short) ((((int) (!(((/* implicit */_Bool) 2147483647))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 15457195684349881026ULL)))))));
                            var_19 -= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 16777215)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65526)))), (((/* implicit */int) ((unsigned short) var_3))))) > (((/* implicit */int) ((short) ((short) (unsigned short)8164))))));
                            arr_31 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) >> (((/* implicit */int) (unsigned short)10)))) | (((var_11) ? (615879324) : (((/* implicit */int) var_1))))))) ? (((unsigned int) ((var_9) == (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
                        {
                            arr_34 [i_9] [i_4] [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_2] [i_9 + 3] [i_9 + 2] [i_9] [i_9])) : (((/* implicit */int) var_1)));
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -24)) ? (((/* implicit */int) (unsigned short)7086)) : (((/* implicit */int) arr_18 [i_1] [i_2])))) & (((((/* implicit */_Bool) arr_19 [i_9 - 1] [i_4] [i_3] [i_2] [i_2] [i_1])) ? (536822296) : (arr_16 [i_1])))));
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                        }
                        arr_35 [i_1] [i_1] [i_1] [i_3] [i_1] [i_1] = max((((/* implicit */int) (unsigned short)64302)), (((((-615879324) + (2147483647))) >> (((/* implicit */int) (unsigned short)10)))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_33 [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) var_2);
                        var_24 = var_4;
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned short) (((-(max((((/* implicit */int) (unsigned short)4095)), (-615879324))))) & (((-615879324) / (((/* implicit */int) arr_12 [i_2] [i_2] [i_11 - 1] [i_11 - 1]))))));
                        var_26 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_28 [i_11] [i_1] [i_3] [i_2] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 4; i_12 < 10; i_12 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) -1298773836)) ? (((/* implicit */int) (unsigned short)65532)) : (16777215)));
                        arr_43 [i_1] [i_2] [i_1] [i_3] [i_12] = ((((/* implicit */int) (short)408)) < (((/* implicit */int) (!(((/* implicit */_Bool) -1298773837))))));
                    }
                    arr_44 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((int) var_5)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))) ? (((/* implicit */int) max(((unsigned short)14706), ((unsigned short)19)))) : (((/* implicit */int) (unsigned short)8191))));
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)65510)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_3] [i_3])) ? (615879324) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((unsigned short)8191), ((unsigned short)57338)))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 16777215)))) ? (((var_10) ? (var_7) : (7))) : (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (short)13255)) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? (var_8) : (max((((/* implicit */int) var_11)), (((var_10) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) var_0)))))))))));
    var_30 ^= ((/* implicit */_Bool) var_5);
}
