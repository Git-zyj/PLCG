/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196216
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
    var_11 = (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)57387)));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */short) (~((-(((((((/* implicit */int) arr_4 [i_0] [(signed char)12] [17U] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [i_1] [i_0])) + (93)))))))));
                    var_14 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_3 - 3] [i_2] [i_4 - 1]))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_2);
                                var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_2] [i_3 + 4] [i_4 + 4] [i_4]))))) ? (((((/* implicit */_Bool) arr_13 [(unsigned short)16] [i_3 + 2] [i_4 - 3] [i_4])) ? (((/* implicit */int) arr_13 [i_2] [i_3 - 4] [i_4 - 1] [i_4 - 2])) : (((/* implicit */int) arr_13 [i_0] [i_3 - 3] [i_4 - 1] [i_4])))) : (((/* implicit */int) min((arr_13 [i_3 - 2] [i_3 - 4] [i_4 + 1] [i_3 - 4]), (arr_13 [i_0] [i_3 - 2] [i_4 + 2] [i_4 + 1]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_0] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32752)) ? (((/* implicit */int) arr_5 [1U] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [(signed char)6] [i_1])))))) : (arr_3 [0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57387)) || (((/* implicit */_Bool) (unsigned short)57389))))))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
}
