/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213859
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
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) ((var_3) > (0LL))))) * (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_3))) * (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_16 += ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]);
                        arr_10 [i_3] [i_2] [0U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2 + 3])) >> (((((/* implicit */int) var_8)) - (54900)))));
                        var_17 = ((/* implicit */_Bool) arr_0 [i_0] [i_3]);
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) arr_6 [20LL]);
    }
}
