/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235546
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (0LL))) ? (5LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))) > (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                    arr_8 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0 - 2] [i_1] [i_1]), (arr_4 [i_0 + 1] [i_1] [i_0])))) ? (((((((/* implicit */_Bool) -5LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11885))) : (14208588842247899303ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 2]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -10LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_1] [(unsigned char)8])))))))));
                    var_18 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (~(var_4)));
}
