/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194652
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) ((arr_2 [21ULL]) != (arr_2 [(signed char)22])))))) + (2147483647))) << (((arr_2 [i_0 - 1]) - (1820499145U))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) max((var_18), ((~(arr_2 [i_3 - 1])))));
                        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_1 [i_3]) <= (arr_2 [i_2]))))));
                        arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1]);
                    }
                    for (unsigned char i_4 = 3; i_4 < 19; i_4 += 2) 
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_4] [i_4] [(unsigned char)18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (arr_1 [i_4]) : (((/* implicit */unsigned int) arr_8 [i_2] [i_1] [i_1] [i_1] [i_1] [i_4 + 2]))));
                        arr_14 [i_2] [11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-705605566) + (2147483647))) >> (((((/* implicit */int) (unsigned char)197)) - (170)))))) ? (arr_4 [i_1] [i_4 + 2]) : (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [i_2] [21] [i_2])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_2])) : (((arr_8 [i_2] [i_1] [i_1] [i_1] [i_2] [i_4]) & (arr_4 [i_0] [i_4])))))));
                        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) 3023794673U)) - (arr_11 [i_0 - 2] [(signed char)5] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (arr_8 [i_2] [4] [i_2] [i_2] [i_2] [i_2]))))))) <= (((/* implicit */unsigned long long int) ((int) arr_11 [i_0] [i_1] [i_2] [i_1])))));
                    }
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_5] [i_5] [20] [i_0] |= ((/* implicit */long long int) ((((/* implicit */long long int) (-(((int) arr_15 [i_0] [i_1] [i_2] [i_5] [i_0]))))) != (((((/* implicit */_Bool) (~(arr_8 [i_1] [(unsigned char)4] [20] [i_2] [i_5] [i_6])))) ? ((~(arr_15 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0]))) : (arr_5 [8] [i_0 - 2] [i_0 - 3])))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((arr_4 [i_0] [16ULL]) & (((/* implicit */int) arr_12 [(unsigned char)0] [(unsigned char)0] [i_0 - 3] [14LL] [i_0])))))));
                            arr_21 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 - 4]);
                            arr_22 [i_0] [7] [i_2] [11] = ((/* implicit */int) arr_2 [i_0]);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_0 + 1]))));
                        }
                        var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 + 1])))) ? (((long long int) arr_11 [16U] [i_0 - 3] [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 - 4] [i_1] [i_0 - 4] [22] [i_0 - 4])))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_11 [i_1] [i_2] [i_0] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */long long int) var_4);
}
