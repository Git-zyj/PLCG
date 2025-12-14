/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3936173828;
    var_13 *= (!((min((~358793473), (var_10 + 3936173822)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 *= ((((max((((~(arr_0 [i_1])))), (arr_1 [9] [i_0])))) ? ((56 ? (!3936173828) : (((arr_2 [i_0]) ? var_4 : 0)))) : (~37988)));
                    var_15 = 1;

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_16 = ((arr_0 [i_1]) ? ((((((3936173828 ? var_0 : (arr_2 [i_2]))) < (((-(arr_4 [i_3] [i_2])))))))) : (((358793467 < 177) / 6128139141194450950)));
                        arr_11 [10] [i_2] = ((((max(1, (max(var_11, (arr_5 [i_0] [i_1])))))) ? var_9 : ((min((arr_6 [i_2] [i_3 + 2]), (arr_6 [i_2] [i_3 - 1]))))));
                        var_17 = ((!((max(((358793478 ? (arr_1 [9] [i_1]) : var_6)), (1 * var_10))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_18 = ((var_7 ? (((((max(38002, 3936173844)) <= 38002)))) : var_10));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [2] [i_1] [i_2] [i_2] [i_5] = ((-(358793473 - var_5)));
                            arr_17 [i_5] |= (max(((((((!(arr_4 [i_0] [i_5])))) < (37977 >= var_9)))), var_5));
                            var_19 = ((+((((38002 & 7035382160787353564) >= (arr_2 [i_1]))))));
                            var_20 = 13236561;
                            var_21 *= ((((max((arr_8 [i_0] [i_1] [i_0] [i_0] [i_4]), 37977))) ? (((max((arr_8 [i_5] [1] [i_2] [i_1] [i_0]), (arr_0 [i_0]))))) : -9223372036854775796));
                        }
                        var_22 = (arr_15 [i_0] [i_1] [i_2] [i_4]);
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        arr_22 [i_0] [i_2] [9] = -358793476;
                        var_23 = ((~(arr_4 [i_1] [i_6 + 1])));
                        var_24 = (((((-var_3 - ((-(arr_9 [i_0] [i_1] [i_2] [i_6 + 2])))))) ? (5184040029384595300 + var_11) : 3084187548));
                        arr_23 [i_0] [i_2] [i_0] [i_0] = ((-var_5 * (!255)));
                    }
                }
            }
        }
    }
    var_25 = (!0);
    var_26 *= ((~(var_8 < var_1)));
    #pragma endscop
}
