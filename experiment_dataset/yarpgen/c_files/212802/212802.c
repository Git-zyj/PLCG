/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) <= ((min(var_3, (arr_1 [i_0] [i_0]))))));
        var_21 = ((max((arr_0 [i_0]), (arr_0 [i_0]))));
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_5 [2] [2] = (max(6, (max((arr_2 [i_1]), ((var_9 ? 255 : 33))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_3] [1] = ((21 ? 281474976710655 : 0));
                        arr_17 [i_1] [i_2] [i_3] [i_4] = (max(((((arr_12 [i_2]) ? (arr_12 [i_4 - 1]) : (arr_12 [i_1])))), (arr_12 [i_1])));
                        var_22 += (max(var_13, (41 * 203)));
                    }
                }
            }
        }
        var_23 = (min(63965, 4178929160));
        var_24 ^= (113 % 6);
        var_25 = (max((((-1266906274 ? 484753773877954855 : ((0 ? 6 : 22))))), (min((((arr_12 [i_1]) ? (arr_9 [1]) : 8572850976803944078)), 153))));
    }
    #pragma endscop
}
