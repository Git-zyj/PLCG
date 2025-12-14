/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228724
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 17179869183ULL))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) : (var_5))), (((/* implicit */unsigned long long int) ((_Bool) var_2)))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [(signed char)9])) ? (arr_5 [(unsigned short)13] [(unsigned short)13]) : (arr_5 [i_1 - 1] [i_2])))) || (((/* implicit */_Bool) (~(var_5))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142)))));
}
