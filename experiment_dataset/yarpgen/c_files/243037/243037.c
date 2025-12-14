/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max(var_10, ((min(2147483647, var_4)))));
    var_18 += 4294967274;
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    var_20 -= ((2147483628 - ((var_3 ? var_9 : (arr_5 [i_0] [i_1] [i_1])))));
                    arr_8 [i_2] [i_0 + 2] [i_0] [i_1] = ((var_6 ? var_3 : (((var_1 ? var_1 : 1)))));
                }
                arr_9 [i_0] [i_0 + 1] [i_0] = (max(var_2, (arr_5 [i_0 - 1] [i_0 + 1] [i_0])));
                var_21 = (max(var_21, ((max((266720993201844600 > 474043062), var_13)))));
                var_22 = ((151985636 > (max(((-24198 ? -1 : (-2147483647 - 1))), ((min(var_13, 41010)))))));
            }
        }
    }
    #pragma endscop
}
