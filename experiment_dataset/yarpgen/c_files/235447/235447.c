/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = -var_6;
                var_16 = (min(var_7, ((((~var_9) != (arr_0 [i_0] [i_0]))))));
            }
        }
    }
    var_17 = (min(var_17, (((202657051773540303 ? ((-((var_1 ? 2220971444102538341 : var_4)))) : (((((var_12 ? 202657051773540303 : var_3))) ? (((var_6 ? var_2 : var_3))) : var_1)))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = var_2;
                var_19 &= (max((((~(arr_5 [i_2])))), (min(var_2, var_4))));
                var_20 = (arr_7 [i_3]);
                var_21 = ((var_7 >> (((((arr_7 [i_3]) * var_7)) - 8909453730788413902))));
            }
        }
    }
    var_22 = ((2147483623 ? 202657051773540303 : 103));
    #pragma endscop
}
