/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(~var_10)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = (!var_11);
                    var_14 *= var_11;
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (!var_11);
                    var_15 = (max(var_15, (((var_1 ? (!0) : ((var_0 ? var_9 : var_8)))))));
                    var_16 *= ((1 ? 1835008 : 979));
                }
            }
        }
        arr_9 [i_0] [i_0] = (!var_10);

        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_17 = -var_10;
                var_18 = ((var_5 ? var_3 : var_10));
                var_19 = (!var_3);
                arr_14 [i_0] [13] [i_0] = (!var_9);
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_20 |= (((((var_10 ? var_2 : var_7))) ? (!var_3) : ((var_12 ? var_4 : var_4))));
                arr_18 [i_0] [i_0] = (!var_12);
            }
            arr_19 [i_0] [i_3] = (((!var_9) ? var_2 : var_8));
        }
    }
    #pragma endscop
}
