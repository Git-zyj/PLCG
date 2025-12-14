/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201940
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) == (var_16)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned int) var_2);
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)8)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_21 = ((/* implicit */unsigned long long int) (unsigned char)4);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4 + 2])) >> (((/* implicit */int) arr_9 [i_4 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_4 - 1])) >= (((/* implicit */int) arr_9 [i_4 + 2])))))) : (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (997764189U)))));
                    arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4089453116U)) ? (arr_10 [i_2] [i_4 - 1]) : (((/* implicit */unsigned long long int) var_18)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_16))))) | (((/* implicit */int) var_8))));
}
