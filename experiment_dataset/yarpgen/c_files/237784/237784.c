/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 *= var_8;

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_1] = ((var_7 ? 10915 : (arr_1 [i_0] [i_1])));
            var_12 = (min(var_12, 10894));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_13 = (((!var_3) | -10930));
            arr_7 [20] [i_2] &= (~3172377381);
            arr_8 [i_0] [24] [i_0] = (((arr_3 [i_0] [i_2]) ? var_3 : (arr_3 [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_14 = (var_7 ? -2955540527551388844 : var_1);
            arr_11 [14] = 2681152746;
        }
        var_15 = (max(var_15, (~var_5)));
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_16 *= ((var_7 ? 10915 : 0));
        var_17 -= 3172377381;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_18 -= 1;
            var_19 = (max(var_19, (128 ^ var_3)));
        }
        arr_19 [i_5] = (((arr_0 [i_5 - 3]) > ((-1 ? 2681152723 : (arr_15 [i_5] [i_5])))));
        arr_20 [i_5] [i_5] = 29643177;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            {
                arr_25 [i_7] [6] = (max(var_7, 3172377372));
                arr_26 [i_7] [i_7] [i_7] = (max(-1, var_3));
            }
        }
    }
    var_20 = ((((0 ? (var_7 + var_2) : (((12 - (-127 - 1)))))) ^ 67));
    #pragma endscop
}
