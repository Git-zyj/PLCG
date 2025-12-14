/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38636
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_11 = ((/* implicit */int) ((-1LL) == (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) var_4);
                                var_13 = ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]);
                                var_14 |= ((/* implicit */long long int) ((1820223987) / (((/* implicit */int) (unsigned short)26416))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    arr_15 [2] [10] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (291285871) : (((/* implicit */int) (unsigned short)37402)))) < (((/* implicit */int) ((0LL) <= (((/* implicit */long long int) 6144)))))));
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */short) var_2);
                    arr_17 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned int) arr_7 [i_0] [i_1] [i_5] [i_5])))));
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1])) ? (-1LL) : (((/* implicit */long long int) 0))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_24 [i_1] [i_1] [2LL] [i_1] [2ULL] [5LL] = (-(arr_9 [(short)2] [(unsigned short)16] [9] [i_0] [i_7 + 1] [i_7 + 2]));
                                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [(short)0] [i_0] [i_7 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((arr_19 [i_0] [i_1] [4ULL] [i_9 + 1]) < (((/* implicit */long long int) 648052886)))))));
                        var_20 = ((/* implicit */unsigned char) arr_5 [i_9 + 3] [i_1] [i_9 + 3]);
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        arr_29 [i_10] [i_1] [7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -291285851)) || (((/* implicit */_Bool) (unsigned char)218))));
                        var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_1))));
                        var_22 *= (short)(-32767 - 1);
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14059875233071307523ULL)) ? (arr_19 [i_0] [i_1] [i_6] [i_10]) : (((/* implicit */long long int) var_3)))))));
                    }
                }
                arr_30 [i_1] [i_1] = ((/* implicit */unsigned int) arr_1 [(signed char)14] [(signed char)0]);
                /* LoopNest 3 */
                for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    for (unsigned char i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_37 [i_0] [i_1] [(short)10] [i_12 - 1] [i_12])))) ? (((int) var_8)) : (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 291285863)))))));
                                var_25 += ((/* implicit */_Bool) (short)11047);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) 55637573U);
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((-1LL) + (9223372036854775807LL))) >> (((-11LL) + (27LL))))))));
}
