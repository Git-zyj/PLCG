/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_10));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((arr_0 [i_1]) <= ((var_2 ? (arr_4 [2]) : ((var_0 ? -99 : var_12)))))))));
                    arr_6 [i_1] [i_1] = ((((((arr_3 [i_0] [1]) >= (max(2130054799, var_3))))) > ((min((arr_2 [i_1 - 2] [i_1 + 1] [i_1 + 1]), ((max(-67, -67))))))));
                }
            }
        }
        var_21 = (max(var_21, (((~(-127 - 1))))));
        arr_7 [3] = var_11;
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_22 = (max(var_22, ((max((((27176 ? -67 : (arr_10 [i_3] [1])))), (((((-(arr_9 [i_3] [i_3]))) == (((37 ? 66 : -67)))))))))));
        var_23 = ((51 < ((((var_14 | 9223372036854775807) > (arr_8 [i_3]))))));
        var_24 = (arr_11 [i_3]);
        var_25 -= ((!((((arr_8 [11]) ? (((58 ? (arr_11 [i_3]) : var_4))) : -1593453513534311059)))));
        var_26 = (max(58, -2764536763359763752));
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4 - 3] = (max(((((-65 + var_15) - (arr_12 [i_4])))), ((var_3 - (arr_9 [i_4 - 1] [i_4 - 2])))));
        var_27 |= -59;
        var_28 = (max(var_28, (!-var_13)));
    }
    #pragma endscop
}
