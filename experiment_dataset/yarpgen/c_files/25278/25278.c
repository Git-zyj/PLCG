/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (((-((-2914425165472288149 ? -8699480366396291143 : 1773108428)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [2] [i_1] [i_1] [i_0] = (((30433 / var_3) % (max(((min(50521, 2190977305))), -5772580032319785313))));
                        arr_11 [i_0] = ((((((((1 ? 1 : (arr_8 [i_0] [4] [i_1] [i_2] [i_3] [i_0])))) ? 69 : -1750682262))) ? (((min(-1773108429, 50717188)) & var_14)) : -1773108421));
                        arr_12 [i_0] [i_0] [i_0] = 24681;
                        var_20 = (-((max((arr_7 [i_2 + 1] [i_2] [i_2 - 2] [i_2]), (arr_6 [i_1] [13] [i_1] [i_2 - 2])))));
                        arr_13 [i_0] [i_1] [i_2 - 3] [i_0] = 901705763;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    arr_20 [i_0] [i_4] [i_0] [i_4] = (max((arr_4 [i_5 - 1] [i_5] [i_5 - 1]), (((arr_4 [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_4 [i_5 + 1] [i_5] [i_5 + 1]) : (arr_4 [i_5 - 1] [i_5] [i_5 - 1])))));
                    arr_21 [i_0] [i_4] [i_4] [i_5] = (min((((-1755685515 ^ 67) ^ 2103989963)), (min(var_12, (arr_19 [i_0])))));
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
