/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = (min(((max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 - 1])))), (arr_3 [24] [i_1 + 1])));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_17 = max((arr_1 [i_2 - 1] [i_3 + 4]), (((~((min(15806, 15806)))))));
                        arr_13 [i_0] [i_1] [i_1 - 1] [i_1] [i_2 - 2] [i_1] = (((2951841797 ? -565529795 : 106)));
                        arr_14 [7] [i_1] [i_2 + 1] [i_3] [i_3] = ((120 ? (arr_11 [i_1] [i_1 + 1] [21] [i_1]) : 1));
                        var_18 = ((~(((((-55 ? (arr_0 [i_1]) : (arr_1 [16] [i_1 - 1])))) ? 2013160841 : (arr_7 [i_0] [i_1] [i_3 + 2])))));
                    }
                }
            }
        }
    }
    var_19 = 2013160841;
    #pragma endscop
}
