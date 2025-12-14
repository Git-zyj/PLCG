/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((((arr_0 [19] [19]) ? 1 : 18446744073709551615)))) ? (((1 && ((((-385292048427856452 + 9223372036854775807) << (((arr_1 [i_0]) - 1569612244)))))))) : (arr_0 [1] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 ^= (((((-(arr_9 [i_0 - 1] [i_1 - 1] [i_1])))) ? (arr_3 [i_2]) : (min(((((arr_6 [i_0] [i_0] [i_2]) == (arr_7 [16] [i_1] [i_0])))), ((~(arr_0 [i_0] [i_2])))))));
                    var_18 -= (((((arr_3 [i_1 + 2]) ? -2915187113 : (arr_3 [i_1]))) % var_1));
                }
            }
        }
        arr_10 [i_0 - 1] [9] = (((3 ? (min(-1, 65515)) : (min((arr_2 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))));
        var_19 = ((((max(5, ((max((arr_0 [i_0] [i_0 - 1]), 1)))))) ? 0 : (((4385713657960715743 && ((((arr_6 [i_0] [i_0 - 1] [i_0]) ? 38186 : (arr_6 [i_0] [11] [i_0 + 1])))))))));
    }
    var_20 = ((var_16 ? var_7 : 1608022924));
    var_21 = var_12;
    #pragma endscop
}
