/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_11 = ((!(arr_1 [i_0] [4])));
                var_12 = ((((min((arr_1 [i_0] [i_1 + 1]), var_6))) ? (((8840313619649858519 ? 32160 : 186))) : (arr_4 [i_1 + 1] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_13 = min(var_0, (((9606430454059693097 > 1) ? (arr_8 [i_1] [7]) : var_10)));
                                var_14 = (((((7214088225209392304 ? var_8 : 9606430454059693097))) ? ((~(arr_12 [i_1 - 4] [i_1 + 1] [6] [i_1 - 4] [i_1] [i_1 - 3]))) : 59359));
                                var_15 = (max(var_15, (~var_10)));
                                var_16 = (min(var_10, (arr_15 [i_2 + 3] [i_2 + 2] [i_2 + 4] [i_2 + 4] [i_2 + 2])));
                                var_17 = (arr_13 [i_0] [i_0] [i_2] [i_3] [8] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_3 ? var_9 : var_4));
    #pragma endscop
}
