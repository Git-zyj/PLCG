/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (min(((((arr_5 [i_2] [i_1 - 1] [0]) || (arr_5 [i_0] [i_1 - 1] [i_2])))), (max((min(1860903684, (arr_0 [i_2]))), ((((arr_3 [i_1] [i_1 + 1] [i_1]) ? (arr_7 [i_1]) : 0)))))));
                    arr_8 [i_0] [5] [i_2] = (((((((arr_7 [i_1]) ? var_3 : (arr_1 [i_2]))) >> ((((4998483395305004541 ? (arr_0 [i_0]) : 1520352093)) - 53608)))) != (max((((2774615183 <= (arr_1 [i_2])))), 0))));
                }
            }
        }
    }
    var_12 = (max(var_12, ((((((max(18446744073709551598, 14214145446437152124)))) != 133169152)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_12 [i_3] = (arr_1 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    arr_19 [i_4 - 3] [i_5] [i_5] = (~var_2);
                    var_13 = (min(var_13, ((-28291 ? (arr_5 [i_5 + 1] [i_4 + 1] [i_3]) : 8964))));
                }
            }
        }
    }
    var_14 = 10;
    #pragma endscop
}
