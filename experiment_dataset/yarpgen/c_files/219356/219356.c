/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = ((((min((((11745046407337646747 ? var_0 : -1483235924))), 4294967295))) ? ((((var_7 < (~4294967295))))) : (min(var_11, ((((arr_0 [i_0] [i_1]) ? var_14 : -369982352)))))));
                    arr_8 [i_1] = (max(((((var_6 <= var_7) && ((max(4294967287, 4294967270)))))), (((4294967283 - var_15) ? (((arr_3 [i_0]) ? 9223372036854775807 : var_14)) : (!26836)))));
                    arr_9 [i_0] [i_1] [i_2] &= (((4294967270 * (arr_7 [0] [1] [i_2]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_3 + 2] [i_3] = (19 || 4294967270);
                var_17 = (min(var_17, ((min((!-1606175001), (max((1 / var_10), 1733489443595931484)))))));
            }
        }
    }
    #pragma endscop
}
