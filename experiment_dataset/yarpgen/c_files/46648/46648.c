/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((5214934259384937330 ? (-3711552852 < -125) : ((var_11 ? 583414442 : var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (((min((arr_2 [i_0] [i_1]), (arr_0 [i_0 - 2] [i_0]))) < (((max(3840009793, 30592))))));
                    var_18 = (min(var_18, 0));
                    var_19 = 1863396863;
                    var_20 = (((((max(17093538334024282228, 2418402506330204224)) != (~182))) ? (arr_1 [i_2] [i_0]) : 120));
                    arr_8 [i_0] [i_0] [i_0] = ((((-1863396882 ? (arr_4 [i_0 + 1] [i_0] [i_0 - 2]) : (arr_4 [i_0 - 3] [i_0] [i_0 + 1]))) & (17093538334024282228 == 6402900207356622152)));
                }
            }
        }
    }
    var_21 = (max(var_21, 1863396863));
    var_22 = 454957480;
    #pragma endscop
}
