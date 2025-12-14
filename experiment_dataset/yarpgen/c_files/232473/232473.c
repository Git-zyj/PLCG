/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (max(((((arr_7 [i_0 - 1] [i_1] [1]) << ((((32767 ? 32767 : 2598331945)) - 32758))))), (max((arr_0 [i_0 + 1] [i_0 + 1]), var_6))));
                    arr_9 [i_0] [0] [i_2] = var_3;
                    arr_10 [i_0] [i_1] [i_1] [12] = ((-1696635349 ? ((((max((-32767 - 1), 3807413079))) ? (arr_6 [i_1] [i_0 - 1]) : (!32767))) : ((((((32747 ? (arr_6 [i_1] [1]) : 1)) >= (((arr_2 [i_0]) ? (arr_6 [i_0] [i_1]) : 31105))))))));
                }
            }
        }
    }
    var_13 = ((((max(1, ((1 ? -32748 : 622218377))))) ? var_4 : ((((1 >= var_1) / ((var_11 ? var_9 : var_3)))))));
    var_14 = var_10;
    #pragma endscop
}
