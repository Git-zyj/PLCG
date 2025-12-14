/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50820
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned int) arr_4 [i_1]);
                        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) && ((!(arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) max((arr_9 [i_0] [(signed char)16] [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                        var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((/* implicit */_Bool) min((var_12), (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_12) : (((/* implicit */int) arr_1 [i_3])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_6 [14ULL] [i_1] [14ULL])))))) : (((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) >> (((((/* implicit */int) min((var_13), (var_1)))) + (31654)))))));
                        arr_11 [i_0] [i_0] [i_1] [(_Bool)1] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_2] [i_0])) == (((/* implicit */int) arr_7 [i_3] [i_2] [i_2] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) var_0);
                        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_3 [3] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0]))))));
                        arr_14 [i_0] = ((/* implicit */int) arr_6 [i_4] [(_Bool)1] [(short)12]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_4] [i_0])) ? (arr_0 [i_1] [i_2]) : (arr_0 [i_0] [i_1])));
                    }
                    var_21 |= ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_0]);
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) + (arr_0 [i_2] [i_2])))) ? ((~(arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2])))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_5);
    var_24 |= ((/* implicit */long long int) ((var_2) | (((/* implicit */int) var_5))));
}
