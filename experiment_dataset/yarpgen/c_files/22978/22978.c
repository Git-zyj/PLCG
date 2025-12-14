/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((-(min(var_0, (arr_1 [8])))));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_13 = (min(var_13, (((((max(var_11, (((-2147483647 - 1) ? 9154503550109778060 : (arr_8 [i_0] [i_1] [i_0])))))) ? (max(18446744073709551615, -1954327433)) : ((((max((arr_7 [i_2 - 1] [i_1] [i_0]), 6492717334879473034))) ? -536870911 : ((max(var_4, var_5))))))))));
                    arr_10 [i_0] [8] [i_2 + 1] = 18446744073709551615;
                }
                var_14 = (min(var_14, ((min(((2147483647 >> (1876367765 - 1876367736))), (!65534))))));
            }
        }
    }
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                arr_16 [i_3] = (min((-2147483647 - 1), (min((arr_14 [i_3] [i_3]), (arr_14 [i_3] [i_3])))));
                arr_17 [i_3] [i_4] [i_3] = (max(64874, 6823619784620088982));
            }
        }
    }
    #pragma endscop
}
