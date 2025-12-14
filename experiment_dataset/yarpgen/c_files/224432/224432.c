/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 ? ((((((-21880 + 2147483647) << 0))) ? (max(var_1, var_0)) : (min(var_7, var_8)))) : (min(((3803416872 ? var_7 : var_9)), (4294967267 < var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_9 [i_0] [4] [2] [i_0 + 3] |= (min(((((min(9, 18446744073709551615)) != (arr_2 [i_2])))), (arr_2 [i_2 - 1])));
                    var_17 = var_7;
                }
            }
        }
    }
    var_18 = ((!((((var_13 < var_6) & (max(4231333634, var_4)))))));
    #pragma endscop
}
