/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((+(((arr_2 [i_0 + 1]) ? 211 : var_11))));
                var_17 = ((-(min(4503599627370495, (arr_6 [i_0])))));
                var_18 = 18442240474082181131;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [1] [i_3] = ((((max((arr_10 [i_0 + 1] [i_0 + 1] [i_0]), (arr_10 [i_0 - 2] [i_0] [i_0 + 1])))) ? (arr_1 [i_0 + 1] [i_0]) : ((~(arr_1 [i_0 + 1] [i_0 - 2])))));
                            arr_15 [i_0] [0] [i_2] [i_0] = 18442240474082181131;
                        }
                    }
                }
            }
        }
    }
    var_19 -= ((-((~(-89 < 4503599627370485)))));
    #pragma endscop
}
