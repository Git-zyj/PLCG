/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(max(-7426413280784583829, -7426413280784583829))));
        var_12 = (((((-(arr_2 [i_0 - 4])))) != ((+(((arr_1 [21] [i_0 + 3]) - (arr_2 [i_0 - 3])))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_13 = (max(((7426413280784583855 ? 7426413280784583829 : 7426413280784583855)), (((((min(var_1, (arr_5 [i_1])))) ? (arr_5 [i_1]) : ((min(54, var_8))))))));
                    arr_11 [20] [i_1] [i_1] [i_1] = ((+(min((-9223372036854775807 - 1), (arr_9 [i_1] [i_2])))));
                    arr_12 [i_1] = 120;
                    var_14 = min((~-7426413280784583861), ((~(max(4294967295, var_10)))));
                    var_15 = arr_8 [i_3];
                }
            }
        }
    }
    var_16 = var_6;
    var_17 = -var_3;
    #pragma endscop
}
