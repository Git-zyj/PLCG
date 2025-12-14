/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min(7769807817700530267, 99)))));
    var_21 = ((((!1) ? var_4 : (max(24576, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_22 = (1 + 241);
                            var_23 &= ((-(+-18446744073709551615)));
                            var_24 = (min(var_24, (((~(((56914 >= (min((arr_5 [i_0 + 2]), -553311588164787620))))))))));
                            var_25 = (min(((((var_4 ? (arr_2 [i_0 - 2] [i_0]) : 1)) != ((((arr_11 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 - 1]) ^ (-32767 - 1)))))), (!-2940)));
                        }
                    }
                }
                arr_12 [i_0] = (max((~1), var_6));
            }
        }
    }
    #pragma endscop
}
