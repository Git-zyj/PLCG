/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = -29536;
                var_17 = (max(var_17, ((max((!15), -29548)))));
                arr_4 [14] [i_1] [i_1] = ((~(((!(arr_2 [i_1] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [5] [5] = ((2147483647 * (((!((((arr_1 [i_3]) ? 2084475201 : var_9))))))));
                            arr_12 [i_3] [i_2] [i_1] [i_0] = (3448139613 == 1);
                        }
                    }
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
