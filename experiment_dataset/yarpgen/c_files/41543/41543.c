/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_7;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 -= var_10;
                        var_13 = ((+(max((arr_3 [i_0 - 1] [i_0]), var_7))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_0] [i_4] [i_0] [i_1] = ((-(arr_1 [i_0] [i_4])));
                            arr_17 [i_0] [i_0 - 1] [i_1] [i_1] [i_2] [i_0] [i_4] = (1674782703 >= -1674782704);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] = (arr_10 [1] [i_1] [i_2] [i_5]);
                            arr_22 [i_0] [i_1] [1] [i_0] [i_5] = (max(var_5, ((~(arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [2] [i_3] [i_0])))));
                            var_14 = ((((((((arr_0 [i_5] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : var_9))))) != 0));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_3] [i_2] [i_3] [0] [i_3] |= (arr_7 [11] [8] [i_0 - 1]);
                            var_15 = var_10;
                        }
                        var_16 = (max(var_16, ((min(var_1, ((-1674782704 ? (arr_13 [i_0] [i_0] [i_0] [2] [i_3]) : var_7)))))));
                        var_17 = ((~(((((-(arr_3 [i_2] [i_0])))) + (min(var_7, (arr_18 [i_0] [9] [i_0] [i_0] [9])))))));
                    }
                    arr_27 [i_0] [i_0] = var_5;
                }
            }
        }
    }
    var_18 = var_2;
    var_19 *= var_8;
    #pragma endscop
}
