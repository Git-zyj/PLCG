/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_13;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = 1;
            var_19 = (arr_3 [i_0 + 1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_20 = var_13;
            var_21 = (6168877455834361177 | 69);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_11 [i_0] [6] [13] = (max((29030 && -506417671), ((((max(var_1, (-32767 - 1)))) ? (var_8 - 69) : 0))));
                arr_12 [i_0] [i_0] [5] = var_10;
            }
        }
        arr_13 [i_0] [i_0] = (max(((-(max(var_10, 16893352197785527293)))), (~var_6)));
        var_22 = (max(0, -506417656));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_23 = ((~(min(293488256, (arr_15 [i_4])))));
        var_24 = (~-20378);
        var_25 = var_7;
        var_26 -= (8578277511197703805 && -506417672);
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_27 ^= (((((!var_16) % (max(var_0, -70)))) ^ ((min(-15993, 55074)))));
                var_28 = ((!(((40848 / (arr_17 [i_5]))))));
                arr_20 [i_5] [10] [i_6] = (((arr_8 [i_6] [i_5] [i_5] [i_5]) ? (arr_9 [i_5] [14] [14]) : ((var_9 ? (arr_10 [i_5] [i_5 - 1] [i_6]) : (-110 < -69)))));
            }
        }
    }
    #pragma endscop
}
