/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((((max(var_0, 18173))) ? var_3 : var_13))) >= (max(((47362 ? var_15 : 27)), (((var_4 ? var_3 : 47363))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 += ((18168 + (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            arr_12 [14] [i_1] [i_1] [i_4] [9] = ((~(arr_10 [i_0] [i_2] [i_2] [i_3] [i_4 - 2])));
                            var_21 = 18445618173802708992;
                        }
                        var_22 = (!var_6);
                    }
                }
            }
        }
    }
    var_23 = ((-18159 ? var_10 : 18163));
    #pragma endscop
}
