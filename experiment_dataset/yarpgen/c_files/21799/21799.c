/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = 8212;
    var_13 = (max((var_1 * -0), (((!var_1) ? (min(var_10, var_7)) : var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((((+(((-127 - 1) ? var_2 : 0)))) + -1));
                    arr_8 [i_0] [i_1] [i_2] = (((var_0 * (!var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = (arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] [i_1]);
                                arr_15 [i_0] = ((((min((min(56779, 0)), (arr_0 [i_0])))) ? (~var_1) : (((((-(arr_10 [i_0] [i_3])))) ? var_8 : (arr_4 [i_0] [i_0] [i_0])))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((min(var_6, var_2)))) & (((var_4 != (((arr_10 [i_0] [i_4]) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_1]) : var_0)))))));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] = ((var_7 ? (((65535 != ((1646504080 ? -13917 : 32757))))) : (((max(-48, var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
