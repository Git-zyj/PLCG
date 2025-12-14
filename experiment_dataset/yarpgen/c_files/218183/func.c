/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218183
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_7 [(signed char)6] [i_1] [i_2])), (((((/* implicit */_Bool) arr_0 [i_0] [(short)13])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0] [i_0 + 1]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (((/* implicit */int) arr_13 [i_0] [i_3] [(signed char)8] [i_3] [(_Bool)1])) : (((/* implicit */int) arr_4 [i_4 + 2]))));
                            arr_16 [i_1] [i_1 - 1] [i_1] [i_3] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_4 + 2] [i_0 - 1])) && (((/* implicit */_Bool) ((signed char) (short)-32767)))));
                            arr_17 [i_0] [i_1] = ((/* implicit */short) ((long long int) (-(var_4))));
                        }
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            arr_22 [i_5] [4LL] [i_2] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            var_15 &= ((((/* implicit */_Bool) (unsigned short)33954)) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [7LL]))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3] [12LL] [i_3] [i_2] [6] [i_1])) || (((/* implicit */_Bool) 3)))))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((((var_13) ? (((/* implicit */int) arr_9 [11ULL] [i_2] [i_2] [i_0] [i_3])) : (((/* implicit */int) arr_4 [12ULL])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_3)))))));
                    }
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */_Bool) var_0);
    var_17 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) (-(var_12)))) && (((/* implicit */_Bool) 3696178153612706381LL)))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)));
}
