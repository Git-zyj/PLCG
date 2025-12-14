/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    var_21 = ((~(!-64)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (((max((max(13940, 418607357)), ((max(48308, -2)))))))));
                var_23 = (min(var_23, ((((((48308 && 201) ? 12 : (arr_0 [i_0] [i_0 + 1])))) ? (((!(arr_3 [i_1] [4] [i_0])))) : (((!(arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_24 = (min(var_11, (((arr_10 [i_0] [i_3 - 1] [i_2]) ? ((((arr_8 [8] [i_3] [i_3]) ? var_12 : (arr_5 [i_0] [i_0 - 1] [6] [6])))) : (~var_14)))));
                            arr_11 [10] [11] [11] [13] [13] [10] = 1099511627775;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        arr_16 [i_4 - 1] = (((((-(min(234, (arr_7 [1] [1] [14] [1])))))) ? (((10 * (arr_2 [i_4 + 1] [i_4] [9])))) : ((-(arr_15 [0])))));
        var_25 = ((-14 ? -64 : 10379532723301793443));
    }
    #pragma endscop
}
