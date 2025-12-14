/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 5839;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_21 = ((-(min(((var_19 ? var_5 : var_5)), (arr_5 [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_22 += ((var_10 ? (((-1644576621 || -5839) / -1644576621)) : (arr_5 [i_0] [1] [i_0])));
                            arr_13 [i_0] [8] [i_2] [i_3] [i_2] [i_2] |= (min((((var_13 & (arr_7 [i_3] [i_2] [1])))), (!1107016732)));
                            arr_14 [i_2] = 18446744073709551615;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
