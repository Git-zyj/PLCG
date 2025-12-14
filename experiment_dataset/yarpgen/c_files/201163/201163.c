/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = var_8;
            var_17 = (min(var_17, ((min(23033, (min(((min((arr_0 [i_1]), var_3))), (min(16960642085565456165, var_0)))))))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 = (min((((3275548699010692650 <= var_10) * (~var_16))), ((~((84 ? 59 : (arr_8 [i_0] [i_1] [i_2 + 1] [i_3])))))));
                        arr_11 [i_0] [i_0] [1] [i_0] [i_3] [i_3] = ((14 * ((~(min(var_8, 241))))));
                        arr_12 [3] [i_3] [i_3] [i_0] = ((((((arr_1 [i_0] [i_0]) ^ (12164 / 4942717989246250119)))) ? ((((arr_2 [i_2 - 1] [i_2 - 2] [i_2 + 1]) >= (arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1])))) : -11949));
                        arr_13 [i_0] [i_3] = var_10;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_4] [i_4] = ((-(((!(arr_16 [i_0] [i_0] [1]))))));
            arr_18 [i_4] [i_4] = var_6;
            var_19 = ((-((((min(113, 14))) ? (((arr_9 [i_0] [i_0] [i_4] [i_0] [i_4] [i_0]) >> 1)) : (arr_15 [i_0])))));
        }
        var_20 |= (-82 && 2154520043);
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = (arr_20 [i_5]);

            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                var_22 = ((((~((max(6851, 32381))))) + ((min(1, 36381)))));
                arr_27 [i_5] = var_3;
                var_23 = (1486101988144095451 ? 46 : 3314);
            }
            var_24 ^= ((min((var_16 ^ 36376), ((var_5 ? 0 : (-9223372036854775807 - 1))))) - ((((arr_8 [i_5] [i_5] [i_5] [i_6]) ^ var_7))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_25 ^= (min((arr_1 [i_8] [i_8]), (min((arr_21 [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_5] [i_8])))));
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {
                        var_26 -= (min(((min((min(var_12, 213)), var_2))), ((-31623 ? ((min(-21494, 2105336318))) : -5643456911649296187))));
                        var_27 = ((((min((((arr_30 [i_5]) ? var_11 : 204)), (arr_23 [i_10] [i_9] [i_8])))) % (arr_4 [i_5])));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            arr_38 [2] [i_11] |= (arr_26 [i_5] [i_5] [14] [i_11]);
            var_28 = -80;
            arr_39 [i_5] [i_5] [16] &= var_9;
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
        {
            arr_42 [i_5] [i_5] = (((((6622506549718916235 ? (max(6316466681478158446, 2189630978)) : (var_8 - 0)))) ? (min((min((arr_34 [i_5] [11] [i_5] [i_12]), (arr_9 [i_5] [i_5] [i_5] [i_5] [i_12] [i_12]))), (min(var_1, 5)))) : (319914928751855261 | 255)));
            arr_43 [i_5] [i_12] = (((((~((max(-32746, 38)))))) >= (min(var_10, (-7389686528423203687 * 1486101988144095450)))));
        }
        arr_44 [i_5] = (((((min(var_12, (arr_1 [i_5] [i_5])))) <= 16960642085565456164)) ? (((~var_13) ^ (arr_28 [i_5] [i_5]))) : (arr_10 [i_5] [i_5] [i_5] [i_5] [9]));
        var_29 |= ((32767 / (((max(var_6, var_7))))));
    }
    var_30 = 6403139706673059688;
    var_31 = (min((min(var_2, 1)), ((min(var_1, var_12)))));
    #pragma endscop
}
