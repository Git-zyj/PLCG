/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (-(min(332835118, ((min(13634, 13628))))));
    var_13 = var_5;
    var_14 = ((102 ? var_6 : var_2));
    var_15 -= (!var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (((154 ? 0 : (((1907359907 > (min((arr_13 [i_3] [1] [4] [i_3] [i_0]), var_9))))))))));
                                var_17 *= ((((((arr_13 [i_0] [i_4] [i_4] [i_4 - 1] [i_0]) % (arr_13 [i_0] [i_4] [i_4 + 2] [i_4 + 2] [i_0])))) && ((((var_3 || (arr_0 [7] [i_1])))))));
                                var_18 -= 970892214;
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = (~(var_6 / 209));
                                arr_17 [i_4] [i_4] [i_3] [i_2] [i_2] [i_4] [i_0] = (1366468342 < 13926719033122680519);
                            }
                        }
                    }
                }
                var_19 -= 3;
                var_20 = ((+(((-7665 + 2147483647) >> (-41891481 + 41891493)))));
            }
        }
    }
    #pragma endscop
}
