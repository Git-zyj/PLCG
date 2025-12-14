/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_5 [i_0 - 2] [i_1] [i_1])));
                var_12 &= (arr_1 [i_0 - 2] [i_0 - 1]);
                arr_6 [i_1] [i_0] [i_0 - 2] = (((arr_2 [i_0 - 1] [i_0 - 2] [i_0 - 1]) / (arr_4 [i_0 + 1] [i_0 + 1] [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 ^= (((((arr_5 [i_2 - 1] [i_1] [4]) ? (arr_7 [i_0] [i_0 - 1]) : ((((18446744073709551615 > (arr_12 [i_0])))))))) ? (arr_4 [8] [1] [i_2]) : -1);
                                var_14 = (min(var_14, (((~(((((1 ? var_9 : (arr_11 [i_0 + 1] [i_1] [i_4])))) ? (var_0 >= 65535) : (arr_9 [i_2 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
