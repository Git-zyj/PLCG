/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = var_0;
                var_16 = ((+((((arr_2 [1] [i_0] [i_0]) && 0)))));
                var_17 *= ((((((((((arr_1 [i_0]) < (arr_1 [i_0]))))) % ((~(arr_2 [14] [i_0] [13])))))) || ((!(arr_3 [6] [5])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_9 [i_3] [i_3 + 2] [i_2] = max(1, 0);
                arr_10 [i_2] [14] = (max(((max(36, (arr_7 [i_3 + 2] [i_3])))), (((((arr_7 [11] [i_3]) / (arr_5 [i_2]))) * var_0))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_17 [20] [i_3] [20] [i_2] = ((((((!var_6) ^ (max(-2026738400, 8))))) ? (((((min((arr_7 [1] [1]), 6073166789933922622))) ? ((((arr_12 [18] [i_3]) && (arr_13 [i_2] [2] [17] [i_5])))) : -1079756459))) : var_9));
                            var_18 = arr_15 [i_2] [i_2];
                            var_19 = ((!((min((((var_7 && (arr_11 [i_2] [15] [22])))), -2026738407)))));
                            arr_18 [i_2] [1] [i_4] [1] [i_2] [1] = 2147483647;
                        }
                    }
                }
                var_20 &= min((((max(38, var_11)))), (!-41052865));
                arr_19 [1] [18] [i_2] = 239;
            }
        }
    }
    #pragma endscop
}
