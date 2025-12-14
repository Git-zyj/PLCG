/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = var_10;
        var_20 = ((2353121118094308730 >> (2353121118094308716 - 2353121118094308704)));
        var_21 = (arr_1 [i_0] [i_0]);
        var_22 = 18446744073709551613;
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_23 = ((((((arr_4 [i_1]) ? 7 : -2353121118094308716))) ? ((-((var_8 ? (arr_3 [i_1]) : (arr_1 [i_1 + 3] [i_1 + 3]))))) : 65522));
                    var_24 = 65501;
                    var_25 = arr_10 [i_1] [i_2] [i_2] [i_1 + 1];
                    var_26 = ((arr_2 [i_1 - 3]) ? ((~(((arr_5 [12] [i_2]) ? (arr_4 [i_1]) : -2353121118094308724)))) : 2353121118094308733);

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 12;i_5 += 1)
                        {
                            var_27 = var_11;
                            var_28 = (min(var_28, 18446744073709551605));
                            var_29 = arr_1 [i_2] [i_2];
                        }
                        var_30 = -2353121118094308735;
                        var_31 = var_16;
                        var_32 = 2353121118094308724;
                        var_33 *= 318336813;
                    }
                }
            }
        }
        var_34 = var_10;
        var_35 = ((!(arr_12 [4] [i_1])));
    }
    var_36 = var_3;
    var_37 = (max(var_37, (-12000 - -9223372036854775803)));
    #pragma endscop
}
