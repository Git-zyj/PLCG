/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((~(var_4 * var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [5] [5] [i_0] [i_0] [10] [i_0] = ((((arr_9 [i_2 - 1] [i_0] [i_2 - 3]) || var_4)));
                                var_17 = (min(var_17, (arr_5 [i_3])));
                            }
                        }
                    }
                    var_18 = (((min((max(-1981087154926511807, var_13)), -var_14))) ? (((9957813318520627832 * 0) << (((max(15, var_11)) - 18446744073709531458)))) : 18446744073709551601);
                }
            }
        }
    }
    var_19 = min(((var_15 ? (var_11 - var_7) : 8488930755188923780)), ((~(min(-1, 10759807521085413025)))));
    #pragma endscop
}
