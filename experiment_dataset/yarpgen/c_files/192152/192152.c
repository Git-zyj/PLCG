/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_4;
    var_17 = 32311;
    var_18 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((10762 >= (max((max(-1424665324, (arr_2 [i_0]))), (max(var_0, 2046765108))))));
                arr_5 [i_0] [i_1] [i_1] = ((((((min((arr_3 [i_0] [i_0] [13]), var_10))) ? var_4 : (((!(arr_4 [i_1 + 1]))))))) ? ((~(((arr_1 [3] [i_1]) + 54779)))) : (((236 != ((var_12 ? var_11 : var_5))))));
                arr_6 [i_0] [i_0] [12] = -32307;
            }
        }
    }
    #pragma endscop
}
