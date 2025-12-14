/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_9 & 8176008480159526769);
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 -= (arr_4 [i_0] [i_3] [i_2] [2]);
                        var_18 = (max(((((arr_1 [11]) < (arr_3 [i_0])))), 7));
                        arr_9 [i_0] [i_0] [i_0] [i_2] [2] [i_3] = (arr_7 [i_3] [i_1] [i_0]);
                    }
                    arr_10 [i_0] [i_0] [i_0] = 17848590225872025983;
                    arr_11 [i_0] [i_0] = var_14;
                }
            }
        }
    }
    var_19 = ((var_3 | ((min((max(var_11, -1)), 1)))));
    #pragma endscop
}
