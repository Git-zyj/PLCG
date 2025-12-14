/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 &= ((arr_4 [12] [i_4] [i_4] [12]) ? ((((arr_6 [i_4] [i_3 - 1] [i_3 + 2] [i_3 + 1]) ? (arr_6 [i_4] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_6 [i_4] [i_3 + 1] [i_3 + 2] [i_3 - 1])))) : (min(0, 0)));
                            var_18 = (max(var_18, (((~(((min(0, (arr_8 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4]))) & (6618535321801341116 | var_14))))))));
                            arr_12 [i_4] [10] [i_0] [i_0] [i_4] |= 16;
                            var_19 = 16400;
                            var_20 = ((-(max(((213 ? (arr_4 [i_3 - 1] [i_1] [i_1] [i_0]) : var_0)), var_14))));
                        }
                    }
                }
            }
            var_21 = (((1 - 0) ? (max((min(4294967295, 0)), var_11)) : 4294967295));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_22 = var_4;
                            var_23 = (max(var_23, ((2 ? 4294967271 : 7696779764538793767))));
                            var_24 = ((var_5 >= (max(60, 114))));
                            var_25 = (((arr_4 [7] [i_1] [9] [0]) ? ((((max(18012199486226432, (arr_9 [i_0] [i_0] [i_0] [9] [i_7])))) ? (((7830497719158871631 ? 1 : 4294967293))) : (-9223372036854775807 - 1))) : (max((((arr_0 [i_6] [i_0]) ? 4908010680024793785 : var_2)), (arr_6 [i_1] [i_1] [i_1] [i_1])))));
                        }
                    }
                }
            }
        }
        var_26 = ((((max((arr_9 [i_0] [i_0] [i_0] [i_0] [5]), ((var_16 ? (arr_21 [2] [i_0] [2] [4] [i_0]) : var_13))))) ? (((15 < 34060) ? var_10 : (max(18446744073709551615, 58049)))) : (((((max(var_14, var_11))) ? var_12 : var_1)))));
    }
    var_27 = (min(var_27, ((min(var_0, -8899833296788523884)))));
    #pragma endscop
}
