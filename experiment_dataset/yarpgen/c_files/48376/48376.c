/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            var_13 |= var_7;
                            arr_11 [i_0] [i_0] [i_2] [1] [i_3] [0] = (((-2147483647 - 1) <= 5517586863426806382));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_14 = ((~(arr_1 [i_5])));
                            arr_14 [i_5] [9] [1] [3] = (!2147483645);
                            arr_15 [6] [8] [i_2] [i_2] [i_2] = 18446744073709551615;
                            arr_16 [i_5] [i_3] [i_2] [1] [i_0] = (((var_3 << (((arr_9 [i_0] [0] [i_0] [i_0] [4]) + 1116794820)))));
                        }
                        arr_17 [4] [i_1] [1] [i_3 - 1] = (!1);
                        var_15 = ((!(-64 || -1)));
                        var_16 = var_8;
                    }
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_17 = var_11;
                        var_18 -= -611044242;
                    }
                    var_19 |= (!var_4);
                }
            }
        }
    }
    var_20 -= var_8;
    var_21 = (max(var_21, var_1));
    #pragma endscop
}
