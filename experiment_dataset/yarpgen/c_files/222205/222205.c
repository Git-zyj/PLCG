/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min(((var_8 ? var_9 : (min(var_2, var_3)))), ((var_6 ? (4294967295 != var_3) : ((1 ? var_7 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((max(144115187807420416, var_11)));
                arr_7 [i_1] = ((var_2 || (((~(65535 == 15655435635071993124))))));
                var_15 = (-90027935 < -90027932);
                var_16 = (max(var_16, (((~((~(arr_1 [i_1 + 3]))))))));
                var_17 = (~3990);
            }
        }
    }
    var_18 += ((((((var_12 ? var_12 : var_6)) ? ((1 ? -90027932 : var_8)) : 90027923))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = 1;
            var_19 = ((90027951 ^ (arr_9 [i_2])));
        }
        var_20 += (arr_8 [9] [i_2]);
        var_21 = (max(var_21, ((((!2147483647) >= 187732831)))));
        arr_13 [16] &= (((61005 / 2089745722888647419) ? (((arr_10 [i_2]) ? (arr_11 [i_2] [i_2] [1]) : 9223372036854775807)) : (((var_11 ? var_8 : 1653016829)))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] |= (-1 == 1);
        var_22 = ((+(((min((arr_9 [11]), 15566)) + 60537))));
    }
    var_23 ^= 2089745722888647419;
    #pragma endscop
}
