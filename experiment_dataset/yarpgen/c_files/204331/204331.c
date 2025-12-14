/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = (arr_2 [21] [i_1] [i_1 - 1]);
                    arr_6 [i_0] = ((((65527 ? -1319868375771774873 : 9)) % var_11));
                }
                arr_7 [i_0] [i_1 + 2] [i_0] = (((arr_3 [i_0]) ? (arr_5 [i_0] [i_0]) : (((arr_4 [i_0 - 3]) ? var_11 : (((arr_0 [3]) ? var_16 : (arr_4 [i_0])))))));
            }
        }
    }
    var_20 = (max(var_1, ((-var_2 / (65527 >= 56)))));
    var_21 &= ((var_3 == (((-var_2 == ((1 ? var_3 : 115)))))));
    var_22 = var_8;
    #pragma endscop
}
