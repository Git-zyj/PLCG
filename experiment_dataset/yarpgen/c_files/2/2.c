/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((var_3 ? ((var_7 ? var_6 : (((var_7 ? 23 : var_2))))) : ((((var_4 + 2147483647) << (var_3 - 412624330926489205))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 - 2] = (((+(((arr_2 [i_0] [i_0]) - var_11)))) >> (((((arr_2 [i_0] [i_1 + 3]) / 102)) - 8597336906654519)));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 = (((~-1) >= 229229572154164597));
                    arr_7 [7] [i_1 + 1] [1] [i_2] |= (arr_3 [i_0 + 1] [i_1 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
