/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52734
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
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */short) ((((/* implicit */long long int) (-(1266116388U)))) <= (max((((/* implicit */long long int) arr_14 [i_3] [i_3])), (min((var_5), (((/* implicit */long long int) arr_6 [i_0] [i_0]))))))));
                        var_12 *= max((((/* implicit */long long int) (_Bool)1)), ((~(3896777190805623213LL))));
                    }
                } 
            } 
        } 
        arr_15 [16LL] = ((/* implicit */unsigned int) (((-((+(arr_10 [i_0] [i_0] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    var_13 = ((/* implicit */long long int) var_4);
}
