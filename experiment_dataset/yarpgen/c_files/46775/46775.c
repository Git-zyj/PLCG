/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (arr_1 [i_0 - 1]);
                    var_21 ^= (((((arr_5 [i_0] [i_0] [i_2] [i_2]) * 582600738601158822)) >= 233));
                    arr_8 [2] [i_1] [i_2] = (((((7636286237965807105 ? 0 : 194))) ? -116 : ((-1694198858 ? (((var_11 ? 1 : var_18))) : ((1 ? -8010616252402526066 : 12804274063602273399))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {
                    var_22 -= ((+(((arr_6 [i_3] [i_4 + 1] [1] [i_4 - 3]) ? var_14 : 9))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_23 = (min(var_23, (((((0 ? 12804274063602273413 : var_3))) ? var_6 : var_9))));
                        var_24 = 2995745679;
                        var_25 += (arr_10 [i_3]);
                        var_26 |= ((!(arr_16 [i_6] [i_5 - 3] [i_4 - 1] [i_3 - 3])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
