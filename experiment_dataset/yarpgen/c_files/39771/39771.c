/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (((min((-32747 * 0), (-1500066943 <= 1316175815584680035))) - (max(var_17, var_16))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((+((((arr_2 [i_0] [i_1]) >= (arr_2 [i_0] [i_1]))))));
                    arr_7 [i_1] [i_1] [i_1] [i_1] = ((((max(((((arr_6 [i_0] [i_1] [i_2]) <= 36428))), (max((arr_3 [i_2] [i_1] [i_0]), 1558436063))))) ? (min(7386830866168656095, 127)) : (arr_4 [i_1])));
                    arr_8 [i_0] [i_1] [i_1] = (((arr_0 [i_1]) / (arr_2 [i_0] [i_1])));
                }
            }
        }
        arr_9 [8] [8] = (((arr_3 [5] [i_0] [i_0]) ? (min((~var_14), var_11)) : (arr_5 [8] [i_0] [i_0] [8])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] = 534773760;
        arr_15 [i_3] = (min(246, (arr_0 [i_3])));
    }
    #pragma endscop
}
