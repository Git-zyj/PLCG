/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = var_2;
    var_16 = 199;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_17 = (min(var_17, ((((arr_1 [14]) && (((((var_10 <= (arr_4 [14]))) ? (arr_0 [6]) : ((min(14, var_1)))))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [i_0] = var_1;
                        var_18 *= (((((min(-9063889983951400355, var_10)) ^ (((((arr_1 [1]) < (arr_5 [i_0] [0] [i_2]))))))) > (((((((arr_8 [10] [14] [i_1] [10] [i_2] [i_3]) ^ 0))) ? 199 : var_3)))));
                        var_19 = (max((!var_10), (((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_1]) != (arr_6 [i_2 + 1] [i_2 + 1] [i_0] [i_0] [10])))));
                    }
                }
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_20 = var_0;
                    arr_12 [i_0] [i_0] = ((0 - ((min((arr_11 [i_4 - 1] [i_4] [i_4 - 1]), var_2)))));
                }
                var_21 = max(((((arr_0 [i_0]) != ((max(var_4, (arr_0 [i_0]))))))), var_1);
                arr_13 [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
