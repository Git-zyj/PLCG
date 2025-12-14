/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, 30893));
                            var_20 = min(((((min(469709810, 8099330432311560672))) ? (min(49010, var_17)) : (!196))), 5337183826718032953);
                            arr_10 [i_0 - 1] [i_0] [i_2] [4] = (((~-19890) ? (min((min((arr_1 [i_0]), (arr_4 [i_0] [i_0]))), ((min((arr_4 [i_1 - 4] [i_0]), (arr_8 [i_0] [i_1] [i_0] [i_3] [4] [12])))))) : 51));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = ((-(var_10 >= -15899)));
                                arr_21 [i_0] [i_0] [i_0] [i_5] [i_0] [i_1 - 4] = (min((((var_18 == (((arr_6 [i_6] [i_0] [i_1]) & (arr_11 [i_0] [10])))))), (~30894)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_4, (min(-30909, var_17))));
    #pragma endscop
}
