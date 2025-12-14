/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_3;
    var_13 ^= var_10;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = var_0;
        arr_2 [i_0] [i_0] = (~(((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_15 = (!var_1);

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((-(min((arr_3 [i_1 + 1] [i_0]), (arr_3 [i_0] [i_0])))));
            arr_6 [i_0] [i_0] = (arr_3 [i_0] [i_1]);
        }

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_16 = (((11272626020066306263 * 0) + ((((var_9 && (arr_8 [i_0] [i_2] [i_2])))))));
            var_17 *= (((arr_1 [i_2]) <= (((((!var_1) >= var_6))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_18 = ((+((var_11 ? (arr_15 [i_0] [i_0] [i_0] [i_3] [i_3]) : (var_9 > 16)))));
                        arr_17 [i_2] = var_7;
                    }
                }
            }

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_19 = (max((((((((arr_20 [i_0] [i_0] [i_5] [i_0]) ? var_2 : 58681))) ? (~var_11) : (2118054806846403554 + var_4)))), (max((((arr_7 [i_0] [i_0] [i_5]) ? var_2 : (arr_13 [i_0] [i_2]))), (((!(arr_9 [i_0] [i_2] [i_5]))))))));
                var_20 = (((((((arr_1 [i_2]) ? var_8 : 1)) + (arr_1 [i_5 - 3]))) <= 6857));
            }
        }
    }
    #pragma endscop
}
