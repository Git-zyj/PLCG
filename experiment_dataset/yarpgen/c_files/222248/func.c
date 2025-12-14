/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222248
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    var_21 = ((/* implicit */long long int) var_16);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (-(9223372036854775807LL));
        var_23 = ((/* implicit */int) -9223372036854775807LL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) arr_7 [i_0]);
                    var_24 = ((/* implicit */unsigned short) (signed char)-35);
                }
            } 
        } 
    }
}
