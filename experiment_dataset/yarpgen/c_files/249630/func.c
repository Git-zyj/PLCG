/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249630
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (short)32765)) >> (((var_8) + (3408044075898265068LL)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) (short)-7506);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_15 ^= (~(((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0 - 1] [i_0 + 1] [i_0]))) ? (((/* implicit */int) max((arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned short) (short)-32762))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 + 1] [i_0])))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */int) arr_10 [15U]);
        var_16 = ((/* implicit */int) (!(var_3)));
    }
}
