/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((max(((max((arr_2 [i_1]), 1))), (((var_9 | 0) | (((-6 == (arr_0 [1])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_2] [i_2] = ((-((-1 ? (arr_8 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_8 [i_2 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                            var_11 = ((-2953070250180219897 || ((min(-22, 18446744073709551615)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] = (((arr_1 [i_0]) ? (1741985189 <= 2991605123649083870) : (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            arr_18 [i_0] [i_0] [i_0] [i_5] = (arr_12 [7] [i_1] [i_4]);
                        }
                    }
                }
            }
        }
    }
    var_12 = 2552982083;
    var_13 = 18446744073709551615;
    #pragma endscop
}
