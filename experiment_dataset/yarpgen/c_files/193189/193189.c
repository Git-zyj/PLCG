/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -19;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))) ? (((min(-19, (arr_1 [i_2 - 1]))))) : (((arr_1 [i_2 - 1]) ? 25 : var_2))));
                    var_15 = (min(0, 0));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = (((max(4294967295, -1353010468))));
        var_16 &= (max((((((min((arr_4 [i_3]), -17838))) ? var_8 : 5))), ((-(min((arr_7 [7] [i_3] [i_3] [i_3]), -12771))))));
        var_17 *= (min(((min((arr_2 [i_3] [i_3]), 4092692242))), 15));
    }
    var_18 = (!var_10);
    #pragma endscop
}
