/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = ((((((-3714181033029101011 % (arr_0 [2])) < 1)))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 = (min(var_12, var_5));
                        var_13 = (arr_6 [i_3] [i_3] [i_3]);
                    }
                    var_14 = ((-3714181033029101011 >= ((max(32764, ((9223372036854775792 ? 2405168156 : (arr_6 [i_0] [i_1] [i_1]))))))));
                    var_15 ^= ((-3714181033029101011 >= ((3714181033029101001 ? -1925795659639190573 : 3376929486344120045))));
                }
            }
        }
    }
    #pragma endscop
}
