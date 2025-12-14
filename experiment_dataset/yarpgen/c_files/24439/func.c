/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24439
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
    var_13 ^= ((/* implicit */long long int) (-(((var_11) ? (((/* implicit */unsigned int) max((1033415315), (((/* implicit */int) var_11))))) : (1647631173U)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_9 [3] [3] [i_2] [(signed char)8] = ((/* implicit */_Bool) ((unsigned short) arr_7 [(_Bool)1] [i_1] [(_Bool)1]));
                    arr_10 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) 2647336136U);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_3);
}
