/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (((((arr_2 [1] [i_3] [i_3]) ? -58606987 : (min(-946077771, (arr_13 [1] [i_1] [i_2] [i_3] [0])))))) ? 1318624269 : ((((var_5 ? (arr_2 [i_0] [6] [6]) : var_1)))));
                                arr_15 [i_0] [i_1] [i_2] [i_4] [i_3] = 179;
                                var_14 = var_1;
                                var_15 = (min(var_15, 7349));
                            }
                        }
                    }
                }
                var_16 = ((+(((arr_5 [i_1] [i_1 - 4] [i_1]) ? (arr_5 [10] [i_1 - 2] [i_1]) : var_3))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_20 [i_5] = 8537333674057541511;
                            var_17 ^= 255;
                            var_18 = ((-16367 ? (((18446744073709551615 ? (arr_9 [7] [i_1 - 4] [i_5 - 1]) : 3849))) : ((-(arr_1 [i_1 - 2])))));
                            var_19 = (min(var_19, 21430));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((((var_4 ? 4 : var_9))) || (4676597864964255858 ^ 255))) ? var_6 : ((var_12 ? 2147483647 : ((var_8 ? 1 : 176))))));
    var_21 = var_9;
    #pragma endscop
}
