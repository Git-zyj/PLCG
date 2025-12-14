/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (((((min(var_9, var_1))) ? ((var_3 ? -846290242 : 8236476858532568215)) : (((max(var_7, -53)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = (((min(524287, (((arr_4 [i_0 - 2]) ? (arr_4 [i_1]) : 33554432)))) != ((((max(4294443009, (arr_1 [i_2])))) ? (((arr_5 [i_2 - 1]) ? -4 : 4294443003)) : var_5))));
                    var_14 = 524293;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = ((var_0 ? -8113 : (((144115188075855871 || ((((arr_9 [i_0]) ? var_10 : var_7))))))));
                            var_16 = ((((max((arr_15 [i_0 - 3] [i_0] [i_4 - 1]), (arr_15 [i_0 - 3] [i_0] [i_4 - 2])))) || (((18446744073709551615 ? 4294443003 : (min(1, 4294443008)))))));
                            arr_16 [i_0] = (((((var_10 ? (arr_6 [i_0 - 2]) : (arr_12 [i_0])))) ? (((arr_12 [i_0]) ? (min((arr_9 [i_0]), (arr_7 [i_4 - 2] [i_1] [i_3]))) : (var_0 % 175506003))) : (((((((arr_11 [i_0]) + var_6))) ? 4294443008 : var_3)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
