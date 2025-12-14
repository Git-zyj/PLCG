/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_17 = (max(var_17, 1));
                        arr_11 [i_2] = ((-((min(127, (arr_1 [i_2]))))));
                        arr_12 [i_2] [16] [i_2] [16] = ((((((-2147483647 - 1) != -var_12))) >> ((((~(arr_6 [i_0] [i_1] [i_2] [i_1]))) + 40423))));
                    }
                    var_18 = (1 || 120);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((arr_14 [i_0] [i_2] [i_4] [i_5]) ? (-127 - 1) : (arr_14 [i_1] [i_2] [17] [i_5]))))));
                                var_20 = 1;
                            }
                        }
                    }
                    var_21 = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_2])))) != -var_12));
                }
            }
        }
    }
    var_22 -= var_11;

    for (int i_6 = 2; i_6 < 24;i_6 += 1)
    {
        var_23 *= var_3;
        arr_19 [1] [i_6] = (((arr_18 [i_6] [i_6 + 1]) | (arr_18 [i_6] [i_6 + 1])));
    }
    #pragma endscop
}
