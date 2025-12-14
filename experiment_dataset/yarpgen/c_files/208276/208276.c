/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_2 > 8997)));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 -= (((((((arr_2 [14]) ? (-32767 - 1) : 6868938225670603048)))) ? (max(32767, ((var_8 + (arr_0 [i_0 + 2] [i_0 + 2]))))) : (((max((arr_0 [i_0] [i_0 + 1]), 32767))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 |= (-((max((arr_2 [12]), (((var_12 <= (arr_8 [12] [i_3] [i_2 + 1]))))))));
                        var_21 = (max((((arr_8 [i_0] [3] [i_0]) ? var_17 : (~var_0))), (((((max(var_3, var_7))) ? ((max(-114, -32755))) : (arr_5 [i_0 + 1] [i_2 + 1] [22]))))));
                    }
                }
            }
        }
        var_22 = ((((min((!215), 255))) ? (((((32761 ? var_13 : 1023))) ? (arr_7 [i_0 + 3] [i_0] [i_0] [i_0 + 1]) : var_1)) : (((((arr_0 [i_0] [i_0]) != (arr_6 [1] [i_0] [i_0 + 1])))))));
        var_23 = (arr_8 [8] [22] [i_0]);
        var_24 = (arr_4 [i_0 - 1] [i_0 - 1]);
    }
    #pragma endscop
}
