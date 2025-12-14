/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_11 = (max(var_11, ((((((((var_2 ? var_1 : var_3)) ^ ((min(var_9, var_5)))))) ? (max(4294967295, 5)) : (min(0, (arr_0 [i_0] [i_1 + 3]))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = var_0;
                        var_12 = (-54 % 110205316);
                    }
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_0 - 1] [i_0] [i_2 - 3] [i_4 - 2] = (min((((arr_3 [i_0] [20]) ? ((~(arr_8 [i_0 + 2] [i_1] [i_1] [i_1]))) : ((4184761980 ? 15 : (arr_10 [i_0] [i_0 - 1] [1] [i_0 - 1] [i_0]))))), (4184761980 % -31286)));
                        var_13 = (max(var_1, 13867575213247381931));
                        var_14 = (13867575213247381931 + 4294967295);
                    }
                    arr_13 [i_0] [i_2] = (!1);
                    arr_14 [i_0] = (arr_11 [i_0] [i_1 + 3]);
                }
            }
        }
    }
    var_15 = (var_3 * var_7);
    var_16 = (min(var_16, ((((max((~var_6), (1 + 6919575992725782597))) >> var_6)))));
    var_17 = var_0;
    #pragma endscop
}
