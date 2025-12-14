/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_4 ? 3 : var_4))) ? (max(var_13, 9223372036854775807)) : (((min(1, var_7)))))) < var_9);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_1] [i_0] [i_0] [i_2 - 1] [i_0] [i_1] = (((-9223372036854775807 - 1) | (12696 | 3269766815186430824)));
                        var_18 -= ((min(((((arr_1 [i_0]) ? 5150 : (arr_0 [i_3] [i_2])))), ((var_9 ? var_14 : 4521704650811163251)))));
                        arr_10 [i_1] [i_2] = (((((!((min((arr_1 [i_3 - 3]), var_3)))))) == 1));
                        arr_11 [i_0] [i_1] [i_2] [i_3 + 1] = ((((((arr_6 [i_3] [i_0] [i_3] [i_3] [i_0 + 2] [i_0]) * (arr_5 [i_1] [i_1])))) ? (((arr_5 [i_1] [i_1]) * (arr_6 [i_3] [i_3] [i_2 + 4] [i_2] [i_0 + 3] [i_0]))) : (max(5150, (arr_5 [i_1] [i_1])))));

                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_0] = (18446744073709551608 || 30429);
                            var_19 = ((((((arr_6 [i_0 - 2] [i_0] [i_1] [i_2] [i_3 + 1] [i_4]) ? (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_0] [i_0]) : 62))) && ((max((((arr_5 [i_0] [i_1]) | 7705070747593390855)), (-32767 - 1))))));
                            var_20 -= ((((arr_1 [i_0 + 3]) >> ((((885090413954077169 ? 3646954357720402823 : 3)) - 3646954357720402816)))));
                            arr_17 [i_1] [i_4] = ((!(arr_8 [i_2] [i_1] [i_4] [18] [i_4 - 4] [i_4 + 1])));
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((((min(193, 0)))) * (16131938748482085604 % var_15))))));
    }
    var_22 &= ((var_13 < (((((116 ? 9223372036854775807 : 5654062564378062046))) ? var_10 : (var_14 >> 0)))));
    #pragma endscop
}
