/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((-2097151 ? (((var_7 ? 6442496233299973941 : var_2))) : -115));
    var_14 = (var_11 & 21507);
    var_15 = ((((-11804 ? var_11 : (((max(0, 117)))))) / 449383382));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (arr_3 [i_0 + 1]);
                                var_17 -= (((arr_14 [1] [1] [i_4 - 2] [i_4 - 2] [i_4 + 1]) & (arr_14 [10] [10] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                            }
                        }
                    }
                    var_18 = (((18014261070528512 - -26510) != var_12));
                }
            }
        }
    }
    var_19 = (~9223301668110598144);
    #pragma endscop
}
