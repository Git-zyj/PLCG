/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= -76860670;
    var_20 = (min(var_20, (((((min((((var_9 ? var_14 : var_5))), (min(1, -1130600358544011420))))) ? (!var_0) : (((var_15 + var_1) + (var_10 + -1370685404))))))));
    var_21 = (min(var_21, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (min(232958880, ((((min(var_7, var_13))) ? ((var_13 ? var_2 : var_10)) : (arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_22 = (((var_1 ^ 12523615982224231041) ^ ((((arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 3]) && (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                            var_23 = ((((((arr_5 [i_1] [i_2] [i_3]) ? -var_1 : ((var_3 ? var_15 : (arr_0 [i_0])))))) ? ((((max(var_8, var_1))) ? (((arr_8 [i_0] [3] [i_2] [i_3]) ? var_13 : 16947)) : (min(var_5, var_15)))) : (((((30513 >> (var_17 + 774657545))) <= ((var_12 ? var_0 : (arr_5 [1] [i_1 + 3] [5]))))))));
                        }
                    }
                }
                arr_9 [3] [i_0] = 437286497;
                var_24 = ((~(min((!1126419014), var_0))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_25 = (min(-10672, 237258550));
                                var_26 = ((~((min((arr_6 [i_6] [i_5] [i_1]), var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
