/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40292
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) != (9223372036854775807LL)))));
                    var_13 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)16] [(unsigned char)16])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)0))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [5ULL] [15U] [15U] [15U]))) >= (9217545268776585064ULL))))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((signed char) var_2));
    var_15 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
}
