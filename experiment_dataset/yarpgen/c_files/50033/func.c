/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50033
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_9))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)28031))))));
                    arr_8 [i_2] [9ULL] [i_2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [8U])))))) && ((!(((/* implicit */_Bool) var_1))))))));
                }
            } 
        } 
    } 
}
