/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0 + 3]) ^ ((((min(121, 8)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = ((var_12 | (max((arr_8 [i_0] [i_2] [i_0 + 2] [i_0 + 2]), var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_0 + 3] [i_0 - 2] [i_0] = (max(-2066364489554367043, (arr_15 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_0])));
                                var_14 = ((1 || ((!(~var_2)))));
                                var_15 = min((arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [i_0]), var_0);
                                var_16 = (max(var_5, (((((-126 ? 15741797479002456587 : 1))) ? var_2 : var_5))));
                                var_17 = 37071;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (((1 ? 1 : -1970061124)));
    var_19 -= 222;
    var_20 = var_3;
    #pragma endscop
}
