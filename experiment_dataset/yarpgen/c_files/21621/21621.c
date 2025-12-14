/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 ? var_3 : (~var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((9223372036854775800 ? -5906890873353357056 : 984280123))))));
                                var_15 = (((((arr_3 [i_1 - 1]) ? var_10 : var_5)) / (var_4 - 5906890873353357055)));
                            }
                        }
                    }
                    arr_13 [17] [i_1] = (((arr_2 [10]) ? (((((43999 - (arr_4 [13] [14])))) ^ var_8)) : 57384));
                }
            }
        }
    }
    var_16 = var_9;
    var_17 = (((((var_6 ? 3188563804346866493 : (~var_3)))) ? 76 : ((~((var_12 ? var_6 : -25207))))));
    var_18 = -var_10;
    #pragma endscop
}
