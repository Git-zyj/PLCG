/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_8 [i_2] [i_1 - 2] [i_1] [i_0 - 1] = 3007124970;
                    var_17 = 56;
                }

                /* vectorizable */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    arr_13 [7] [i_1] [7] [i_1 - 1] = (((var_13 % (arr_1 [i_0]))));
                    arr_14 [3] [7] [1] = ((((((arr_1 [i_0]) << var_14))) ? var_9 : (arr_5 [0] [i_0] [i_3 + 2] [i_3 + 2])));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    arr_17 [2] = (((((((21513 >= 1) > -104)))) > (arr_7 [i_4] [i_1 + 2] [i_0] [2])));
                    var_18 = (max(var_18, var_15));
                    arr_18 [i_4] [i_1] [i_0] [i_0] = min(574208952489738240, var_0);
                    arr_19 [1] [i_1] [i_4] [i_1 - 2] = var_3;
                    var_19 = (((((arr_15 [i_1 - 2] [4] [i_1 - 3] [i_1]) < (arr_11 [i_1] [i_1] [i_1 - 2]))) ? 0 : (((arr_15 [i_0] [i_1] [i_1 - 3] [i_1]) / (arr_15 [i_1] [i_1] [i_1 - 2] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_24 [7] = (((min((arr_16 [i_1 - 2] [i_1] [i_1 + 1] [i_0 - 1]), var_7))) ? ((62579 ? (arr_16 [i_1 - 1] [i_0] [i_1 - 1] [i_0]) : (arr_16 [i_1 - 3] [i_0] [i_0] [1]))) : -12591);
                    arr_25 [i_5] [i_5] [i_1] [i_0] = (~-1423677407747543394);
                    var_20 = 65535;
                }
                var_21 = ((+(((var_9 ? (arr_12 [i_0 + 3] [i_0 + 3] [i_0]) : var_8)))));
                arr_26 [i_1] = ((10 ? ((-48 ? (arr_15 [i_1 + 1] [i_0 - 2] [i_0] [i_0]) : 4294967295)) : (!38697)));
                arr_27 [i_0 + 2] [i_1 - 1] [i_1] = var_11;
            }
        }
    }
    var_22 = (!var_6);
    #pragma endscop
}
