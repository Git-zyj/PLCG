/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_1, var_10));
    var_13 = (min(var_8, var_0));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                arr_9 [i_0 - 2] [14] [i_2] = (min((max(25, 1)), ((max(-32, 44)))));
                var_14 += (max((max(6949274825020635581, var_11)), ((min(2590118544, 19)))));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_15 = (min((max((max(var_7, 0)), (arr_11 [i_1 - 1] [i_3] [i_3] [i_0 + 2]))), (min(var_4, (arr_3 [i_1 - 1])))));
                var_16 ^= min((max(-113, (arr_1 [i_0 - 2]))), ((min(var_2, 114))));
                var_17 |= (min((max(var_2, 0)), (max(-92, -105))));
            }
            var_18 = (max(var_18, ((max((max(var_11, (-9223372036854775807 - 1))), ((min(-3, (-2147483647 - 1)))))))));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [i_0] [i_4 + 1] = (min((min(113, 0)), (max(32, var_4))));
            arr_16 [i_0] = (max((max(var_7, 3759830842)), ((max(1, 38)))));
            var_19 = (max(((min((arr_6 [i_0 + 2] [i_0 + 1]), 3759830830))), (min(0, -9223372036854775788))));
        }
        arr_17 [i_0] = (min(((min(-124, (arr_14 [i_0 - 1])))), (min(535136436, -9223372036854775798))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (max((max(var_10, (arr_1 [i_5]))), ((max((arr_8 [i_5] [i_5] [i_5]), (arr_19 [i_5] [i_5]))))));
        arr_21 [i_5] = (min(((min(var_5, 1160186295))), (min(34, (-9223372036854775807 - 1)))));
        arr_22 [i_5] = (max((min(98994846, 4267859088055417111)), ((max((max(38504, var_5)), var_0)))));
        var_20 = (min(((max(var_2, 24))), (max((arr_13 [i_5] [i_5] [i_5]), var_2))));
    }
    var_21 = (max(var_6, var_4));
    #pragma endscop
}
