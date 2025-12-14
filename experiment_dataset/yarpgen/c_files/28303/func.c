/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28303
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) (~(max((arr_3 [i_1 - 2]), (((/* implicit */long long int) arr_2 [i_1 - 1] [i_0 + 3]))))));
                    var_12 = ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_4 [i_1] [i_2])))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_0])))))));
                }
            } 
        } 
        var_13 ^= arr_1 [2U];
    }
    var_14 = ((/* implicit */unsigned int) var_0);
}
