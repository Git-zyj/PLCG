/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    var_20 &= (var_9 > var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((min(0, -8023))) || ((((arr_2 [i_0]) - 16928510890166915524)))));
                    arr_8 [i_0] [i_1] [i_0] = (min(var_3, (((((16928510890166915528 ? 1518233183542636116 : 2147483647)) > (min(var_10, 18806)))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [8] [0] [0] [i_3] &= 27657;
                        var_21 = (min(var_21, (((((min(-1, -8023))) ? 5 : 238)))));
                    }
                    arr_13 [i_1] = (((14725464905777905296 ? 65523 : 18811)));
                    var_22 = ((((max((-1709717838 + 18820), -1709717857))) & 3721279167931646333));
                }
            }
        }
    }
    #pragma endscop
}
