/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200509
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
    var_15 &= ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [0] [i_1] [5] [0ULL] = ((/* implicit */_Bool) arr_6 [i_0]);
                        var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_4 [i_0] [i_0]))))));
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) 1119406127U)) : (arr_4 [i_0] [i_0]))))))));
                    arr_14 [i_0] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_4)))))) | (min((arr_8 [i_0] [(unsigned char)3] [(unsigned char)3] [i_1] [i_2] [i_2]), (((/* implicit */unsigned long long int) 341228875)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 3]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_7)) > (((((/* implicit */_Bool) 268431360)) ? (min((5988090416345923778LL), (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3175561159U)))))))))))));
}
