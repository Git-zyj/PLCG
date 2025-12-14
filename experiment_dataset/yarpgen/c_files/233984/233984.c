/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (14588 / var_1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((min(((min(16352, (arr_1 [i_1] [i_1]))), (var_9 | 337704079))))))));
                var_13 = (min(var_13, ((((0 | -472224209) <= (max((arr_3 [i_0]), ((var_9 ? -472224227 : -14588)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_3 + 1] [i_3 - 1] [1] [i_3] [i_3] = -472224209;
                            var_14 = (((((((min((arr_0 [i_0 + 1]), (arr_1 [i_0] [1]))))) <= (min(8707399107785979083, var_5)))) ? ((-472224209 ? (~7) : (((arr_5 [i_0] [i_2] [i_2]) ? 14572 : (arr_6 [i_0] [9] [i_2]))))) : ((((arr_3 [i_0 - 1]) / -14573)))));
                            arr_10 [i_2] [i_1] [4] = ((4294967295 ? 2228841420 : 5522514692728030509));
                        }
                    }
                }
                arr_11 [i_0] [10] [i_0] = (max((((min((arr_0 [i_0]), 1152921487426977792)))), ((-18446744073709551610 & ((min(var_3, var_10)))))));
                var_15 = ((29599 ? (max((arr_3 [i_0]), ((37 ? var_5 : -1888035600)))) : (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_18 [i_4] [i_5] [i_5] [i_6] = (min((((((arr_12 [i_5]) ? (arr_16 [i_5] [i_4]) : var_1)))), -7306810213464764752));
                    var_16 = ((((max((arr_15 [i_4] [i_5]), var_7))) ? (!14572) : (max((-9223372036854775807 - 1), ((min(1, 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
