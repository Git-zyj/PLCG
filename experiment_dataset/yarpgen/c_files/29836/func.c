/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29836
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_13))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_3))));
                var_19 ^= ((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_1]);
                arr_5 [i_0 + 1] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((arr_0 [i_0] [i_1]) > (((/* implicit */unsigned int) 2147483647))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 2] [i_0] [i_3] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_3 [i_0] [i_1])) - (93))))) >= (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) var_10)))))))) < (((/* implicit */int) max((arr_8 [i_3 + 2]), (arr_8 [i_3 + 2]))))));
                            arr_12 [2ULL] = ((/* implicit */unsigned short) ((long long int) arr_2 [i_1 - 1] [i_1 - 1]));
                            var_20 -= ((unsigned char) (_Bool)1);
                            arr_13 [(short)6] [(short)6] [(_Bool)1] [3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_1 + 1]), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_0] [i_3]))) : ((-9223372036854775807LL - 1LL))))))) ? (min(((-(arr_4 [i_3]))), (((/* implicit */long long int) arr_0 [i_3] [10LL])))) : (((/* implicit */long long int) (-2147483647 - 1)))));
                            arr_14 [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((144115188075855871ULL), (18302628885633695745ULL))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [(short)15] [i_0] [(short)15] [i_0 + 1])), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)169)) : (((((/* implicit */int) arr_9 [3ULL] [i_0] [i_0] [i_0 + 1])) & (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 + 1]) % (arr_0 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) var_9)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) : (max((((/* implicit */long long int) var_9)), (var_2)))))))));
            }
        } 
    } 
}
