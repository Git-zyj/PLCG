/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3985004013;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = 309963282;
                                var_20 = ((3985004013 ? (!3985004018) : ((-71 * (arr_8 [i_0] [i_0 + 1] [i_0 + 4] [i_0])))));
                                var_21 = ((-(2144140175 + 0)));
                                var_22 += 3985004010;
                                var_23 = (max(var_23, 309963283));
                            }
                        }
                    }
                    arr_13 [i_0] [1] = (((((764827386 ? (arr_11 [i_0 + 4] [3] [3] [i_2] [i_0] [i_0 + 3] [3]) : (arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0 + 1] [i_2])))) ? ((((((arr_11 [i_0] [4] [4] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 3]) + 2147483647)) << (3985004015 - 3985004015)))) : var_5));
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((((max(var_10, 25670)))) - (max((var_11 || 3985004018), (((arr_2 [i_0] [i_0]) % 309963282)))));
                }
            }
        }
    }
    var_24 = (!3985004018);
    var_25 ^= (min((((((18446744073709551615 ? -11155 : (-32767 - 1)))) ? 8767 : (3985004012 > 0))), ((((min(11, var_2))) * var_11))));
    #pragma endscop
}
