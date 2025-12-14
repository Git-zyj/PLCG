/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_6);
    var_13 &= ((-(((max(var_11, var_0)) ? (var_7 >= var_2) : (-2147483647 - 1)))));
    var_14 = (~((~(max(var_8, -546505435)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (!(((~(max(1001431630, -1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [0] [2] [i_4] [i_4] [i_0] [i_0] = max((((((~(arr_11 [i_0] [i_1] [i_2])))) ? (((arr_4 [i_3]) >> (var_1 - 1723360072))) : -1)), ((-(((arr_2 [i_0] [5]) + (arr_12 [i_0] [i_0] [i_0] [i_3]))))));
                                arr_16 [i_0] [i_0] [i_0] [1] [1] = min((max((var_1 <= var_7), 0)), (1 <= 1));
                                arr_17 [i_0] [i_1] [i_1] [i_0] [i_1] = (max((arr_4 [i_0]), 1));
                                arr_18 [i_0] [11] [1] = ((((((arr_7 [i_0] [i_0]) + (arr_7 [i_1] [i_4])))) ? var_11 : 0));
                            }
                        }
                    }
                    var_15 *= 858892712;
                    arr_19 [i_0] [1] [1] = 1187498164;
                }
            }
        }
    }
    var_16 = var_9;
    #pragma endscop
}
