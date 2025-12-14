/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_13 [0] [i_0] [i_2] [i_0] [i_0] |= (((arr_1 [2]) ? ((((min((arr_0 [i_0] [i_2]), (arr_1 [i_1])))))) : (min(var_8, var_7))));
                                var_17 = ((((!(arr_0 [i_3] [i_2]))) || ((min((arr_3 [i_3] [i_4]), var_6)))));
                                var_18 = (max(var_18, var_16));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                arr_16 [i_1] = (!(((((min(23860, (arr_4 [9] [i_3] [9])))) * ((0 ? 3328251929 : 3739425808))))));
                                var_19 *= (arr_8 [i_5] [i_3] [i_5] [i_5] [i_1] [i_0]);
                                arr_17 [i_0] [7] [i_1] [i_2] [i_3] [i_1] [i_5] = ((~((960 * ((min(var_15, 79)))))));
                            }
                            arr_18 [3] [i_1] [3] [i_2] [i_1] = ((((min((((!(arr_14 [4] [i_1] [i_2] [i_2] [i_3])))), (var_2 - var_3)))) ? (~var_12) : ((((((arr_11 [1] [i_3]) ? var_10 : 48))) ? 49 : 15408791743309964095))));

                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                var_20 |= (arr_4 [5] [1] [i_3]);
                                var_21 = (min(var_21, (0 / 8817898761933817471)));
                            }
                            var_22 = (max(var_22, ((min(((max(var_16, var_5))), ((max(var_12, -var_2))))))));
                            var_23 = (((~var_6) >= (((((var_0 ? 2147483647 : (arr_7 [i_0] [i_0] [i_1] [i_0] [i_0])))) ? var_2 : (arr_14 [10] [i_1] [4] [i_2] [i_3])))));
                        }
                    }
                }
                var_24 = (min(var_9, (min(var_3, (arr_15 [8] [i_0] [i_0] [2] [6])))));
            }
        }
    }
    var_25 = 24474;
    #pragma endscop
}
