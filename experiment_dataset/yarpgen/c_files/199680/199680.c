/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 |= -12014842250042856132;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 *= (((((((arr_0 [i_2 - 2] [i_1 - 1]) == (max(6431901823666695499, (arr_5 [i_0] [i_0] [i_0]))))))) == (max(6431901823666695491, 6431901823666695478))));
                    var_23 |= ((((max((!-126), (!-17))))) ^ ((123 ? 17024 : (max(var_13, var_8)))));
                    var_24 = (min(((((61440 ? -4 : var_2)))), 46785));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_3] [i_4] [i_4] = ((((-45 ? var_2 : var_18)) ^ (arr_10 [i_4] [i_4] [i_3])));
            var_25 = (arr_1 [i_3] [i_4]);
            var_26 = (arr_9 [i_3]);
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_27 = ((var_7 ? (arr_5 [i_3] [i_3] [i_3]) : (~5541960085269648310)));
                    var_28 = (((arr_5 [i_3] [i_5] [i_6]) >= (arr_5 [i_3] [i_5] [i_6])));
                    arr_19 [i_3] [i_5] [i_5] [i_6] = (((arr_8 [i_5] [i_3]) * -50));
                    var_29 = (!13583007282023890449);
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_30 = (((((((var_2 << (((arr_3 [i_7] [i_7] [i_7]) - 855922920))))) ? ((255 ? var_2 : (arr_5 [i_7] [i_7] [i_7]))) : (~4051168314))) | (max(((min(-5541960085269648311, 12320))), (arr_20 [i_7] [i_7])))));
        var_31 = -50;
        var_32 = arr_20 [i_7] [i_7];
    }
    #pragma endscop
}
