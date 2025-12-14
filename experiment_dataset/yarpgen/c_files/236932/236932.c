/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 = var_4;
        var_15 = (min(var_15, (arr_0 [i_0])));
        var_16 = (min(127, ((min((!924506314), -126)))));
        var_17 = (((((~(arr_1 [i_0])))) ? (arr_1 [i_0]) : ((-29007 + (max(63, 2147483647))))));
        var_18 = (max(var_18, ((((((((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ^ 184))) ? (((arr_0 [i_0 + 2]) ? 63642 : 32737)) : (max(((min(255, 1))), 1661581041)))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_19 = ((!(((((-83 ? var_8 : 1)) / (arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(((23 >> (((arr_8 [i_1 + 1] [i_1 - 1] [i_3 + 1] [i_3]) + 653262420)))), ((((arr_6 [i_3 - 1]) ? (arr_6 [i_2]) : -1386218406))))))));
                    var_21 = var_7;
                    var_22 = (max(var_22, (!var_1)));
                    var_23 |= ((1 ? ((max(-119, var_0))) : ((max((arr_7 [i_2] [i_1 - 3]), 66)))));
                    var_24 = ((12 + ((-8308 * (arr_6 [i_1 - 3])))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_25 = (min((!-12), (arr_15 [i_4] [i_4])));
        arr_16 [i_4] = ((~(((arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1]) / 7680))));
        var_26 |= ((((!(((50135 ? var_1 : var_13))))) ? ((((((9 | (arr_10 [i_4])))) ? (var_13 < 3719784015) : (14 < 1348336089)))) : (((arr_9 [18]) & -100))));
    }
    var_27 = (-22904 % (((-101 * var_4) * var_12)));
    var_28 |= ((((min(-32767, ((var_4 ? 144115188075855871 : var_4))))) ? (1 | 32757) : -20466));
    var_29 = (((((((var_7 ? 16 : var_8)) ^ (1144276319 | 69)))) ? ((var_12 ? (var_9 & var_5) : var_0)) : ((~(1 * var_4)))));
    #pragma endscop
}
