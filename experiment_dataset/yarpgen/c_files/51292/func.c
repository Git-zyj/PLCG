/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51292
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            arr_12 [(signed char)10] [0LL] [i_2] [0LL] [i_4] = ((/* implicit */signed char) ((int) arr_11 [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_2 - 3] [i_2 - 2] [i_1 + 3]));
                            arr_13 [(short)10] [(short)10] [i_2 - 2] [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))))) ? (((/* implicit */int) ((arr_5 [i_2] [i_3] [i_4]) > (((/* implicit */int) arr_0 [i_2]))))) : ((~(arr_4 [i_0] [i_0] [i_3])))));
                            var_15 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1 + 2] [i_2]);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_16 *= ((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)10] [i_2]);
                            arr_16 [i_1] |= ((/* implicit */long long int) ((int) (short)32764));
                        }
                        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            arr_19 [i_0] [11] [(signed char)8] [i_1] [i_2] [(unsigned char)8] [i_6] = ((int) (-(min((arr_15 [i_0] [i_1] [i_2 - 2] [i_3] [(_Bool)1] [(unsigned char)9]), (((/* implicit */int) arr_17 [i_2]))))));
                            var_17 ^= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_3] [i_2] [(_Bool)1] [(_Bool)1]))));
                            arr_20 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_2 [i_6]), (arr_7 [i_6])))) ? (((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_2 [11LL])))) : (arr_4 [(short)12] [i_1] [i_1]))) & ((~(((/* implicit */int) (_Bool)1))))));
                            var_18 -= ((/* implicit */short) ((int) arr_2 [i_6]));
                            var_19 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) min((arr_4 [i_0] [(unsigned short)8] [(short)0]), (((/* implicit */int) arr_17 [i_0]))))) ? (((/* implicit */int) arr_18 [i_1 + 4] [i_1] [i_1] [i_1 + 4] [i_1 + 3] [i_1])) : (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) arr_2 [i_0])))))));
                        }
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) arr_11 [i_2] [i_2] [i_1] [i_0] [i_1] [i_2]));
                    }
                }
            } 
        } 
    } 
}
