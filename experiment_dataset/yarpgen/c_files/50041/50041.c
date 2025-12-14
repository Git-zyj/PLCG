/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 += ((~(((((((arr_1 [i_2]) ? (arr_3 [i_0]) : var_12))) && var_2)))));
                    arr_6 [i_0 - 2] [i_1] = ((var_6 ? var_4 : (((arr_0 [i_0]) ? (39 - 880909980) : (arr_0 [i_0 + 1])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] |= (arr_0 [i_0 - 2]);
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2])))) <= ((var_13 << (((arr_1 [i_0 + 1]) - 22))))));
                        var_19 = ((((47207 << (((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 2]) - 19459)))) < (((arr_8 [i_0 + 1] [i_0]) ? (arr_8 [i_0 - 1] [i_1]) : (arr_9 [i_0] [i_0 + 1] [i_1] [i_3] [i_3] [i_3])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_15 [i_0] [i_4] [i_0] [i_0] = ((-(((arr_0 [i_0 + 1]) ? (arr_4 [i_0] [i_2] [i_4]) : (arr_7 [i_1] [i_2] [i_4])))));
                        arr_16 [i_4] [i_1] [i_2] [i_4] = (arr_4 [i_0] [i_0] [i_0 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
