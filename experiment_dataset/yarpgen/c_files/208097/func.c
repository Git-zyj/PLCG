/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208097
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))));
    var_12 |= ((/* implicit */int) var_3);
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_14 = var_7;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_10 [13LL] [6LL] [17ULL] [(unsigned short)0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)1] [(signed char)6] [i_0]);
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [12LL] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((arr_3 [i_2 - 1] [i_1] [i_2 - 1]) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [13LL]))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_2 - 1] [i_3]))) : (arr_7 [i_2 + 1] [i_2 - 1] [i_3] [i_3]))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_0 [i_1] [i_0]))));
                arr_11 [i_1] [(unsigned short)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [0ULL]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [20])))));
            }
        } 
    } 
}
