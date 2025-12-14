/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_17 += var_8;
                        arr_10 [i_0] [i_1] [i_0] [i_3] [14] = (((arr_0 [i_1]) ? (arr_2 [i_0]) : 117440512));
                        var_18 = (max(var_18, ((((845849009 && 1891) ? var_4 : (~-var_4))))));
                        arr_11 [i_0] [i_1] [13] = (var_15 < var_2);
                    }
                }
            }
        }
        var_19 += (max(var_1, 0));
        var_20 = max(((var_7 - (arr_5 [i_0] [i_0] [i_0]))), (max(var_10, 3)));
    }
    #pragma endscop
}
