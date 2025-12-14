/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_12 - -99);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_15 = 17657426450768633707;
        var_16 = (min(103, -99));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (max((min((arr_4 [i_0] [i_1] [i_2 + 1] [i_2 - 1]), (arr_4 [i_0] [i_0] [i_2 - 1] [i_2]))), (arr_4 [i_0] [i_0] [i_1] [i_2 - 1])));
                    var_17 = -1;
                    var_18 = ((((min((((arr_0 [i_0] [i_1]) << (((arr_1 [4] [4]) - 554416486)))), (arr_4 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((((1700654961 ^ (arr_1 [i_0] [i_1])))))) : (max(0, (arr_2 [i_2 - 1] [i_1] [i_2])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_0] [10] [i_4] = (min(((max((arr_8 [i_0] [i_3 - 2] [i_3 - 2]), 255))), var_9));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_19 -= -1;
                        var_20 -= arr_5 [i_4];
                        arr_18 [i_0] [i_3 - 1] [i_4] [i_5] = (min((arr_13 [i_3] [i_5]), ((((arr_1 [i_3 + 1] [i_3 + 1]) || (arr_11 [i_3 - 1] [i_3] [i_3 - 2]))))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_21 ^= (arr_1 [i_6] [i_0]);
                        var_22 = 67106816;
                    }
                }
            }
        }
    }
    #pragma endscop
}
