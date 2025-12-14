/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3072;
    var_13 |= ((var_11 != ((~(min(var_11, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_14 = (max(((~(max(3072, (arr_1 [i_0] [9]))))), 1915790527));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_15 |= (((arr_4 [i_0 - 1] [i_1] [i_0 - 1]) >= (((((var_11 ? 3072 : var_4))) ? (((13773015539144998673 ? (arr_0 [i_1]) : var_8))) : (min(var_9, 18))))));
                            var_16 = ((-(((arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_2] [i_1 + 2] [i_1]) ? 46145 : ((max((arr_10 [i_1 + 2]), -75056925615958229)))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (max(((((-3066 + 2147483647) << (3066 - 3066)))), 0));
    #pragma endscop
}
