/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217692
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1] [i_2])) ? (((long long int) (short)-7384)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_7 [i_1] &= min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) arr_5 [(unsigned short)9] [i_0] [i_0])))))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))), (max((arr_1 [i_2]), (arr_1 [i_1]))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned short)9] [i_2])) != (((/* implicit */int) arr_3 [i_2] [i_2 + 2] [i_2]))))) != (((/* implicit */int) arr_0 [i_0] [(unsigned short)9]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_15);
}
