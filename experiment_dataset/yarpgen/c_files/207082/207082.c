/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((((((((arr_1 [i_1 + 1]) <= -1038003066)) ? (min(var_7, var_7)) : -var_8))) ? -1038003066 : (max((arr_4 [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_3 - 2] = ((~(106 >= -1038003066)));
                            arr_11 [6] [i_1 + 1] [i_1 + 1] |= (((arr_8 [8] [i_1 + 1]) ? var_1 : (arr_2 [1])));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((((((~var_6) ? ((4294967295 >> (var_1 - 15211726126737057112))) : (135 <= var_1)))) ? var_3 : (~-23002)));
    #pragma endscop
}
