/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = var_9;
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_12 = ((2147483647 - (((arr_6 [i_1] [i_1 + 1]) ? (arr_5 [i_1]) : (arr_6 [i_1] [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_1] = (max(var_7, ((var_7 - (9840 / -1102292299)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_13 = (min(5305522570056938234, (min(578270585, (arr_8 [i_1] [i_1] [i_3])))));
                                arr_20 [12] [i_2 + 1] [i_3] [i_4] [i_3] [12] |= var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_1] = min(512, ((var_6 ? (arr_4 [i_1 + 2]) : (arr_4 [i_1 + 1]))));
        arr_22 [i_1] = ((((var_4 * (arr_4 [i_1 - 1]))) + (((arr_11 [i_1 + 2] [i_1] [i_1 + 1]) / (arr_4 [i_1 + 2])))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_14 = (min(var_14, var_2));
        arr_25 [i_6] = ((+((min((arr_0 [i_6]), (arr_0 [i_6]))))));
        arr_26 [i_6] = -1645633822;
    }
    #pragma endscop
}
