/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_7 || var_4) ? (~929679191079382908) : var_8));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = 929679191079382908;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = (0 ? -2558 : 17517064882630168693);
                        arr_13 [i_1] [i_1] = var_6;
                        arr_14 [i_1] [i_0] [i_1] [i_2] [i_0] = var_9;
                    }
                    var_12 = (!((min(33815, (~929679191079382921)))));
                }
            }
        }
    }
    #pragma endscop
}
