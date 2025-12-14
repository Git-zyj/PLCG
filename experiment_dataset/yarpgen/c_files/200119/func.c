/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200119
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 117807105511580440ULL)) ? (117807105511580446ULL) : (18328936968197971170ULL)))) ? (((((/* implicit */_Bool) (-(arr_4 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : ((-(18328936968197971200ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)48686), (((/* implicit */unsigned short) arr_0 [i_1]))))))))));
                    var_21 = (~(min((18328936968197971175ULL), (((/* implicit */unsigned long long int) ((unsigned short) 818325746U))))));
                    var_22 ^= ((/* implicit */unsigned int) arr_7 [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_4)), (((unsigned short) var_0))));
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_14))));
    var_25 = ((/* implicit */unsigned long long int) var_4);
}
