/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = (max((min(-1912051897458550578, (arr_8 [2] [22] [22] [i_3 + 2]))), (arr_8 [i_0] [i_0] [i_2] [i_3 + 2])));
                            arr_10 [18] [i_1] = (((((arr_8 [i_3] [i_3] [i_3] [i_3 + 3]) != (arr_8 [i_2] [i_3] [i_3] [i_3 + 2]))) ? var_4 : (arr_8 [i_1] [i_3] [i_3 + 1] [i_3 - 1])));
                        }
                    }
                }
                arr_11 [i_0] [i_1] [22] = (min((((~(arr_1 [i_0] [i_1])))), -1690443369502169007));
                arr_12 [i_0] = (~var_3);
                arr_13 [i_1] [i_1] [i_1] = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_0]))) ^ (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                var_12 |= -624858216;
            }
        }
    }
    var_13 = (min(var_13, ((min((((-var_3 && ((min(-64, -15608)))))), var_1)))));
    var_14 |= var_3;
    var_15 = (min((max((min(1, var_3)), var_9)), (~7208)));

    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_16 = var_9;
        arr_16 [i_4] = (arr_8 [i_4 - 2] [i_4] [i_4] [i_4 - 2]);
    }
    #pragma endscop
}
