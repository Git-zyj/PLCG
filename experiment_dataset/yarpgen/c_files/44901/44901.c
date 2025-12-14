/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 & ((4048496519 ? 3147079849180137163 : 32764))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (((((((((arr_10 [i_0] [i_1] [i_0] [i_3]) ? -3147079849180137169 : var_7))) ? (min((arr_8 [4] [0] [4]), 3757689056)) : var_1))) | ((112293249880668525 ? (~3147079849180137163) : (arr_9 [i_0 + 2] [i_0 + 2])))));
                        var_18 -= ((((arr_10 [i_0 - 1] [i_0] [i_0] [i_0]) | (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2]))));
                        arr_12 [i_1] [i_1] = (1152921504338411520 == 0);
                        var_19 = (((max(11969775278848300317, (((32746 ? 2652546861 : 4294967295))))) % (((((2070469686 ? 30450 : var_14))) ? var_13 : (((arr_2 [i_0 + 2] [i_0 + 2]) ? 2130706432 : var_12))))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] = var_9;
            arr_18 [i_4] = (max(127, (min(var_0, (min(var_8, 15))))));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_20 = (~var_2);
            var_21 = arr_15 [i_0] [i_0] [12];
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_22 = ((var_2 ? var_0 : (arr_20 [i_0 + 1] [7] [i_6])));
            var_23 = ((17557 ? (~var_8) : -107));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_29 [i_8] [i_8] = ((((var_10 ? (arr_15 [i_8] [i_7] [i_8]) : (arr_26 [i_0] [i_0 - 1])))) ^ (4294967295 ^ 65533));
                var_24 = ((((((-(arr_22 [5]))))) + (max(((min((arr_2 [i_7] [i_0]), var_0))), (arr_3 [i_0] [12] [i_8])))));
                arr_30 [i_8] [i_8] [i_8] [i_8] = var_2;
                var_25 ^= var_8;
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_26 = (min(var_26, 5543506214492811836));
                            var_27 = (arr_25 [i_0] [i_0 + 2] [16]);
                            var_28 -= 3147079849180137155;
                        }
                    }
                }
            }
            arr_37 [1] [i_0] = (((-(((!(arr_23 [i_7])))))));
        }
        var_29 = ((41663 % (((!17338921110895436092) ? (min(-27862, 5894746665316452162)) : 80))));
        var_30 = -var_5;
    }
    #pragma endscop
}
