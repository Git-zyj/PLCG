/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = (min(var_16, ((max(8309, var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 = (arr_9 [i_0] [i_3]);
                        var_18 &= (arr_6 [18] [i_1]);
                    }
                    arr_10 [i_0] [i_0] = ((-(((((!(arr_5 [i_0]))) && (((arr_6 [i_0] [i_0]) || 1)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] = (arr_12 [i_4]);
                var_19 *= -2;
                var_20 = (arr_11 [i_4] [5]);
                var_21 = (arr_11 [i_4] [i_5]);
            }
        }
    }
    #pragma endscop
}
