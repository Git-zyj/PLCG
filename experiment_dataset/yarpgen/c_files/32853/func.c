/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32853
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1 - 2] [i_1 - 2]))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_2 [(signed char)18] [i_1 - 2] [(signed char)18])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 1] [i_1 + 1])))))))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2942470714506954463ULL)) && (((/* implicit */_Bool) (+(4499201580859392ULL))))));
                }
            } 
        } 
    } 
    var_13 &= ((/* implicit */long long int) ((((unsigned long long int) max((var_0), (((/* implicit */unsigned int) var_3))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40984)))));
}
