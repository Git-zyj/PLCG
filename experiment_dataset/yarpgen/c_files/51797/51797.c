/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 -= (max(-1580618127, -11750));
                    var_15 = (((((max(var_12, var_5)) > (((1580618117 + (arr_1 [i_1] [i_1]))))))) != ((((max(1162891975620119562, 102)) != (((0 * (arr_4 [i_0 + 2] [i_0 + 2] [i_2]))))))));
                    arr_6 [i_0] [i_1] = ((((((arr_0 [i_0] [i_0 - 1]) <= -11750))) * (((((((arr_2 [i_0] [i_1] [i_2]) / 7012995298444650886))) || (((~(arr_5 [i_0] [i_1] [i_2])))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                var_16 = ((~(max((arr_10 [i_3 - 1]), -16822))));
                var_17 = (min((((((((arr_7 [i_4]) / (arr_11 [i_4] [i_4] [i_3])))) != (-113 / var_7)))), (((min((arr_12 [i_4]), (arr_12 [i_3]))) << (((arr_11 [i_3 + 1] [i_4 + 1] [i_4]) - 44424))))));
                arr_13 [i_3 - 1] [i_3 - 1] = ((((max((arr_8 [i_3] [i_4 + 1]), (arr_8 [i_3] [i_4 + 1])))) >= (min(-1, 1))));
            }
        }
    }
    #pragma endscop
}
