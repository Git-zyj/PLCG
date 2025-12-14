/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (max((~1), 8289167233778508279));
                    arr_8 [i_0] [i_1] [0] = (((arr_5 [i_0] [i_0] [i_1] [i_0]) ? (((max(var_12, (max(-15382, (arr_4 [i_0]))))))) : ((1 ? 21294 : (max(var_12, var_5))))));
                    var_14 = (max((arr_6 [i_2] [i_1] [i_0]), (max(2144479631, (~var_8)))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_15 = var_0;
                            var_16 = (max(var_16, (((-(arr_1 [i_0]))))));
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] [i_3] [1] = (((((max((arr_0 [i_0]), 1))) ? (arr_12 [i_4] [i_3] [i_2] [i_0] [i_0]) : (arr_11 [i_4] [i_3 + 2] [i_1] [i_1] [i_1] [i_0]))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_17 = ((((((max(var_1, 0)) ? ((((arr_1 [14]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]) : 1))) : (max(var_2, 2251799679467520))))) ? (((arr_3 [i_0] [i_2] [i_3]) ? (max((arr_2 [i_0]), (arr_14 [i_0] [i_1] [i_0] [i_0] [i_5]))) : var_3)) : (arr_2 [i_3])));
                            arr_17 [i_0] [i_0] [i_0] [i_3 + 1] [i_0] |= (max(((max(((max((arr_4 [i_5]), (arr_3 [i_0] [i_0] [i_5])))), (arr_5 [i_0] [i_0] [i_0] [i_0])))), (max(var_13, var_3))));
                        }
                        var_18 = 1;
                        arr_18 [i_0] |= var_5;
                    }
                }
            }
        }
    }
    var_19 += var_4;
    #pragma endscop
}
