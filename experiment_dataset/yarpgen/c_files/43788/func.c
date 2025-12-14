/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43788
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((int) (short)11696))));
                    arr_8 [i_0] [i_0] &= ((/* implicit */int) ((long long int) ((arr_4 [(signed char)5] [i_2 - 2] [i_2] [i_2 - 1]) >> (((arr_5 [i_0] [i_2 - 1] [i_2 - 3]) + (198445821))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((((/* implicit */unsigned long long int) min(((~(939524096U))), (((/* implicit */unsigned int) ((11403246394821277503ULL) == (((/* implicit */unsigned long long int) var_8)))))))), (((((/* implicit */_Bool) (short)-10411)) ? (16ULL) : (((/* implicit */unsigned long long int) 2147483647)))))))));
}
