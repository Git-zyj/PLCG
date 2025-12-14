/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49083
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1821394965U)))))))), ((~(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (3530051901U) : (arr_0 [(unsigned short)0])))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32428)) ? (var_8) : (1ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_2]))) : (max((((/* implicit */long long int) (short)19189)), (3634317366851825152LL))))) / (((((var_3) + (9223372036854775807LL))) << (((3123501168U) - (3123501168U))))))))));
                }
            } 
        } 
    } 
    var_13 |= ((/* implicit */long long int) ((unsigned char) 841296128U));
}
