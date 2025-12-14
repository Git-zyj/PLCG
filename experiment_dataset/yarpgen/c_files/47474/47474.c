/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = ((((max(166, (arr_0 [i_0])))) % var_12));
        var_15 = 0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = (min((var_3 / var_8), (((((-26201 ? 468418047 : var_1))) ? (~-1000222445) : (-1150290940 & 1150290939)))));
                    var_17 = ((((((arr_3 [i_0] [1] [i_2 + 3]) != (min((arr_1 [i_1]), var_5))))) % ((min(var_2, (min(253, 54422)))))));
                    var_18 = (min(var_18, (((~(arr_3 [i_0] [i_0] [i_0]))))));
                    arr_7 [i_0] [i_0] [i_0] &= (arr_6 [i_0] [i_1 + 1]);
                }
            }
        }
        var_19 = (0 / -11113);
        var_20 = ((((min((~2), ((((arr_0 [i_0]) / -1000222445)))))) ? 1000222444 : (((((16703 ? 235328307 : 65325)) == 1150290943)))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_21 = arr_8 [i_3] [i_3];
        arr_10 [16] [i_3] = ((((((-29991 - (arr_8 [i_3] [23])))) ? (arr_9 [i_3] [i_3]) : (((arr_9 [i_3] [i_3]) ? 21222 : var_5)))));
    }
    var_22 = ((6469595219238908440 ? 0 : ((5763347025831976558 ? 1 : (-2147483647 - 1)))));
    var_23 |= var_12;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_17 [9] [i_5] [i_5] = var_4;
                    arr_18 [i_4] = ((~(max((var_12 ^ var_3), (~var_2)))));
                    var_24 = ((((min(var_10, -var_12))) ? -726087533 : ((max(35990, ((((arr_12 [i_5] [i_6]) == 4116081071))))))));
                }
            }
        }
    }
    #pragma endscop
}
