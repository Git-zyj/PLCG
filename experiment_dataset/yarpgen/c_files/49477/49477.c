/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((((((var_3 <= var_6) ? (((var_0 + 2147483647) >> (var_10 - 43897))) : ((9 ? var_5 : var_7))))) ? ((var_2 ? (((min(0, 1)))) : (~-5))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min((((arr_6 [i_0] [i_1] [i_2]) ? var_2 : 15)), ((~(arr_7 [i_1] [i_1] [i_1] [i_1])))));
                    var_17 = (arr_0 [15] [i_1]);
                }
            }
        }
    }
    var_18 = (~var_1);
    var_19 = (min(var_19, (((105 ? 5 : 0)))));

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_20 = (min(var_20, (((var_4 ? (((arr_0 [i_3] [i_3]) ? -84 : (max((arr_6 [i_3 + 1] [3] [i_3 + 1]), -1250866986)))) : (((((5578111 ? (arr_8 [2]) : var_5)) <= (((max(111, var_5))))))))))));
        var_21 = (arr_4 [i_3] [i_3]);
        arr_10 [i_3] = (arr_0 [i_3] [8]);
    }
    #pragma endscop
}
