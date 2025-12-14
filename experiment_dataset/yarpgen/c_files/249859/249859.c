/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((~((((max(var_9, var_6))) ? (((min(var_5, var_4)))) : ((var_4 ? var_7 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = arr_0 [i_0];
                var_13 = ((((min(((871051871 ? 255 : var_0)), (((-(arr_4 [i_1 + 1] [i_0]))))))) ? (min(-1, 7)) : (arr_2 [i_1 + 3] [i_1 - 1])));
                var_14 = ((((var_7 ? (arr_2 [i_1 + 1] [i_1 - 1]) : var_3)) - 41));
                var_15 = min((((max(119, var_3)))), var_6);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_16 = ((((-(arr_6 [i_2]))) / ((18446744073709551615 ? ((61248 ? var_8 : var_9)) : (((var_1 != (arr_6 [i_3]))))))));
                var_17 ^= (((((arr_8 [i_3] [i_3] [i_2]) ? var_0 : var_8)) & var_2));
                arr_9 [i_2] = (--248);
                arr_10 [7] [10] = ((!(((~(var_3 < var_2))))));
            }
        }
    }
    var_18 = (max((min(var_0, ((5244187783210124775 ? var_7 : var_7)))), 10278594648296946549));
    #pragma endscop
}
