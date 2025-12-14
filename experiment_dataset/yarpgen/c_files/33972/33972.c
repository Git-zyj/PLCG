/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = min(4294967280, var_2);
                var_10 = (var_3 & 4085125336);
                var_11 = (min(var_4, (min((2216609990 ^ 16), var_5))));
                arr_7 [i_0] [i_0] [i_0] = ((-(min((min(var_8, var_8)), ((min(var_7, 1318256545)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_12 ^= min((min((var_0 / 4200890815), var_0)), ((((6144 <= var_3) + (min(6144, var_9))))));
                arr_12 [i_2] [i_3] = 6162;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_13 ^= ((~var_3) + -6163);
                    var_14 *= ((97907504 || ((((min(var_5, var_9))) >= var_8))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    arr_18 [i_2] [i_2] |= (~var_7);
                    arr_19 [i_2] [i_3] [i_5] [i_5 - 1] = (~var_6);
                }
            }
        }
    }
    #pragma endscop
}
