/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((max(var_1, (arr_0 [i_0] [i_1 - 2]))) * var_17)) - 3483));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_18 ^= ((var_15 != ((((arr_5 [i_1] [i_0 + 1]) < (arr_2 [i_1 + 1]))))));
                    arr_8 [i_1] [i_0] = (min((max(var_12, (arr_1 [i_0] [i_0]))), (((((var_9 ? 1 : 24901)) == 1)))));
                    var_19 = (~2358965769);
                }
                var_20 = (((12 ? (arr_1 [i_0] [i_0]) : 128988700)));
                var_21 = var_0;
            }
        }
    }
    var_22 = max(var_17, var_15);
    #pragma endscop
}
