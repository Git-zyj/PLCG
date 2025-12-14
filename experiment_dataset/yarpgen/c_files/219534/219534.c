/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (var_8 - var_0);
                var_21 = max((((arr_1 [i_0 - 1]) ? (arr_1 [13]) : var_18)), ((((arr_2 [i_0 + 1]) ? var_9 : (((102 > (arr_1 [1]))))))));
                var_22 -= (((max(8, 0))));
                var_23 = ((((-((var_6 ? 1772899909 : var_18))))) ? 153 : (((0 ? 102 : var_19))));
            }
        }
    }
    var_24 = ((16385821517708124476 * 1772899909) ? (!var_15) : (1583223973 > -2125639462));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [1] [14] [6] [14] = 1;
                            var_25 = (((((max(var_15, var_13)))) ? (arr_11 [18]) : var_1));
                            arr_18 [19] [5] [21] [16] [17] = (max(-1772899910, (((((-3487575058595548941 ? var_7 : 1))) ? var_14 : (arr_16 [i_5 - 1] [1] [1] [i_5 - 1] [2])))));
                            arr_19 [17] [4] = (max((arr_6 [14]), var_3));
                        }
                    }
                }
                arr_20 [1] = (1 || 8010482884325177377);
                arr_21 [0] = 1772899910;
            }
        }
    }
    #pragma endscop
}
