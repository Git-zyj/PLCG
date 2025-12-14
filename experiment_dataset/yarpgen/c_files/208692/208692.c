/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = ((~(((!(arr_1 [i_3 - 1] [i_1 + 3]))))));
                        var_20 += (arr_2 [11]);
                        arr_12 [i_1] = var_7;
                    }
                }
            }
            var_21 = ((arr_0 [i_1]) * (((arr_4 [i_1]) / (arr_4 [i_1]))));

            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                var_22 ^= ((!((((arr_13 [i_1 + 1]) >> ((((~(arr_3 [i_0]))) + 8)))))));
                var_23 = (((arr_7 [i_0] [i_1 + 4] [i_0] [i_1]) & -4557));
                var_24 = (min(var_24, (((-var_2 ^ ((((((arr_2 [i_0]) && (arr_7 [i_0] [i_0] [i_0] [i_0])))) * -var_14)))))));
                var_25 = (245 == (((var_15 <= var_17) ? (var_12 ^ var_7) : (arr_5 [i_4]))));
                var_26 = 1;
            }
            for (int i_5 = 4; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_23 [4] [4] [4] [i_1] = 65535;
                            var_27 = (min(var_27, (arr_19 [i_6] [i_6] [1])));
                        }
                    }
                }
                var_28 += var_8;
            }
        }
        var_29 = ((((((arr_10 [14] [i_0] [i_0] [i_0] [i_0] [i_0]) & var_1))) | (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
        var_30 = (max(var_30, (((((!(arr_20 [8] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((arr_21 [i_0] [3] [i_0] [i_0] [i_0] [i_0] [3]) >> (((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 8207228187438944681)))) : ((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && var_7))))))));
        var_31 = (((((max((arr_8 [i_0] [i_0] [i_0]), var_2)))) <= ((27853 * (max((arr_22 [i_0] [i_0] [6] [i_0]), var_17))))));
    }
    var_32 |= var_17;
    #pragma endscop
}
