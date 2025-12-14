/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((((1 ? -32668 : -1203391601))) ? var_7 : (~-1203391605))), (((~(max(276984707, -33555315)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (((var_3 / (-1203391601 / 5631))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] = ((1 ? (((arr_9 [i_2] [i_2 - 2] [i_0 + 3] [i_0 - 1] [3]) ? (arr_10 [i_2 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) : ((59895 ? 13880930937802124768 : var_12)))) : (((13880930937802124786 + (arr_3 [i_0 + 2]))))));
                            arr_12 [8] [i_2] [i_2] [i_0] [i_0] [i_0] = (!46);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_15 = (max(var_9, (arr_17 [i_5 + 1] [i_1] [i_5 + 1] [i_0 - 1] [i_4 - 3] [i_6])));
                                arr_23 [i_0] = ((((min(9623296578716761805, -290091318))) ? var_0 : (arr_17 [i_6] [i_6] [6] [i_4] [i_1] [0])));
                                arr_24 [i_5 + 1] [i_0] [i_0] = (max((((arr_17 [i_0 - 1] [i_0 - 1] [i_4 - 3] [i_5] [i_5 - 1] [i_4 - 3]) ? (arr_17 [i_0 + 2] [i_0 + 1] [i_4 - 3] [i_4] [i_5 + 1] [i_4]) : 1842628489)), (((2919631398418537711 && (arr_17 [i_0 - 1] [i_0 + 3] [i_4 - 2] [1] [i_5 - 1] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
