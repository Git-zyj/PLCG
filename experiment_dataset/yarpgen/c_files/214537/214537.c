/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((max((var_9 * var_5), -2048)), var_0));
    var_13 = ((~(max(3132, var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [7] [7] = (arr_0 [i_0]);
                    arr_10 [17] [i_1] [i_0] = (+((((((arr_4 [i_0] [i_0]) & (arr_6 [i_0] [i_1] [i_2])))) ? (arr_2 [i_0] [i_1]) : (~2147483647))));
                    var_14 = (min(var_14, ((((((var_3 >> (((arr_3 [i_0]) - 44690))))) ? (((max((arr_7 [i_0] [i_2] [i_2] [i_2]), var_2)) * ((((arr_3 [i_0]) * (arr_8 [i_2] [i_2] [i_0])))))) : (8191 || -16))))));
                    var_15 = min(0, ((max(96, 0))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 += ((((((-((17647 * (arr_11 [i_3]))))) + 2147483647)) >> ((8196 ? 0 : 1))));
                    var_17 = ((((-4611686018427387840 << ((((arr_8 [i_0] [i_1] [i_3]) == 11222))))) * var_2));
                }
                arr_13 [i_0] [i_1] = (65535 - 0);
            }
        }
    }
    #pragma endscop
}
