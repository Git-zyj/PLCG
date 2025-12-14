/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 |= (((arr_1 [i_0] [i_1]) <= 1795505591));
                var_21 |= arr_2 [i_1] [7] [i_1];
                var_22 = (min(var_22, (arr_2 [i_0] [i_0] [i_0])));
            }
        }
    }
    var_23 = var_8;

    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_24 = arr_7 [i_2] [i_2];
        var_25 = ((!(arr_5 [i_2])));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_26 = max(var_13, (~var_17));
                    var_27 = ((((((max(var_17, (arr_4 [5]))) & (arr_2 [i_5] [1] [i_3])))) && ((((var_13 > var_11) ? (((var_5 && (arr_1 [i_3] [i_5])))) : (arr_4 [i_4]))))));
                }
            }
        }
        var_28 ^= var_19;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_29 = (arr_12 [i_3] [i_6] [i_6] [i_7 + 3]);
                    var_30 = ((!((max(var_15, (arr_17 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
