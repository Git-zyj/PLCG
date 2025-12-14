/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217167
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (var_8))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_15 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(short)3]))));
                    var_16 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_3] [16] [(short)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_0] [i_0])) + (2147483647))) >> (min((((/* implicit */int) var_6)), (var_1)))))) ? ((~(((/* implicit */int) (unsigned char)255)))) : ((~(((/* implicit */int) var_6))))));
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 - 3] [i_3 - 1]))))) ? ((+(((/* implicit */int) arr_3 [i_1 - 3] [i_3 + 2])))) : ((+(var_0)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_18 = ((int) arr_13 [i_1 + 2] [(unsigned char)8]);
                            var_19 = ((/* implicit */unsigned long long int) arr_15 [i_2] [8ULL] [21U] [i_2] [(unsigned short)8] [i_0] [i_2]);
                            var_20 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (arr_9 [i_3 - 1]) : (arr_9 [i_4]))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [19ULL] [19ULL])) ? (((var_1) - (var_10))) : ((~(((/* implicit */int) var_2)))))))));
                        }
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_5 - 1] [i_1 - 3] [i_1 + 2]))))) + (((unsigned int) arr_6 [i_1] [i_1 + 1] [i_5 - 1])))))));
                        var_24 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_2])))) ? (((/* implicit */long long int) ((var_10) - (((/* implicit */int) var_2))))) : (arr_9 [i_0])));
                    }
                    var_25 += ((/* implicit */short) (-(((((var_7) - (((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) arr_3 [(unsigned char)13] [(unsigned char)13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
}
