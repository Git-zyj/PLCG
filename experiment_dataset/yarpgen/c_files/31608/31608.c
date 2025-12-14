/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-var_19 ? var_13 : (max(10088959546952646620, -5614616853962294146))));
    var_21 = -var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = (arr_4 [10]);
                    arr_7 [i_2] [i_1 - 1] = (-((((min((arr_6 [i_2] [i_0] [i_1 - 1] [i_0]), (arr_4 [i_0])))) ? ((((arr_3 [i_2 - 1] [i_1] [i_0]) - (arr_4 [i_0])))) : ((var_5 ? (arr_0 [i_0]) : 10088959546952646620)))));
                }
            }
        }
    }
    #pragma endscop
}
