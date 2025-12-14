/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = -7131416907291170915;
                    var_18 = (min(var_18, (arr_3 [i_0])));
                    arr_7 [i_0] [i_0] &= (((((249 ? (arr_5 [i_0]) : (arr_6 [i_1 + 1])))) ? ((0 ? (arr_4 [i_2] [i_0] [i_0]) : (arr_2 [i_1 + 1] [i_1 + 1]))) : (!8)));
                    arr_8 [i_1] [i_1] = var_5;
                }
            }
        }
    }
    var_19 = ((var_8 ? ((var_12 ? (~var_3) : var_11)) : ((var_11 ? (!4) : (~var_16)))));
    #pragma endscop
}
