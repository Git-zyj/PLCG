/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237817
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
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2 + 2] = ((/* implicit */unsigned char) ((var_10) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1] [5U]))) + (arr_1 [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((arr_8 [(unsigned char)7] [i_1] [9] [(short)9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))))), ((!(((/* implicit */_Bool) (short)-7433))))))))));
                    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [8LL] [(unsigned short)10]))))), (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned short) var_12)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1 - 1] [(short)8] [i_2 - 3] [i_3]))) & (arr_1 [i_0] [i_1 + 1])));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 + 3] [(signed char)6] [i_3] [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_2 - 3]))) : (arr_8 [i_2 - 2] [i_2] [i_2 - 2] [3U])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [0U] [i_2]))) / ((-(arr_7 [i_1] [(signed char)7] [i_1] [i_1 - 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_5 [i_1] [i_2] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 2] [i_1] [i_2] [0ULL] [(_Bool)1])))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_5])) < (((/* implicit */int) var_18)))))));
                            var_25 -= (!(((/* implicit */_Bool) arr_1 [3U] [i_1 - 2])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_0] [i_1] [i_1 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 3])) << (((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) - (42221)))));
                            arr_25 [i_1] [(_Bool)1] = ((/* implicit */signed char) (-(((((/* implicit */int) var_6)) / (((/* implicit */int) arr_15 [i_0] [i_2] [i_4] [i_6]))))));
                            var_26 += ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [(unsigned char)0]) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))));
                            arr_26 [i_1] [i_2] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [(short)10] [i_0] [i_0] [i_0] [i_0 + 2] [i_1 - 2]))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_0 - 1] [3U] [0ULL])) ? (((/* implicit */int) arr_20 [i_0 + 2] [i_0] [i_1 + 2] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_20 [i_0 + 3] [i_1 - 2] [i_1 - 2] [(unsigned short)1] [i_2] [i_4]))))) <= ((-(arr_14 [i_1 + 2] [i_1 + 1] [i_2 - 3] [i_1 + 1] [i_4])))));
                    }
                }
            } 
        } 
    } 
}
