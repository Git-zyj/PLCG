/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((min((arr_0 [i_0 - 1]), var_1))) ? (arr_0 [i_0 - 2]) : (((arr_0 [i_0 - 3]) ? var_4 : (arr_0 [i_0 - 2])))));
                var_12 = (max(7994000393921745746, 35735));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_11 [i_2] = (max((min(((var_5 ? 0 : 2699401927)), (arr_0 [i_0]))), (arr_2 [i_0 - 3])));
                    var_13 = (arr_6 [i_2] [i_0]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_16 [i_0] [i_1] [i_3] [i_3] = ((0 % (arr_5 [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_14 = 2699401938;
                                var_15 = (max(var_15, ((((var_3 ^ var_0) > (~var_2))))));
                                arr_21 [i_3] [i_3] [i_3] [i_4 - 1] [i_5] = (~26609);
                            }
                        }
                    }
                    arr_22 [i_3] = (arr_1 [i_0 + 1]);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_16 += 2699401927;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_7] [i_6] [i_1] [i_1] [i_0 - 2] = (((max(var_10, (arr_14 [i_0 - 2] [i_6] [i_7])))) ? (arr_14 [i_1] [i_1] [i_6]) : (((max((arr_2 [i_0 - 3]), (arr_2 [i_1]))))));
                                arr_30 [i_0 - 1] [i_1] [i_1] [i_6] [i_7] [i_8 + 2] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(1595565369, 3919480489));
    #pragma endscop
}
