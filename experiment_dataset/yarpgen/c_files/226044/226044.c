/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_12, ((((var_5 < var_8) >= var_11)))));
    var_14 = var_1;
    var_15 -= (max((((((var_5 ? var_4 : var_5))) ? (var_0 > var_1) : ((6710546649700842697 ? var_7 : var_2)))), var_9));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [7] [i_1] [i_0] [i_0] = (((((15959 ? ((((var_0 <= (arr_5 [i_0] [7]))))) : -6710546649700842696))) || (((((min(var_9, (arr_3 [16] [16]))))) > var_8))));
                    var_16 += ((-(((max(var_8, var_3)) | (var_0 < var_11)))));
                }
            }
        }
        var_17 *= ((-12201 <= ((var_7 | (arr_4 [i_0] [i_0] [i_0])))));
        var_18 -= var_12;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_19 = ((!var_0) ? (arr_4 [i_3] [i_3] [i_3]) : ((((((arr_4 [i_3] [i_3] [i_3]) ? var_6 : (arr_7 [2] [i_3] [i_3]))) & (arr_6 [i_3] [i_3] [i_3])))));
        var_20 = ((((arr_3 [i_3] [i_3]) > var_9)));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 = (((((arr_13 [i_4] [i_4]) & var_11)) & (((arr_13 [i_4] [i_4]) % (arr_13 [i_4] [i_4])))));
        arr_15 [i_4] = ((((((max(var_7, var_7))) > 12201)) || (arr_5 [i_4] [i_4])));
        arr_16 [i_4] [i_4] = (arr_7 [i_4] [i_4] [i_4]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            arr_20 [i_4] [i_4] = (var_12 % 1);
            var_22 = (max(var_22, var_6));
            arr_21 [i_4] = (arr_18 [i_4] [i_4] [i_4]);
        }
    }
    var_23 = ((var_3 >= ((max((var_8 && var_2), var_10)))));
    #pragma endscop
}
