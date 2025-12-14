/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246787
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
    var_16 = ((int) var_6);
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -569569924)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (4294967285U))))));
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1] [i_0]))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_4 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = max((max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254))) : (15174880124259361720ULL))), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)196)) ? (8967839166813089684LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))));
                var_19 = ((int) ((long long int) ((unsigned long long int) (unsigned char)196)));
            }
        } 
    } 
}
