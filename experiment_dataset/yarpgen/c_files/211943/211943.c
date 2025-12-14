/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    var_18 = (((~(min(-1583136806, var_6)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (max((min((((arr_1 [i_0] [i_0]) * 63)), (max(228, -1583136806)))), (arr_3 [i_2 - 2])));
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_0] = ((~(((arr_5 [i_2 - 1] [i_1] [i_2 - 3]) / 18446744073709551615))));
                    var_20 = 1;
                }
            }
        }
        var_21 -= (max((min((arr_6 [i_0]), ((~(arr_6 [i_0]))))), (((arr_1 [i_0] [i_0]) ? (~var_4) : 1583136823))));
    }
    #pragma endscop
}
