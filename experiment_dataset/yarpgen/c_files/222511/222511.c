/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 |= var_5;
                var_20 &= arr_5 [i_1];
                var_21 += var_1;
            }
        }
    }
    var_22 = var_13;
    var_23 = (4710266546606441539 || 5082345351183273642);
    var_24 = (~7752724549056437638);
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_15 [i_5] [i_3] [i_3] [i_3] = (!10329202853244205129);
                        arr_16 [i_2] [i_3] [i_4] [15] = var_15;
                    }

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (min(var_25, 5082345351183273644));
                        var_26 |= (~(var_12 >> var_3));
                    }
                    var_27 = (5082345351183273654 != -8508801232632041968);
                }
            }
        }
    }
    #pragma endscop
}
