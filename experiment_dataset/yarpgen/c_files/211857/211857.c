/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(((1 ? 80 : 1)), ((~(arr_0 [i_0])))));
                    var_21 = 80;
                    var_22 = ((~(((((1 ? -105 : 118))) ? ((61609 ? 123 : -118)) : -20493))));
                }
            }
        }
    }
    #pragma endscop
}
