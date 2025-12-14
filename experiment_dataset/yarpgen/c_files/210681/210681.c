/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+(((~var_9) | (~var_13)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_18 = ((!((((10838614810567703765 * (arr_9 [i_3] [i_2] [16] [i_1] [8]))) == (arr_2 [i_0])))));
                        var_19 = (max(var_19, ((((arr_6 [1] [i_1] [i_3]) < ((((((arr_2 [i_3]) / -30)) >> ((((arr_1 [i_1]) == (arr_2 [i_1]))))))))))));
                    }
                }
            }
        }
        var_20 = ((((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) << (-var_0 - 1196))) / ((((-(arr_7 [15] [15] [i_0]))) | ((105 << (((arr_10 [i_0] [13] [9] [i_0]) - 8704705116051305701))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] = (~18);
        var_21 = (arr_12 [i_4]);
    }
    var_22 = ((~((~(~115)))));
    var_23 = (max(var_23, (-8382983544121544196 == 136)));
    var_24 = (((((~var_0) << (((var_12 ^ var_16) - 2904498238)))) > (((16383 || var_6) >> (((~var_2) + 1651574124))))));
    #pragma endscop
}
