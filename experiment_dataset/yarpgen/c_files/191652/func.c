/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191652
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_14);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned short) (-((~(arr_8 [i_3 - 2] [i_0] [i_1] [i_0])))));
                        var_17 += ((/* implicit */unsigned short) ((signed char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_10)))));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_14))));
}
