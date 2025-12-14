/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (((-31 ^ (((arr_5 [5] [10] [i_1]) ? 48 : (arr_3 [i_1] [i_1]))))));
                arr_7 [i_0 + 1] [i_0] = var_17;
                arr_8 [i_0] [i_1] = ((-(((16938603508376478312 != (arr_4 [i_0] [i_0 - 1]))))));
                var_20 = (arr_6 [i_1] [i_0 + 1]);
            }
        }
    }
    var_21 = (~var_10);
    var_22 = var_6;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (((var_0 >= var_2) ^ (((min(var_4, 27))))));
        arr_14 [i_2] = (min((((arr_10 [i_2] [i_2]) / (arr_12 [i_2] [i_2]))), ((((arr_10 [i_2] [i_2]) == 576179277326712832)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_17 [5] = (max(-69, 1));
        arr_18 [i_3] = 576179277326712815;
        var_23 *= 576179277326712836;
    }
    var_24 = (0 ? (((((min(var_15, var_18))) ? 14 : (44573 % var_13)))) : ((var_11 ? -var_4 : 8756740153324726160)));
    #pragma endscop
}
