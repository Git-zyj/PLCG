/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_5));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, var_5));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((-733492092 ? -39829 : 1))) ? ((-var_9 ? ((min(var_4, 60236))) : (((arr_4 [i_0]) ? var_12 : (arr_6 [i_0] [4] [i_0]))))) : (((min(var_2, (arr_8 [i_0] [i_1 - 3] [i_1 - 3]))))))))));
                    var_21 = (min((~47927), (arr_7 [i_2] [i_1] [i_2])));
                    var_22 = ((-(((!(arr_2 [i_1 - 1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (-465838371 + 1);
                                var_23 = (max(var_23, 60238));
                            }
                        }
                    }
                    var_24 = 1;
                    arr_19 [1] |= 9223372036854775797;
                    var_25 = (arr_2 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
