/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (245 > 32764);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_2 - 1] &= (((max((arr_0 [i_2 + 1] [i_0 + 4]), (arr_7 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) * (((((arr_0 [i_0 + 2] [i_3]) >= (arr_7 [i_0 - 1] [i_2 - 2] [i_1] [i_0 - 1])))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (max(((0 >> (32760 - 32736))), ((((904145471 < (arr_8 [i_0] [i_0] [i_2] [i_0])))))));
                            arr_11 [i_0] [i_1] [i_0] [i_2 - 1] [i_0] = (((62930 < 52743) >= 4356));
                            var_15 = 17;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
