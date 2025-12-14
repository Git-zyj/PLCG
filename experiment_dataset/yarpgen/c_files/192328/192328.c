/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(3182728259, (min(2, (~-4600332409560440730)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0 + 1] [20] [i_0] = (((arr_0 [i_0] [i_1]) > (((-2 + 2147483647) >> (-2 + 30)))));
                    arr_11 [8] [i_1] [22] &= (min((((!(arr_7 [22] [i_1] [i_2])))), var_7));
                }
            }
        }
    }
    var_19 = (!var_3);

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_20 = (((22 ? -2 : -127)) >= ((var_13 ? (arr_0 [i_3] [i_3 + 2]) : (arr_0 [i_3] [i_3 + 1]))));
        arr_16 [i_3] = -var_17;
    }
    #pragma endscop
}
