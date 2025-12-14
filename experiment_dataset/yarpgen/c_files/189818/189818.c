/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [i_0]) > 2046837226));
        var_21 = ((arr_1 [i_0]) && -1531382958482642697);
        var_22 = (((arr_1 [i_0]) < (arr_1 [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0]) > (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((((max((arr_0 [i_1] [i_1]), (arr_6 [i_1])))) > -2510278669087779603));
        var_23 &= (~2510278669087779602);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [i_2] [4] &= ((((max((arr_9 [14]), (arr_5 [i_2] [i_2])))) % (max((arr_8 [i_1]), (arr_1 [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_24 = (min((min((49598 ^ 2510278669087779602), (max((arr_15 [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_2] [i_4]))))), (((~(arr_12 [i_1]))))));
                        var_25 = -2510278669087779603;
                    }
                }
            }
        }
        var_26 = (min(var_26, -18));
        var_27 = ((15 / (((~(arr_2 [i_1]))))));
    }
    var_28 |= 4887498346276844590;
    #pragma endscop
}
