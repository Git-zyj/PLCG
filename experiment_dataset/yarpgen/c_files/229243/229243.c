/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(1, 1020));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 ^= min((max(((min((arr_0 [i_0]), 1))), (arr_5 [12]))), (min(826283500, 912263390)));
                arr_6 [i_1] = 1294768108;
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 = (min(((((arr_8 [i_2]) ? 4294967278 : 226691778))), ((15955128831505317284 ? (arr_12 [i_3 + 2] [i_3 + 1]) : ((((!(arr_9 [i_4] [i_3] [i_2])))))))));
                    var_22 = (max((arr_8 [i_3 + 1]), (arr_13 [i_3 + 2] [i_3 - 2] [i_3 - 2])));
                    var_23 = (arr_8 [i_2]);
                }
            }
        }
        var_24 *= ((~(max((arr_10 [i_2] [i_2]), (arr_10 [i_2] [i_2])))));
        arr_14 [15] = (-9223372036854775807 - 1);

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_25 = (min(var_25, ((min(119122925, 119122925)))));
            var_26 = (max(var_26, (arr_7 [i_2] [i_2])));
            var_27 = (max(((min((arr_10 [i_2] [i_2]), (arr_8 [i_2])))), ((((((arr_11 [i_2] [i_2]) ? (arr_9 [i_5] [i_5] [i_2]) : (arr_7 [i_2] [i_2])))) ? (((min(1, 1)))) : (min(197, 4294967269))))));
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            {
                var_28 ^= 17435;
                arr_22 [i_7] = 1;
            }
        }
    }
    #pragma endscop
}
