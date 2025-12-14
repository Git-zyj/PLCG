/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((-(arr_1 [i_0 - 1] [i_0 - 1]))), (((!((min(var_12, 1681627947))))))));
        arr_3 [i_0] = (max(var_12, ((-(min((arr_0 [i_0]), 57937))))));

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_13 = 59130;
            var_14 += 119358815;
            var_15 = (max(((-(min(var_5, 59106)))), ((((((59130 < (arr_5 [i_1] [i_1])))) != (1 + 59127))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [9] [1] [i_3] [i_3] = ((-(min((18446744073709551615 & 6287780188633722573), (((var_12 >= (arr_13 [14] [i_2] [i_3] [i_4]))))))));
                        var_16 ^= ((-(17 * 131071)));
                    }
                }
            }
        }
        var_17 *= ((max(((min((-2147483647 - 1), 6397))), var_3)) / (((min(1681627966, (arr_13 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_18 = (min((min((!6228301687448650875), (var_4 * var_12))), (min(var_9, var_9))));
    var_19 = min((min((!var_1), (var_11 / 17925509762778589054))), ((min(1, 8841632608562185107))));
    #pragma endscop
}
