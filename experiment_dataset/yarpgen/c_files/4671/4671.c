/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((-((((min(1280020609, 0))) ? ((127 ? 65514 : 127)) : var_0)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_11 = 1854288043088774709;
            var_12 = (max(var_12, -11587));
            arr_7 [i_0] [i_1] = (max(((-117792030 ? 4 : 19425)), (!238)));
            var_13 = (max(((0 ? 58938 : (max(225054971, 16)))), (!16)));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_14 = (min(var_14, (min((!127), (~6892263123391553234)))));
            arr_12 [i_2] [i_0] = (((~(min(16592456030620776921, 11554480950317998376)))));
        }
        arr_13 [i_0] = 2047;
        var_15 += ((min((min(6892263123391553220, 254)), (!16592456030620776921))));
        var_16 = (((~(!30016))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    var_17 = -0;
                    var_18 = (max(var_18, (~1854288043088774695)));
                    var_19 = (min(var_19, (((((1510325700 ? 5616 : 16592456030620776910)) | ((0 ? 1854288043088774735 : 252)))))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_20 = 225054996;
                        var_21 = 44064;
                        arr_22 [i_6] [i_5] [i_4] [i_3 - 3] = (((!19425) || (!28714)));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_3] [2] = -225054971;
                        arr_26 [i_7] [i_5] [i_4] [0] [i_4] [i_3] |= 18423005707019990394;
                    }
                }
            }
        }
        arr_27 [i_3] = ((!((max((~11554480950317998396), -16592456030620776898)))));
        arr_28 [i_3 + 1] = (24830 + ((-1854288043088774695 ? 23738366689561219 : -16592456030620776921)));
    }
    #pragma endscop
}
