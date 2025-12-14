/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_1] [i_0] |= (arr_2 [i_0]);
            var_14 = (max(var_14, (arr_0 [i_1])));
            arr_5 [i_1] = (32767 ? 4294934525 : 219095423);
            var_15 *= (((((2031914931 ? -71 : (min(4294934506, 7889))))) != (min((var_12 || var_10), var_1))));

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_16 += ((((max(var_13, 52829))) + 101));
                arr_8 [i_0] [i_2] = ((((-(arr_2 [i_0]))) & var_6));
            }
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_17 = (min(var_17, (((~(arr_2 [i_3 - 3]))))));
            arr_12 [i_0] [i_0] [i_0] = 96;
        }
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            var_18 ^= var_4;
            arr_15 [i_0] [i_4] [i_0] = (((((arr_7 [i_4] [i_4 - 2] [i_4]) ^ -813623962)) - ((~(arr_13 [i_0])))));
            var_19 += (max((((~(arr_3 [i_0])))), (arr_0 [i_4])));

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_20 = var_1;
                arr_18 [i_0] [i_4] [i_5] |= var_12;
                var_21 = (min(var_21, (((-42 & 64) + ((((arr_13 [i_4]) != var_3)))))));
            }
        }
        var_22 = ((arr_13 [i_0]) + var_11);
        var_23 = (min(var_23, (arr_0 [i_0])));
        arr_19 [i_0] [i_0] &= ((var_7 & (arr_0 [i_0])));
        var_24 = (max(var_24, (((((min((arr_0 [i_0]), 32756))) ? 7741386594956861699 : 7961665415096274848)))));
    }
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        arr_24 [i_6] = ((-14945 ? 0 : 4294934529));
        var_25 = (min(var_25, (((~(((arr_22 [16]) ? ((4294934527 ? 32756 : var_8)) : var_0)))))));
    }
    var_26 = (max(var_26, -var_10));
    #pragma endscop
}
