/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((var_2 ? var_10 : (8592984519274561436 <= var_14)))))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_18 -= ((28 ? var_7 : (min((arr_3 [i_1 - 1] [i_1] [i_1]), ((232 ? var_15 : (arr_6 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3])))))));
                        arr_11 [i_3] [i_1 - 2] [i_3] [i_3] [i_3 + 1] = -var_13;
                    }
                }
            }
            var_19 = (((((134217727 ? (arr_6 [i_1] [i_1] [i_1 - 2] [i_0 + 1]) : var_5))) ? (arr_6 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_0 - 2]) : (((arr_6 [i_1 + 1] [i_1] [i_1 + 1] [i_0 - 3]) * (arr_6 [i_1 - 2] [i_1] [i_1 - 2] [i_0 - 1])))));
            var_20 |= (var_14 >= 69);
            var_21 += 27663;
        }
        var_22 = var_0;
        var_23 = 9853759554434990194;
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_24 += (arr_3 [i_4 - 3] [i_4 - 3] [i_4 + 1]);
        var_25 += var_1;
        var_26 -= var_3;
        var_27 = ((18446744073709551610 ? var_1 : ((var_14 % (arr_13 [i_4 - 1] [i_4])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            {
                var_28 -= (!222);

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_29 = (max((arr_17 [i_6]), ((((((arr_17 [i_7]) ? var_8 : var_5))) ? (var_3 <= 729471363) : 4294967295))));
                    var_30 = (max(var_30, (((var_6 ? (!var_0) : (((arr_18 [2]) ? ((var_6 ? 222 : 8592984519274561410)) : var_1)))))));
                }
                var_31 ^= (arr_15 [2]);
            }
        }
    }
    #pragma endscop
}
