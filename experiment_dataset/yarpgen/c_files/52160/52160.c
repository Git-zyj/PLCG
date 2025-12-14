/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (!((!((max(1162791660109190861, 727770761408037699))))));
                                var_21 = (arr_7 [i_0] [i_0] [i_0] [6]);
                            }
                        }
                    }
                    var_22 = (((-(max(var_17, var_7)))) + 727770761408037675);

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_23 &= ((17903088652194848897 ? ((((max(7966434937471743342, var_14))))) : var_8));
                        var_24 = var_4;
                    }
                }
            }
        }
    }
    var_25 = var_7;
    var_26 += var_13;
    #pragma endscop
}
