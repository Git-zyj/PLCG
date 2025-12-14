/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_10 ^= (arr_9 [1]);
                        var_11 ^= (min(-var_8, -37));
                        var_12 = (-(((arr_8 [17] [i_1 - 2] [i_2 - 3] [i_2 - 2]) ? (arr_8 [i_0] [i_1 - 1] [1] [i_2 - 3]) : (arr_8 [i_2 - 1] [i_1 + 1] [i_2 - 3] [i_2 + 1]))));
                    }
                }
            }
        }
        var_13 &= ((((((arr_8 [i_0] [11] [i_0] [i_0]) * (arr_10 [0] [i_0] [i_0] [i_0])))) ? (((arr_2 [i_0]) >> (((arr_2 [i_0]) - 107)))) : (arr_11 [i_0] [i_0] [i_0])));
        var_14 = (min((max(5069087332688713793, 0)), (min((3183867901 + 4), (arr_1 [2] [i_0])))));
        arr_12 [i_0] [i_0] = ((((min(-92, var_4))) && ((((var_0 || var_9) ^ (arr_11 [i_0] [i_0] [2]))))));
    }
    var_15 = ((max(var_0, (min(var_5, 65535)))) ^ (max(var_8, (var_3 ^ 5067363529312561008))));
    var_16 = (-((-624923589 ? var_5 : (min(var_5, -95)))));
    var_17 = (min(var_17, (min(((((((var_3 ? var_5 : var_1))) ? ((var_8 ? var_8 : var_3)) : var_0))), (((((var_1 << (var_7 - 1768554757)))) ? var_1 : ((var_0 ? var_5 : var_2))))))));
    #pragma endscop
}
