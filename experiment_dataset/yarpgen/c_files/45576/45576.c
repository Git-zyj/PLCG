/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [18] [i_0] [i_1] = (max((arr_2 [i_0 + 1] [i_0]), (((222 ? 216 : 239)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, 222));
                            var_14 = ((((((arr_10 [i_0 - 1] [i_0]) ? (arr_11 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : (arr_10 [i_0 + 1] [i_0])))) ? ((((-32767 - 1) >= (arr_1 [i_0])))) : ((~(arr_1 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_15 |= var_10;
    var_16 = (min(var_16, ((min(0, (((!((min(var_0, var_7)))))))))));
    var_17 = ((2147483647 && (!var_2)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_17 [i_4] [6] = ((!(((~(((arr_0 [i_4]) * var_3)))))));
                var_18 = (arr_9 [i_4] [i_5] [i_5]);
                var_19 = (max(var_19, (~79)));
            }
        }
    }
    #pragma endscop
}
