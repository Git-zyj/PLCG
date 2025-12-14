/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234374
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */long long int) var_2)) / (((var_16) + (((/* implicit */long long int) var_17)))))) : (((/* implicit */long long int) (-(2431637335U))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 = max(((unsigned char)15), (max(((unsigned char)44), ((unsigned char)15))));
                arr_7 [(signed char)0] [i_1] [i_0] = ((/* implicit */_Bool) var_18);
                arr_8 [i_1] [i_1 + 1] [i_0 - 1] = ((/* implicit */_Bool) arr_2 [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 268435455LL)) && (((/* implicit */_Bool) (short)16383))));
}
