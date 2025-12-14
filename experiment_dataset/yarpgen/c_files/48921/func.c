/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48921
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
    var_19 = ((/* implicit */_Bool) max((var_14), (((/* implicit */int) min((max(((unsigned short)6065), (((/* implicit */unsigned short) (signed char)71)))), ((unsigned short)6065))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((unsigned short) 1663064394)))));
                var_21 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((572734319U), (((/* implicit */unsigned int) arr_1 [i_1]))))) ? (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [9ULL])), (arr_2 [i_0 - 2]))) : (((/* implicit */unsigned long long int) 1725174305)))), (((/* implicit */unsigned long long int) ((((var_14) != (((/* implicit */int) var_0)))) ? ((-(((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            }
        } 
    } 
    var_22 = (+(((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)74)))));
}
