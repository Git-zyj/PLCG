/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_10 * var_12);
    var_14 = -6976811836069946002;
    var_15 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = (((((((((arr_7 [1] [i_0] [2] [i_0]) ? var_2 : (arr_6 [1])))) ? (arr_6 [i_0]) : (arr_7 [i_0] [4] [i_2] [i_3])))) == (max(((min(var_4, var_10))), 3466841747))));
                                arr_14 [1] [i_0] = (((var_12 > 1) ? (arr_7 [i_4] [i_3] [i_0] [i_0]) : -1));
                            }
                        }
                    }
                }
                var_16 = ((((max((min(var_12, var_6)), ((min(1, var_10)))))) / (min((max((arr_11 [5] [i_0]), 3466841755)), (max(828125541, (arr_8 [1] [1] [i_1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
