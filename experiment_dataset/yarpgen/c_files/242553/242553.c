/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((min(5755189785772605609, (arr_0 [i_0])))) << (!12691554287936946006));
        var_13 = max(((var_10 << (((max((arr_0 [i_0]), 700661454991938311)) - 16669165308985646416)))), (max(-12691554287936946010, (!524287))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            arr_13 [i_4] [i_2] [i_2] [i_4] = var_9;
                            var_14 = (((arr_10 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) / (((arr_8 [i_4] [i_0] [i_1] [i_0]) / var_3))));
                        }
                        arr_14 [i_0] [i_1] [i_0] [i_3] = (15 ? (((arr_10 [i_1 - 1] [i_2 + 2] [i_3 - 1] [14] [i_3 - 1]) ? (arr_12 [i_1 - 1] [i_2 + 3] [i_2 + 3] [12]) : var_6)) : ((((var_2 >= (arr_10 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_3]))))));
                        var_15 += 0;
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = var_7;
                    }
                }
            }
        }
    }
    var_16 ^= var_1;
    var_17 *= var_8;
    var_18 = min(((((max(var_6, 12691554287936946007)) > (max(var_9, 392556992292548988))))), var_12);
    var_19 *= var_2;
    #pragma endscop
}
