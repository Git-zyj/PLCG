/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54067
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
    var_17 = ((/* implicit */unsigned short) (signed char)126);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)161))));
    var_19 = ((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (max((((/* implicit */unsigned short) (signed char)126)), (var_3)))))) | (max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] [i_0] [(unsigned short)10] [i_2] = ((/* implicit */unsigned char) ((max((-6538665604056540294LL), (((/* implicit */long long int) (_Bool)1)))) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) var_10)) % (max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_6 [i_0 + 1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) 3079623730U)) : (var_6)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) var_10)))) : (arr_12 [i_3]))) : (((/* implicit */int) max((arr_4 [i_0 - 1]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3]))));
                    }
                    var_21 = ((/* implicit */short) arr_0 [i_0]);
                }
                var_22 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (arr_12 [i_1])))))))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((int) var_15))));
}
