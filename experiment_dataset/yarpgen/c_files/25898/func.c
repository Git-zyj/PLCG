/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25898
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_6 [i_1] [9ULL] [i_0] = ((/* implicit */long long int) (signed char)13);
            var_16 = ((/* implicit */_Bool) (-(2641476886976873391ULL)));
            var_17 = ((/* implicit */signed char) (((((((_Bool)1) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (short)-1)))) + (2147483647))) >> (((15805267186732678211ULL) - (15805267186732678186ULL)))));
        }
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0] [(unsigned char)14]);
    }
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) var_13))))) ? ((~(var_9))) : (((/* implicit */long long int) var_13)))))));
}
