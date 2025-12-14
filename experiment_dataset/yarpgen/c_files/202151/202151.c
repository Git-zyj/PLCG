/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (~10692640328634609211);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 += max((((arr_3 [13] [i_0]) ? (min((arr_2 [i_0] [i_1]), var_2)) : -70)), -27776);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = ((((((((27776 ? 4294967295 : (arr_2 [i_0] [i_0])))) ? ((4276638997 >> (37760 - 37760))) : 37759))) ? ((min(var_2, 521018099))) : (min(27777, (7754103745074942405 - 268427264)))));
                                arr_13 [i_0] [i_1] [i_2] [20] [i_4] = var_10;
                                var_14 = ((-(min(-3938086130159185304, -1))));
                            }
                        }
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_2] &= ((((7265774729418217256 ? (max(var_2, var_9)) : (arr_6 [0] [i_1] [i_1]))) ^ ((min(0, 27776)))));
                    var_15 = (min((max((((37748 == (arr_12 [i_2] [i_0] [i_1] [i_0] [15])))), ((1954791160 ? var_10 : -4652622002867348602)))), ((min((-1 || 1100467592), 8)))));
                }
            }
        }
    }
    #pragma endscop
}
