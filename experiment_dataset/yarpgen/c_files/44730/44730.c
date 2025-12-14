/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_2) ? 126 : (var_3 % 53793)));
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [2] [i_0] [i_1] = 36064;
                var_14 = (max(var_14, 130));
                var_15 = (+-28);
                var_16 = -3935938460383581782;
                var_17 &= (((((-((-(arr_1 [i_0])))))) ? (~var_0) : ((((!(arr_0 [i_0])))))));
            }
        }
    }
    var_18 = var_7;
    #pragma endscop
}
