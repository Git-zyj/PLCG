/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = ((((var_11 >= (arr_1 [i_0] [i_0 - 2]))) ? 5 : (arr_1 [i_0 - 1] [i_0 - 1])));
        var_14 = (((22028 - var_10) < 127));
        var_15 *= (!var_2);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_16 += ((var_9 ? (((((9290 ? var_0 : -22053)) <= ((var_3 % (arr_3 [i_1])))))) : (((var_11 <= ((22015 ? var_10 : (arr_3 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {
                    arr_8 [i_1] [i_2] [i_1] [i_3] = (((((19491 ? -14733 : var_10))) ? ((((arr_6 [i_1 + 3] [i_3]) >= var_5))) : 127));
                    var_17 = (((arr_2 [i_1]) & -22028));
                    var_18 = ((((((arr_7 [i_3 + 1] [i_1 + 1]) & 15725))) ? ((min(-15724, (arr_5 [i_1 - 1] [i_3 - 1])))) : (((22027 | 13) | (var_1 ^ 29962)))));
                }
            }
        }
        var_19 = (((arr_6 [i_1] [i_1 + 3]) ? ((-(((-128 || (arr_6 [i_1] [i_1])))))) : var_0));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((((var_2 ? var_12 : (arr_6 [i_4] [i_4])))) && (((~(arr_3 [i_4])))))))));
                        var_21 = (arr_16 [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 1]);
                        var_22 = var_12;
                    }
                }
            }
            arr_18 [i_4] [i_1] [i_1 + 2] = ((-15712 ? var_6 : (var_7 - var_8)));
            var_23 = var_7;
        }
        var_24 = (max(var_24, 15885));
    }
    var_25 = (min(var_25, (((((((((var_12 ? var_9 : var_0))) ? ((var_0 ? -1 : var_8)) : ((min(-15725, var_4)))))) ? ((min(-15741, (min(32759, var_3))))) : var_3)))));
    var_26 = var_4;
    var_27 = (max(var_27, (var_3 * var_6)));
    var_28 = var_9;
    #pragma endscop
}
