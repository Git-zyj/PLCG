/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = max(((-((-(arr_5 [i_0] [i_0] [i_0]))))), var_4);
                        var_21 = -13;
                        arr_11 [i_0] [i_0] [i_0] [5] = 13;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = (min(var_22, ((7428179642678117888 ? (!1) : (~51452)))));
                            var_23 = (min(var_23, ((min(1510641600, -2114389237)))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] |= ((~(~7428179642678117875)));
                            arr_18 [i_0] [0] [i_0] [i_5] [i_0] = arr_0 [4];
                            var_24 = arr_9 [i_0] [i_2] [1] [i_5 - 1];
                            var_25 = ((4398038122496 ? var_18 : (!var_9)));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_26 -= var_16;
                            var_27 ^= (max((arr_0 [i_1]), (((arr_4 [i_2] [i_2]) ? var_13 : (arr_4 [i_3] [i_1])))));
                            arr_22 [i_6] [i_6] [i_6] [i_0] = (((min((arr_7 [i_0]), ((max(var_14, var_16))))) >> (arr_8 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [2])));
                            arr_23 [i_6] [9] [i_2] [9] [i_6] = var_16;
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = 7428179642678117875;
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_28 = (max(var_28, var_9));
        arr_28 [i_7] = (arr_26 [i_7 - 2]);
    }
    #pragma endscop
}
