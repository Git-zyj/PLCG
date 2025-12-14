/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24971
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)62237))));
    var_20 = max(((~(((((/* implicit */_Bool) (short)32511)) ? (var_13) : (((/* implicit */unsigned long long int) 9210594113681550091LL)))))), (((/* implicit */unsigned long long int) var_11)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1] [i_1 - 1])))))) : (max((((/* implicit */long long int) ((unsigned char) 683683522U))), (9210594113681550091LL)))));
                arr_6 [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) (short)1970);
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((unsigned short) (((~(((/* implicit */int) var_2)))) != (((/* implicit */int) var_11)))));
    var_22 ^= ((/* implicit */unsigned int) var_13);
}
