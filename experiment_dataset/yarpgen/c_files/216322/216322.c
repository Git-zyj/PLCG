/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(-var_9, ((((max(399842676, var_2))) ? var_3 : (min(var_10, -8287936361031177024))))));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_2, (((!(((var_10 + (arr_2 [i_0])))))))));
                arr_5 [i_1] = (~var_10);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((((((arr_2 [i_0 + 4]) ? (arr_2 [i_1]) : (((-(arr_1 [i_3]))))))) ? var_7 : (((-14 ? var_6 : (arr_10 [i_0] [i_0] [i_0 + 4] [i_0] [i_1] [i_3])))))))));
                            arr_11 [i_3] [i_2] [i_1] [i_2] [i_0 - 1] = 11;
                        }
                    }
                }
                var_15 = ((((max(var_2, (arr_7 [i_0] [i_1] [3]))))));
            }
        }
    }
    #pragma endscop
}
