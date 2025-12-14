/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 | ((((var_10 ? var_9 : var_17)) | (((min(65535, var_8))))))));
    var_21 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (!var_14);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [1] [7] [i_1 + 2] [i_1] = (arr_5 [i_0 + 1] [i_1 - 1]);
                                var_22 = ((((max((2 == 2389043938), (max(var_8, (arr_3 [i_0] [17] [i_0])))))) ^ ((((((arr_1 [i_0]) ? -9223372036854775790 : 65535))) ? (arr_0 [i_4 - 1] [2]) : (~-1088967396)))));
                            }
                        }
                    }
                    var_23 = (min(((-(var_15 ^ var_11))), (((arr_14 [i_0] [i_2] [i_2] [i_0]) ? (arr_11 [i_0] [i_0 - 3]) : 2))));
                }
            }
        }
    }
    var_24 = ((9223372036854775790 % (var_17 || var_17)));
    #pragma endscop
}
