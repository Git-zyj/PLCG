/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((2142290804 << (-var_0 + 13)));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = ((((((2142290804 % (arr_0 [i_0]))) % (-140046899 || 2152676479))) << (((arr_0 [i_0]) - 59))));
        arr_3 [i_0] = (+(min(4294967295, (((arr_1 [i_0]) ? (arr_2 [14]) : 1)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_1] [i_2] &= min((max((!-284266790786830860), 0)), (((((max(var_14, var_13))) || (arr_1 [i_2])))));
                        var_22 = (-12 == 1);
                    }
                }
            }
        }
        arr_12 [i_0] = (-(min(0, (arr_8 [i_0] [i_0] [i_0] [i_0]))));
    }
    #pragma endscop
}
