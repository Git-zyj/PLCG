/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244663
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 += ((unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [16] [i_0] [16] [i_2])) ? (((/* implicit */int) (short)2032)) : (16777216))), (max((((/* implicit */int) arr_9 [i_0] [i_0] [i_3 + 1])), (0)))))))))));
                        var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -16777212)) ? (((/* implicit */int) (short)28103)) : (((/* implicit */int) (short)28077))))));
                    }
                } 
            } 
        } 
    }
    var_21 = var_2;
}
