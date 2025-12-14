/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = 9223372036854775807;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = (arr_8 [23] [11] [i_2] [i_0]);
                        arr_13 [i_0] [i_0 + 1] [i_1] [i_0] [i_3] = 250;
                    }
                }
            }
        }
        var_20 -= (((((!var_10) > (255 | var_12))) ? ((~((2615806425 ? 0 : var_10)))) : (arr_8 [4] [i_0 - 1] [i_0 - 1] [4])));
    }
    var_21 = ((~((var_8 ? ((var_1 ? 122 : var_15)) : 1))));
    var_22 = (((var_7 ? var_5 : var_13)) / ((245 + ((-34 ? 243 : 4294967282)))));
    #pragma endscop
}
