/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = (((((46346 + (arr_1 [i_0 + 1])))) ? (((arr_1 [i_0 - 2]) - 0)) : ((min(201, (arr_1 [i_0 - 2]))))));
                            var_12 += -49;
                        }
                    }
                }
                arr_11 [i_0] [i_1] [10] = ((max(((223 ? -18389 : -5644333783859599284)), 20487)));

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        var_13 = (((0 || -4506) ? (((((var_10 ? 0 : 1))))) : ((((var_8 ? var_3 : 4294836224)) ^ (~510)))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_14 -= (((arr_4 [i_4] [i_4] [i_4]) ? 227 : (arr_7 [i_5] [i_4] [i_0 - 2])));
                            var_15 = (min(65535, 199));
                            var_16 = ((+(min((arr_19 [i_1] [i_1]), (min(var_9, -730777226447803323))))));
                            var_17 = 48573;
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_1] = 35675;
                            var_18 = 153;
                        }
                    }
                    arr_23 [i_0 + 1] [10] [9] [i_1] = ((!((((arr_0 [i_0 - 2]) >> (-91 + 94))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_30 [i_9 - 1] [i_1] [i_4] [i_1] [i_0] = var_6;
                                arr_31 [0] [i_1] [i_4] [i_1] [5] = 33554431;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(14, 64145));
    #pragma endscop
}
