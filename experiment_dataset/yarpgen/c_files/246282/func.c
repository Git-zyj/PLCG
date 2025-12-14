/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246282
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
    var_12 = ((/* implicit */short) max((((/* implicit */unsigned int) var_3)), (4254711841U)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0] [(signed char)12]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [i_0] |= ((/* implicit */short) (+(arr_8 [16U] [i_2] [i_3 + 2] [(_Bool)1] [i_3 + 4] [i_3])));
                        arr_12 [i_3] [8U] [i_0] [i_2] = ((/* implicit */unsigned short) var_8);
                        var_14 = (+(min((0U), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) >> (((/* implicit */int) arr_7 [i_2] [(signed char)10] [i_1] [i_2]))))))));
                        var_15 ^= ((/* implicit */signed char) ((((-2758207533630504233LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        arr_13 [i_0] [i_1] [i_1] [i_2] [0] [i_3 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_1 [i_4] [(short)4]))));
                        var_17 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_2] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))));
                        arr_18 [i_2] [(short)12] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2] [i_4] [i_1] [i_1] [i_1] [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) /* same iter space */
                        {
                            arr_21 [2LL] [i_2] [7U] [i_1] [i_1] [i_2] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_8 [3LL] [5ULL] [(_Bool)1] [i_2] [15] [i_0])))) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_4])))));
                            var_18 = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [0LL] [i_2] [(_Bool)1] [15LL])) && (((/* implicit */_Bool) 5738530270347732377ULL))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_4] [i_4] = ((((/* implicit */_Bool) arr_22 [i_2] [i_2])) ? (((/* implicit */int) arr_22 [i_2] [i_4])) : (((/* implicit */int) arr_22 [i_2] [i_2])));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [16] &= ((/* implicit */unsigned int) arr_1 [i_6] [i_0]);
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (arr_23 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_4] [i_0] [i_4]))) : (arr_14 [(signed char)13] [(signed char)13] [(short)13] [(_Bool)1] [12ULL] [(signed char)13])));
                            arr_26 [i_0] [i_2] [i_2] = ((/* implicit */short) var_10);
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_1] [i_1] [9]))) * (arr_23 [i_4])));
                    }
                    var_21 = ((/* implicit */_Bool) arr_1 [i_2] [i_0]);
                    arr_27 [i_2] [i_1] [i_2] = ((/* implicit */int) arr_23 [i_1]);
                    var_22 ^= ((/* implicit */int) ((long long int) arr_2 [i_2]));
                    var_23 = ((/* implicit */int) 96890067U);
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37673)) ? (((/* implicit */int) (short)-6659)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_20 [(short)6] [8LL] [(unsigned short)4] [4LL] [i_0] [(signed char)14])))))));
    }
    for (short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)12)) ? (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-1))))))));
        arr_32 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((((((/* implicit */unsigned long long int) arr_23 [i_7])) & (6315832959722575497ULL))) >> (((var_11) ? (((/* implicit */int) arr_2 [i_7])) : (((/* implicit */int) arr_17 [i_7] [i_7] [i_7])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((signed char) (short)-1)))))))));
    }
    var_25 |= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3))))));
}
