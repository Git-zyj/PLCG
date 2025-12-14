/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_1 ? (((((-118 ? 1152921367167893504 : var_1)) | var_12))) : ((var_3 ? var_3 : (max(1152921367167893504, 17167856492929456502)))))))));
    var_15 = ((~(~1278887580780095113)));
    var_16 -= ((!(-1 >= -47189314392497795)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, 128));
        var_18 = (max(var_18, var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (var_2 < var_8)));
                        arr_10 [6] [10] |= ((~(arr_1 [i_0 + 1] [7])));
                    }
                }
            }
        }
        var_20 -= ((+(((arr_1 [1] [7]) ? var_7 : (arr_7 [i_0] [i_0 + 1] [i_0 - 1] [i_0])))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 = (min(var_21, (~var_10)));
        arr_13 [i_4] = ((+((max((arr_12 [i_4]), (arr_11 [i_4]))))));
        arr_14 [i_4] = (((((((-9223372036854775802 + 9223372036854775807) << (127 - 127))) <= (arr_12 [i_4]))) ? ((((arr_11 [i_4]) ? var_13 : (var_12 == 0)))) : -1352568743107680434));
        arr_15 [i_4] [i_4] = (min(((var_0 ? 1023 : 65535)), var_7));
    }
    var_22 = ((~(((~var_2) ? ((9223372036854775807 ? (-9223372036854775807 - 1) : 4600139283729598673)) : (~var_12)))));
    #pragma endscop
}
