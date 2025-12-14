/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207654
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
    var_11 ^= ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 += ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_13 -= ((/* implicit */signed char) (short)32751);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                    arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (short)25229)) >= (((/* implicit */int) (unsigned short)40231)))))));
                    arr_7 [i_0] &= ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0]);
                }
            } 
        } 
        var_15 = max((((/* implicit */unsigned int) (~((~(((/* implicit */int) (short)16198))))))), (arr_0 [8LL]));
        var_16 += (((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32732))))));
    }
    var_17 |= ((/* implicit */unsigned short) 1865754819);
}
