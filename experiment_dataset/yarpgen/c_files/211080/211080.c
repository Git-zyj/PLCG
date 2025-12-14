/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 += ((((((var_1 ? var_8 : (arr_1 [i_1]))) - -32260242)) != ((((var_7 ? (arr_5 [i_0] [i_1] [i_2] [i_1]) : (arr_6 [i_0] [i_0] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = 1;
                                var_13 = ((1 ? (((max(var_1, var_5)))) : ((((1 / (arr_8 [i_0] [i_0] [i_1] [i_3] [i_0]))) ^ ((-7 ? var_10 : var_8))))));
                            }
                        }
                    }
                    var_14 = ((164904640634383313 ? (max(52550, (((arr_12 [i_2] [i_2] [i_2] [i_2]) ? var_6 : 5710077365129520934)))) : (arr_14 [i_0] [i_1] [i_2] [i_1] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
