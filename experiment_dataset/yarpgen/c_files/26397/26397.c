/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((((var_3 % ((-17575 ? 1 : 53688)))) >> (var_0 - 949326761)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = min(((-1 ? (arr_7 [5]) : 0)), (arr_1 [i_2 + 1]));
                    arr_8 [i_0] [i_0] [i_0] = ((38601 >> (38601 - 38580)));
                    arr_9 [i_1] [i_0] = (min(((((arr_1 [i_1]) ^ var_9))), ((38601 ? (min(1876968333517417120, (arr_2 [i_0] [i_1]))) : (arr_5 [i_0] [4])))));
                }
            }
        }
        var_14 = (((min((var_8 ^ 1), (arr_2 [11] [9]))) > (((-((min(26951, 67))))))));
        var_15 *= (arr_2 [8] [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_16 = ((~(arr_16 [i_3] [9] [i_5])));
                    var_17 = (((((65535 ? 23 : (arr_0 [i_5])))) ? ((var_2 ? (arr_6 [i_3] [i_4] [6]) : (arr_17 [i_3] [i_4] [i_5] [i_4]))) : ((((arr_0 [i_5]) ? -11591 : -22)))));
                    var_18 = ((((((arr_12 [1]) != 5374492283105485047))) ^ (arr_7 [5])));
                    var_19 += var_6;
                }
            }
        }
        arr_18 [i_3] = (((((var_4 ? (arr_5 [i_3] [i_3]) : 2731))) && (((4294967287 ? 13 : -17)))));
        var_20 -= 2343080470058391572;
        arr_19 [19] [i_3] = var_2;
        var_21 = (((arr_3 [i_3] [i_3]) ? var_10 : (arr_3 [i_3] [i_3])));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_22 = ((51 * 3022775911) >> (-183 != 17835));
        arr_22 [i_6] = ((3890 >> ((min(1, (arr_20 [i_6]))))));
        arr_23 [i_6] = (arr_6 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 23;i_10 += 1)
                {
                    {
                        var_23 = var_6;
                        var_24 |= (((!var_4) ? ((511 ? 47230 : 0)) : (~var_0)));
                        var_25 = (((-1 + 9223372036854775807) >> (-1929915492 + 1929915518)));
                        var_26 = ((-96 + 2147483647) << (((((~var_8) + 16)) - 14)));
                        arr_37 [i_7] [i_7] [i_7] [i_7] = ((((((arr_33 [9]) / (arr_1 [i_8])))) ? ((38621 >> (611955345 - 611955315))) : (min((arr_20 [i_9 - 4]), (arr_5 [i_9 - 2] [i_10 - 1])))));
                    }
                }
            }
        }
        var_27 = (arr_21 [i_7] [i_7]);
        var_28 *= (!var_9);
    }
    #pragma endscop
}
