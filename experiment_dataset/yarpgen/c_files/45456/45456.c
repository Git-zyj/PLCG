/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((var_4 ? var_7 : var_5))), ((((max(37, 4294967279))) ? var_5 : 4294967279))));
    var_17 = 948237196;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((~(arr_5 [i_0] [i_0]))));
                var_18 = (((((var_5 ? ((-(arr_4 [i_0]))) : (max(0, var_6))))) ? (~var_0) : (min((!var_9), (~1272783957542307701)))));
            }
        }
    }
    #pragma endscop
}
