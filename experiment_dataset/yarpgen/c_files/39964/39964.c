/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(((max(114, ((16 ? (-127 - 1) : var_4))))), ((var_11 ? (max(var_10, var_1)) : (((min(var_8, var_11)))))))))));
    var_16 = ((((((!var_5) ? (var_14 && var_9) : (var_10 || var_11)))) && ((min((!var_3), (max(var_10, 29337)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 += (min((((var_4 == (arr_6 [8])))), (max((((var_1 ? var_1 : var_0))), (max(-89, (arr_7 [i_0] [i_1] [i_2])))))));
                    arr_8 [i_0] = (max((!var_11), (((((-789976649 - (arr_6 [i_0])))) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((var_14 > (arr_0 [i_0 + 2]))))))));
                    arr_9 [i_2] [i_0] [7] = -126;
                    var_18 = (min((((-var_5 && ((max(var_14, var_12)))))), (((arr_4 [i_2] [i_1] [i_0 + 1] [i_0]) ? var_14 : (arr_5 [i_2] [i_1] [i_0 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
