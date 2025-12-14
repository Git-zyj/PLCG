/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (min(var_3, ((-(arr_3 [i_0] [i_0])))));
                var_12 *= ((0 ? 0 : 0));
                var_13 = (min((!var_9), (min((arr_2 [i_1] [i_0]), -0))));
                var_14 = (((((16882131863808971715 ? (arr_2 [i_1] [i_0]) : (arr_2 [i_1] [i_0])))) ? ((var_10 ? (!0) : 3)) : ((((((arr_3 [i_0] [i_0]) ? (arr_1 [i_1] [i_0]) : var_4))) ? (arr_4 [i_1]) : (var_10 / var_4)))));
            }
        }
    }
    var_15 = (var_6 * var_0);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2] [i_4] [i_5 + 2] = ((!((max(-21783, (arr_11 [i_4 - 3] [i_4 - 3]))))));
                            var_16 = (!(5269908663695666208 + var_9));
                        }
                    }
                }
                arr_17 [i_2] [i_2] [i_2] = -21547;
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
