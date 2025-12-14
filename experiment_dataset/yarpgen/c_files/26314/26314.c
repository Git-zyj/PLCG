/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = ((((var_0 ? (arr_6 [i_2 - 3] [i_1] [i_0 + 2]) : (arr_6 [i_2 - 1] [i_1] [i_0 - 1]))) + (arr_6 [i_2 - 2] [i_1] [i_0 + 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = -560016734;
                                var_14 = (min(((((var_0 + 2147483647) << (((-1873553039 + 1873553056) - 17))))), ((((min(35, var_2))) ? ((var_0 ? -1873553059 : 851332594)) : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_0])))));
                                var_15 |= (min((((min(var_8, var_1)))), (arr_10 [i_4] [i_3] [i_2 + 1] [i_0] [i_0])));
                                arr_12 [i_1] [i_3] [i_2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] = (arr_2 [i_1]);
                                arr_13 [i_1] [i_1] [i_2] = -32767;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] [i_1] = 7;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] = 12044;
                                arr_21 [i_1] = (arr_19 [5] [5] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_16 = (((arr_16 [i_1] [i_1]) + (((arr_8 [i_0] [i_1] [i_2 + 1] [i_1] [1] [i_2 - 3]) ? 21655 : var_8))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((-(min(1873553053, var_9))))));
    var_18 = ((var_10 >= (~19)));
    #pragma endscop
}
