/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((1 == var_8) ? ((1 >> (var_9 - 43277))) : var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_1 - 1] [i_2 + 2] = (((1 ? ((max(var_0, 1))) : (arr_0 [i_0] [i_2 + 2]))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_11 ^= 1199837458;
                        var_12 = -2147483645;
                        var_13 &= var_6;
                        var_14 = ((+((~(((arr_10 [i_1] [16]) ? 255 : var_6))))));
                    }
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((max(var_8, ((var_9 ? ((((arr_11 [i_1 + 1] [i_2 - 1] [i_4]) ? var_0 : var_0))) : var_7)))))));
                        arr_19 [i_0] [i_1 - 2] [i_1 - 1] [i_2] [i_4 - 1] [i_4] = ((170 ? ((-(arr_16 [i_4 - 1] [i_1 - 2] [i_1] [i_0]))) : (max((arr_16 [i_2] [i_1 + 1] [i_1] [9]), var_5))));
                        var_16 = ((((((2147483645 ? var_5 : 13))) ? 4294967295 : ((max(1, var_8))))));
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1 - 2] [i_2] [i_5] [i_2] [i_5] = ((!((min((min(247, 193)), 35985)))));
                        arr_23 [10] [i_1] [i_1 + 1] [i_2 + 2] [i_2 + 2] [1] |= ((~(arr_21 [i_0 + 1] [i_1] [i_1 + 1] [i_2 - 1])));
                        arr_24 [i_5] [i_5] [i_5] [i_5] [1] = -1;
                        arr_25 [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_5] = (((((68719345664 ? var_2 : ((max(var_5, var_5)))))) == (min((((var_8 ? 242 : (arr_13 [i_0 + 1] [i_1] [i_1] [i_5] [i_1])))), -9012037725733501399))));
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_2));
    #pragma endscop
}
