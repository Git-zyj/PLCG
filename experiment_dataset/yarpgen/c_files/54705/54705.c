/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((var_6 % var_12), 122)) != var_11));
    var_17 |= ((min(var_2, ((var_4 ? var_10 : var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] [i_0] [6] |= var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] = ((((!(((var_10 ? (arr_8 [i_2] [i_2] [i_0] [i_0]) : (arr_1 [i_0] [8])))))) ? ((((((min(var_2, -18790))) < (arr_6 [i_0 - 3] [i_3] [i_3 + 1] [i_3 + 1]))))) : ((-(arr_7 [i_1] [i_1])))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_3] [1] [i_4] = (!191);
                                var_18 = 7239;
                            }
                            for (int i_5 = 3; i_5 < 18;i_5 += 1)
                            {
                                var_19 += (arr_13 [1] [i_3 + 1] [i_0] [i_0]);
                                var_20 = (((((arr_8 [i_5 - 2] [i_3 + 1] [i_1] [i_0 + 2]) < var_10)) ? (~var_13) : ((-(arr_0 [i_0 - 3])))));
                                var_21 = ((!(~var_12)));
                                var_22 = (arr_1 [i_0 + 1] [i_3 + 1]);
                            }
                            var_23 = var_9;
                        }
                    }
                }
                arr_18 [i_1] [i_1] [i_1] = arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
