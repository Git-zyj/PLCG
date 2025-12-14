/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(542939163, 65535)) | (65521 > 44060)));
    var_11 = (((-9223372036854775807 - 1) < 65521));
    var_12 = var_1;
    var_13 = (max(65535, (max(((var_2 ? -25080 : 9223372036854775793)), (((var_7 ? 480635809 : var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_1] = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = (min(((+((((-2147483647 - 1) == 1))))), -27001546));
                            arr_11 [i_0] = (arr_8 [i_0] [i_3 + 2] [i_1 - 2] [i_0]);
                            var_15 = arr_8 [i_0] [i_1] [i_1 - 2] [i_3 - 1];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
