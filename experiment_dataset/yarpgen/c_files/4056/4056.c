/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_11 = var_9;
                        var_12 = (((((arr_4 [i_0 + 1]) ? -6 : 1))) ? ((4262500715639380400 << (14184243358070171216 - 14184243358070171193))) : (((min((arr_4 [i_0 - 1]), (arr_4 [i_0 + 1]))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_13 = ((!(((-(arr_6 [i_1] [i_1] [2]))))));
                        arr_10 [i_1] [11] [i_1] [i_1] = (((((arr_4 [1]) && (14184243358070171217 + var_4))) && (!12400)));
                    }
                    var_14 ^= ((var_0 << (var_0 - 50578592)));
                }
            }
        }
        arr_11 [i_0] [i_0] = (max((max(15674611952776015895, (arr_4 [i_0 + 1]))), (!1)));
        arr_12 [i_0] [i_0] &= (min((arr_0 [i_0 + 1]), (var_3 + var_8)));
    }
    var_15 = var_7;
    #pragma endscop
}
