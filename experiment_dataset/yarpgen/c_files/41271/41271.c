/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_10 ? var_4 : 556445671) != var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = min((min((arr_0 [i_0]), (arr_2 [i_0]))), ((min((!211), ((var_1 > (arr_2 [i_0])))))));
                var_14 += (arr_2 [i_0 + 1]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 *= (min(((min((arr_2 [i_0 + 1]), 58306))), var_0));
                    arr_7 [i_2] [i_1] [i_2] = (min(var_7, var_1));
                    var_16 = (max(var_16, (((-((var_4 ? var_2 : (arr_1 [i_0 - 1] [i_0 + 1]))))))));
                    var_17 = var_3;
                }
            }
        }
    }
    var_18 = (min(var_18, var_7));
    var_19 = ((!(var_4 & -6230946543072630160)));
    #pragma endscop
}
