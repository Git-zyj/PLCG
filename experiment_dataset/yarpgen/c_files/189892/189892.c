/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_11 = arr_10 [i_0] [i_0] [9] [i_3];
                        var_12 = (min(var_12, ((((((arr_1 [i_2 + 1] [i_3]) ? (arr_10 [i_2 - 1] [i_1] [i_1 - 2] [i_3]) : (arr_10 [i_2 + 1] [i_1] [i_1 - 2] [i_2 + 1]))) > ((((arr_1 [i_2 - 1] [i_3]) ? 22830 : (arr_1 [i_2 - 1] [i_3])))))))));
                        var_13 = min((arr_8 [i_0] [i_0] [i_0] [18]), ((((min(var_9, (arr_3 [i_3] [i_0])))) ? (arr_3 [6] [i_0]) : 46483)));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = arr_2 [i_0] [i_2];
                    }
                    arr_12 [i_0] = 18446744073709551593;
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
