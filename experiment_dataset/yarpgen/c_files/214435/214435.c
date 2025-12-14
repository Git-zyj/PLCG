/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (((!(((-55695894252557615 ? (var_11 > 493820138525482357) : -9223372036854775788))))))));
                        arr_11 [0] [i_1] [i_2] [i_3] [i_3] = 127;
                        var_21 = (((arr_0 [i_0]) ? ((118 | ((6 & (arr_10 [i_0] [i_0]))))) : 17952923935184069248));
                    }
                }
            }
            arr_12 [i_1] [i_1] = (((((-(arr_5 [i_0] [i_1] [i_1])))) ? (max((min(493820138525482378, 493820138525482350)), 493820138525482347)) : ((((493820138525482350 >= (arr_5 [i_0] [i_1 - 2] [i_1 - 3])))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_15 [i_4] [i_0] = ((arr_10 [i_0] [i_4]) - 493820138525482356);
            arr_16 [10] [i_4] = (~var_16);
        }
        arr_17 [i_0] [i_0] = ((!(~-469972008)));
        arr_18 [i_0] = ((var_12 << (((arr_8 [i_0]) + 6188737747253537404))));
    }
    var_22 = (((((((((-127 - 1) >= -117)))) % ((var_5 ? var_9 : var_10)))) + 96));
    var_23 = ((var_10 | (max(var_7, 5571128291820632599))));
    #pragma endscop
}
