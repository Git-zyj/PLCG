/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_4;
    var_19 = var_1;
    var_20 &= (((((var_1 / var_3) ? var_7 : var_8)) << (var_16 - 5345592426403151128)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [22] [23] [22] = (arr_0 [i_2 + 1]);
                    var_21 = (arr_4 [i_2 - 1]);
                    var_22 = (min(var_22, (((var_8 & (((((1179592251 ? (arr_6 [i_0] [i_0] [i_0] [i_2]) : (arr_6 [i_0] [16] [0] [1]))) >> (-618092908 + 618092936)))))))));
                }
            }
        }
    }
    #pragma endscop
}
