/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = (((min(((32758 ? -49 : 2)), (-32758 <= var_15))) * ((((((-31940 ? 127 : (arr_0 [8])))) != var_5)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] [8] |= (arr_8 [i_1] [0] [i_2]);
            arr_11 [8] [i_2] = max((arr_5 [11]), (((arr_1 [i_1]) ? 255 : (-32767 - 1))));
        }
        arr_12 [i_1] = (((((1352727004 << (-5131772763483170273 + 5131772763483170303)))) ? (((((-(arr_4 [i_1])))) - (arr_8 [i_1] [10] [i_1]))) : (var_12 | -117)));
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    {
                        var_21 = 77598256269815539;
                        arr_24 [i_3] [i_5] [15] [i_6 - 1] [i_6 - 1] [i_3 - 2] = var_0;
                    }
                }
            }
        }
        arr_25 [i_3] [i_3] = (((((min((arr_20 [i_3] [8] [12] [12]), (arr_22 [i_3] [i_3] [i_3] [i_3 + 1]))))) ? (3004419471 && var_7) : var_19));
        var_22 = ((((((4294967294 * 127) ? var_4 : var_18))) ? (((((-7984 ? -127 : 3004419471))) ? (arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 3] [1]) : (arr_20 [i_3 - 1] [i_3 - 1] [i_3] [i_3]))) : (((((!112) == (((-114 + 2147483647) << 0))))))));
    }
    var_23 = (0 ? var_3 : 2885215065);
    var_24 = (min((127 != 117), 85));
    #pragma endscop
}
