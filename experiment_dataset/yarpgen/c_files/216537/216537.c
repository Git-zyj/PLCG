/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_13 *= ((-var_8 ? (max((max(0, var_5)), (arr_1 [i_0]))) : (49 - var_4)));
        var_14 = (max(var_14, (((((min(var_6, (max((arr_0 [i_0] [i_0]), var_4))))) ? (arr_1 [i_0]) : (((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_4] [i_3] = (((((2147475456 & (((2147475453 ? 255 : 49)))))) ? (min((arr_5 [i_1] [i_2] [i_2]), ((max((arr_5 [i_1] [i_1] [i_3]), var_10))))) : (((((arr_1 [i_1]) ? var_6 : (arr_5 [i_1] [i_1] [i_1])))))));
                        arr_12 [i_1] [i_1] [i_1] = (min(0, 47279));
                        var_15 = var_5;
                        var_16 = (((arr_10 [i_3]) ? ((((2147483647 ? (arr_7 [i_2] [i_2]) : 41994)) - (!var_5))) : (((4398012956672 ? 0 : 128)))));
                    }
                    var_17 = (((((max(26867, (arr_4 [i_1] [i_1] [i_1])))) != (~var_4))));
                }
            }
        }
        var_18 = ((-(((arr_4 [i_1] [i_1] [i_1]) / 26867))));
    }
    #pragma endscop
}
