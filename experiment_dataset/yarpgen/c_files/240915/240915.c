/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = arr_1 [i_0];
        var_11 &= ((-((((min(10061783761085137025, (arr_0 [1] [1]))) != (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_12 -= ((((max(227249257, -227249243))) ? ((min((arr_2 [i_1]), (arr_2 [i_1])))) : (var_1 & 36102)));
                var_13 -= (max((arr_9 [18] [i_2] [i_3]), (24891 ^ var_6)));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                arr_12 [i_1] [i_2] [i_1] = (min((((((~(arr_9 [i_2] [i_2] [i_4])))) ? 160387310792790296 : ((min(var_0, (arr_6 [i_1])))))), ((((arr_10 [i_1] [i_4]) | (0 | -227249258))))));
                var_14 -= 8788856600669768308;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
            {
                arr_16 [i_2] [i_2] [i_5] = (((((619699531 ? (arr_4 [i_1] [i_2] [i_2]) : (arr_15 [i_2])))) * ((49 ? (arr_4 [i_1] [i_1] [i_2]) : var_2))));
                arr_17 [i_2] = ((-38 ? 1 : -805115253));
            }
            var_15 = ((-(arr_10 [i_2] [i_2])));
            var_16 = (min(var_16, 154));
        }
        arr_18 [i_1] = (min(((((min(51492, (arr_2 [i_1])))) >> (((arr_11 [i_1] [16] [16]) - 208)))), var_6));
    }
    var_17 = (min((((((var_7 << (3675267793 - 3675267793))) <= -var_3))), 192));
    var_18 = (min(var_18, var_8));
    var_19 += var_1;
    var_20 = var_8;
    #pragma endscop
}
