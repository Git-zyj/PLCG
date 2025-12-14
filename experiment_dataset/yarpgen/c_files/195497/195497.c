/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((((!(!28534))) ? var_15 : (((arr_4 [i_0 + 1] [i_2 + 1] [i_2 + 1]) ? var_2 : 1))));
                    var_20 &= (((-(arr_3 [i_2 + 2] [i_0 + 1] [i_0 + 1]))));
                    var_21 = (0 == ((((min(-9057, 0))) ? (~14953) : (arr_0 [i_0 + 1] [i_0 + 1]))));
                    arr_7 [1] [i_1] [i_2 - 2] |= ((((arr_3 [i_2] [i_0 - 1] [i_0]) - (arr_3 [1] [i_0 + 1] [i_0]))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] = (min((max((5706 >> 1), (arr_3 [i_2 - 2] [i_0 + 1] [i_0 + 1]))), var_2));
                        var_22 = (!(~11547));
                        arr_11 [i_0] [1] &= var_18;
                    }
                }
            }
        }
    }
    var_23 = (min(-11188, -var_16));
    var_24 = (max((min(var_17, 1)), (-12608 / -9896)));
    #pragma endscop
}
