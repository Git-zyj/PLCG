/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((-518961405 < (((!(((-518961405 ? 3067338933 : 1))))))));
                    var_17 = (max(var_17, (((3067338929 + var_2) ? (max(115125879, 223)) : 518961405))));
                    var_18 = ((var_6 ? var_11 : var_13));
                    arr_6 [i_0] [i_1] [i_0] [i_0] |= (arr_2 [i_0] [i_1] [i_2]);
                    var_19 = (121 | ((var_0 ? 7306 : ((43640 ? (arr_5 [i_2 + 1] [i_1] [i_0] [1]) : var_12)))));
                }
            }
        }
    }
    var_20 = (((754 ? var_8 : (((-2147483647 - 1) ^ (-2147483647 - 1))))));

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_21 = (-(var_15 != 8506));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                var_22 ^= (((-518961405 || 162) < 135));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_23 = var_12;
                            var_24 = (var_10 - 43640);
                        }
                    }
                }
            }
            var_25 = var_4;
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            var_26 &= (((((((var_6 > var_15) < var_3)))) & ((var_8 ? var_14 : ((255 ? var_14 : 115125879))))));
            arr_23 [20] &= 81;
            var_27 = (min(var_27, (((+((((~4294967292) && 7521679485283294745))))))));
            arr_24 [i_3] = (((((min(var_3, 3067338933)))) ? var_14 : (((((903700759 ? var_6 : -32757))) ? ((97 ? 518961412 : var_8)) : (-3647 - var_2)))));
            arr_25 [i_3] [i_8] [i_8 - 1] = (i_3 % 2 == zero) ? (((((1 ? (min((arr_1 [i_8]), var_14)) : (((var_4 >> (-1810257158 + 1810257177)))))) & ((((arr_15 [i_8 - 1] [i_8] [i_3] [18] [12]) >> (((arr_15 [i_8 - 1] [i_8 - 1] [i_3] [i_8 - 2] [i_8 - 2]) - 6723739239612802967)))))))) : (((((1 ? (min((arr_1 [i_8]), var_14)) : (((var_4 >> (-1810257158 + 1810257177)))))) & ((((arr_15 [i_8 - 1] [i_8] [i_3] [18] [12]) >> (((((arr_15 [i_8 - 1] [i_8 - 1] [i_3] [i_8 - 2] [i_8 - 2]) - 6723739239612802967)) - 454587557392034830))))))));
        }
    }
    #pragma endscop
}
