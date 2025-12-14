/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (min(((~(~var_12))), ((((max((arr_2 [i_2] [i_1] [i_0]), 896))) * var_5))));
                    arr_9 [i_0 - 3] [i_0 - 2] [i_1] [19] = (1476098752841899133 ? (arr_2 [i_0 - 3] [i_1 + 2] [i_2 - 1]) : (max(10282327860730885233, ((min((arr_5 [i_0 - 2] [i_0 - 2] [i_2 + 1]), var_0))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_14 = ((54652 ? 32768 : 0));
                        var_15 = (arr_0 [i_0]);
                        arr_19 [1] [i_3] [i_3] = (((arr_14 [i_0] [i_3] [i_0]) ? (((arr_14 [i_0 + 3] [i_3] [i_5]) / (arr_14 [i_4 - 4] [i_3] [i_0]))) : (~1434)));
                        var_16 = (max(1, (max(((1 ? 7088077086116124987 : 192)), var_4))));
                        arr_20 [1] [i_3] [i_3] [i_3] = ((((1 ? 2173747799 : 3893416243745693170)) << (min(((((arr_0 [i_0]) && 12807))), 1476098752841899120))));
                    }
                }
            }
        }
        var_17 = 0;
        arr_21 [i_0] [i_0 - 1] = 3;
    }
    var_18 = (max(var_18, (~-12809)));
    #pragma endscop
}
