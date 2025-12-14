/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = max(-2941859157062249717, 236);
                var_18 = 3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = var_17;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_18 [13] [i_4] [i_4] [i_5] = (((((-2941859157062249717 || (arr_7 [i_3 - 2] [i_3 + 1])))) == (((((var_0 + (arr_8 [i_4]))) < (arr_13 [i_4] [i_3 - 1] [i_3 - 2]))))));
                        var_20 = 32767;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_21 = (((((var_11 != (var_5 < var_8)))) * (max((8589932544 || var_5), var_13))));
        var_22 = -var_15;
        var_23 = (min(-2941859157062249717, (((max(0, -2941859157062249715)) + (arr_16 [i_6])))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_24 = var_4;
        var_25 = var_3;
    }
    var_26 = (((((var_10 ? var_12 : -13865))) != (max(-18741, (min(var_10, 9223372036854775807))))));
    #pragma endscop
}
