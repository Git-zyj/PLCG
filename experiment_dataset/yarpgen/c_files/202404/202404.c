/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_9 / var_14);
    var_17 = var_14;
    var_18 = (((var_15 ? -811992906022199747 : (-811992906022199747 - 646185408))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max(var_7, ((((var_2 / (arr_3 [i_1]))) - -1812004286)))))));
                var_20 = (max(var_20, 20855));
                var_21 = ((min(var_6, 41222)));
            }
        }
    }
    #pragma endscop
}
