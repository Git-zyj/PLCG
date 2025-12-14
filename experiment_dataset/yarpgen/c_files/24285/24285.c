/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((0 ? (arr_1 [i_0 + 3]) : (arr_0 [i_0])));
        arr_3 [i_0 + 1] = 117;
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = arr_4 [i_1 + 1];
        var_11 -= ((244 ? 111 : ((186455720 ? var_5 : 398976440))));
        arr_7 [i_1] = 111;

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_12 |= var_4;
            var_13 = (min(var_2, (((!(arr_8 [i_1 - 2] [i_2 + 1]))))));
            arr_11 [i_2] [12] = ((-(arr_9 [i_1] [i_2 + 3] [i_2 + 3])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {
                        var_14 ^= 255;
                        var_15 = ((((((((117 ? 1 : 255))) ? (4294967295 ^ 4294967295) : (((888317462 ? -113 : 888317466)))))) ? 1954583369 : 25824));
                    }
                }
            }
        }
        var_16 = (min(var_16, ((max((((((0 ? 229 : 112))) ? (((min(63, (arr_14 [16] [i_1] [i_1] [i_1]))))) : (min(var_2, 0)))), var_2)))));
    }
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        var_17 = (max((arr_0 [i_5]), (!0)));

        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            arr_21 [i_6] = var_4;
            var_18 = ((14 ? (((((0 ? 1 : 20))) ? (arr_1 [i_6]) : ((((arr_5 [i_5 + 2]) & (-127 - 1)))))) : (((max(-2, (arr_0 [12])))))));
            var_19 = (max(var_19, ((((arr_19 [11] [i_6]) << (-7636816850444969132 + 7636816850444969150))))));
            var_20 = ((!((max((arr_16 [i_6 - 4] [6] [i_6] [i_6]), (arr_19 [i_5 + 1] [i_6 - 4]))))));
            var_21 = ((((((12 ? var_0 : 15)))) ? var_3 : 0));
        }
    }
    var_22 = var_7;
    var_23 = (max(511, (-127 - 1)));

    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        var_24 -= 7636816850444969126;
        arr_26 [11] = 255;
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_25 = (max(var_25, 14));
        var_26 = var_5;
        var_27 = ((127 ? (((~-2) ? var_5 : var_1)) : 5));
    }
    for (int i_9 = 1; i_9 < 9;i_9 += 1)
    {
        var_28 = 2;
        var_29 = (min(8, 4294967295));
    }
    for (int i_10 = 3; i_10 < 12;i_10 += 1)
    {
        var_30 = -2;
        var_31 = 1;
    }
    var_32 |= var_10;
    #pragma endscop
}
