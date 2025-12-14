/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(56223091, 0));
    var_11 = var_0;
    var_12 = var_6;
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_14 = ((var_4 ? 51 : ((23919 ? 4813 : 32767))));
                        var_15 = var_0;
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_16 = (arr_3 [i_0 - 1] [i_0 - 1] [i_0]);
                        var_17 = (min((arr_9 [i_4] [19] [19] [i_2] [i_1] [i_0]), (((((var_1 + 2147483647) << var_6)) | (1 - 0)))));
                        var_18 = var_6;
                    }
                    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_19 = ((!((min((arr_9 [i_0 + 1] [i_1] [i_5 - 1] [i_1] [i_5 - 2] [1]), (arr_9 [i_0 + 2] [i_0 + 2] [i_5 + 1] [i_2] [i_2] [i_0 - 2]))))));
                        var_20 += (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]);
                        arr_17 [i_0] = (min((arr_1 [i_0 + 2]), ((((((arr_6 [i_1] [i_2] [i_5]) != var_3))) & (arr_4 [i_0 - 2] [i_0])))));
                    }
                    var_21 = (min(var_2, (min(((5236711522155759555 | (arr_5 [i_2] [i_0] [i_0]))), ((min(var_4, 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
