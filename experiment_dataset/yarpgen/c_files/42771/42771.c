/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (!var_5);
                var_11 = (max(1966738308, (min(1966738299, (4 | -32752)))));
                var_12 = ((1223355343 ? ((max(49601, (1966738304 <= 6436605482209357274)))) : ((~(min((arr_3 [i_0] [i_1]), (arr_2 [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_13 = (((((~var_7) ? (var_1 > var_2) : ((min((arr_1 [i_3]), 1))))) <= (max((((arr_8 [i_2] [i_3]) ? -1 : var_6)), (max(41460, var_8))))));
                arr_10 [i_2] [i_3] = ((9223372036854775786 ? (arr_5 [i_2]) : 9223372036854775807));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_14 = (min(65535, 4294967290));
                    var_15 = 9223372036854775807;
                    var_16 = (((min(15918, ((var_5 ? var_8 : 4003)))) + (arr_6 [i_4])));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = (min(((6964586025385470798 ? 1966738304 : 0)), ((((max(4294967267, 32767))) ? -4 : -var_2))));
                    var_18 = ((-9404 ? ((min(9223372036854775807, 55))) : ((max((min(-1966738285, var_5)), (min(var_1, (arr_14 [i_2] [1]))))))));
                    var_19 = var_0;
                    var_20 = ((~(max(-var_3, (max(-928026069, (arr_6 [i_3])))))));
                    var_21 = ((max((~1643565807), (max(var_8, (arr_13 [i_3] [i_3]))))));
                }
            }
        }
    }
    #pragma endscop
}
