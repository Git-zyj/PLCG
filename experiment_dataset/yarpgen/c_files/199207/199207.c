/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_11 ? 1768233275638428458 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((var_4 ? ((((12203782501477618704 ? -1097121223 : 1234075627602051274)))) : var_11));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (-1768233275638428443 > var_1);
                    arr_10 [i_0] [i_0] = (((46152 && (var_12 <= var_4))));
                }
            }
        }
    }
    #pragma endscop
}
