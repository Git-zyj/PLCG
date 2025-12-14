/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35754
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
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (short)16125))))) ? (((unsigned long long int) (unsigned char)255)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 24ULL)) && (((/* implicit */_Bool) 19U)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */int) min((max((((/* implicit */long long int) (unsigned short)33014)), (max((arr_1 [i_0]), (arr_3 [i_0] [i_0]))))), (min((((long long int) arr_1 [i_0])), (((arr_6 [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))))));
                var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 4294967291U)) ? (((((/* implicit */int) (unsigned short)33027)) & (((/* implicit */int) (signed char)49)))) : ((+(((/* implicit */int) (unsigned char)28))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) (unsigned char)226)) ? (var_3) : (((/* implicit */int) var_9)))))), ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) <= (4294967294U))))))));
}
