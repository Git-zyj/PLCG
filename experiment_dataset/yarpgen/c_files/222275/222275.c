/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(1733734983, var_5))) ? (min(-var_1, var_3)) : var_14);
    var_20 = ((!(((~115) >= var_6))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = max((((2561232299 * 0) * 6434730713889125898)), (((7460 ? 1733734983 : var_9))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_3 - 2] [i_0] [i_0] [i_0 - 2] = ((-var_15 ? var_3 : 255));
                        var_22 = ((((((((var_10 ? var_17 : var_9))) ? 8748712137194867181 : (arr_9 [i_3 - 1] [i_3 + 1] [16] [i_0 - 2])))) ? ((((var_9 ? var_2 : 615709852)))) : (!2561232313)));
                        var_23 = (arr_9 [i_0] [15] [0] [i_3]);
                        var_24 = ((+((-(((-121 + 2147483647) << (2561232299 - 2561232299)))))));
                    }
                }
            }
        }
        var_25 -= 119;
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_14 [i_4] [5] = var_4;
        var_26 = var_5;
    }
    var_27 = var_4;
    #pragma endscop
}
