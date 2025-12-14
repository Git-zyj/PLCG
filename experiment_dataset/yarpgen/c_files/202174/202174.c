/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_0 [i_1 + 1]);
                arr_7 [i_0] [i_1] [i_1] = 3;
                var_13 ^= (max(3, 158));
                var_14 = 1;
                var_15 *= var_3;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_16 = (arr_4 [i_2 - 4] [i_3 + 1] [i_3 + 2]);
            var_17 = 1073610752;
            var_18 &= (arr_10 [i_3 + 3] [i_2]);
            arr_13 [i_3] [i_2] = ((((arr_12 [i_2 + 1] [i_3]) >= -7)));
            var_19 = (73 + 218);
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_2] = (~(arr_14 [i_2 - 2]));
            arr_17 [i_2] [i_4] = -var_2;
        }
        var_20 |= (((var_2 || 3) || 2223207469));
        arr_18 [i_2] [i_2] = ((~(arr_10 [i_2 - 2] [i_2 - 2])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_29 [i_5] [i_5] [i_7] = (arr_20 [i_5] [i_6]);
                    var_21 ^= -3;
                }
            }
        }
        var_22 = (max(var_22, (((-((max((arr_28 [i_5] [i_5] [i_5] [i_5]), (arr_28 [i_5] [i_5] [i_5] [i_5])))))))));
        var_23 = (max(((max((5983 || -3), (((arr_19 [i_5]) >= 202013947))))), 15663625231503813347));
    }
    var_24 = (!var_10);
    var_25 = var_1;
    #pragma endscop
}
