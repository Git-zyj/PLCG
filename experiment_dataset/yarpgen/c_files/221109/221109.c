/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_1] = (arr_2 [i_0]);
                    var_15 = (((min((!var_5), (((arr_6 [i_2] [i_1] [i_2]) <= 0)))) || (((arr_8 [i_2] [i_2 - 1] [i_2 - 1]) <= (((2870657691 < (arr_0 [i_1]))))))));
                }
            }
        }
        var_16 = (min((arr_8 [i_0] [i_0] [i_0]), (min(((max(-70, (arr_3 [17])))), -var_3))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = (((min(60701, -1218712176)) == (arr_12 [i_3])));
            var_18 = ((!((((18446744073709551613 ? (arr_14 [i_3]) : (arr_16 [i_3]))) >= (13148317329804959677 * 0)))));
            var_19 = (min(var_19, ((min((!var_11), var_11)))));

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = (arr_12 [i_3]);
                var_21 = (((arr_15 [i_3] [i_4] [i_4]) <= (max((arr_15 [i_3] [i_4] [i_5]), (arr_15 [i_3] [i_4] [i_5])))));
                var_22 = (max(var_22, ((max((-1 == 2583948276040268496), (min((((arr_18 [i_3] [i_3]) ? var_8 : 4294967295)), ((min(1, (-32767 - 1)))))))))));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                var_23 = (max(var_23, (!-11456)));
                var_24 = (arr_19 [12] [i_3] [i_6] [i_6 + 1]);
            }
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                var_25 = (((!(arr_15 [i_3] [i_7 - 1] [i_3]))) ? (((arr_22 [i_3] [i_3] [i_7 - 1] [1]) + (arr_22 [i_3] [i_3] [i_7 - 1] [1]))) : (((arr_18 [i_4] [4]) * ((((arr_22 [i_4] [i_4] [i_4] [i_3]) <= (arr_14 [i_3])))))));
                arr_25 [4] [i_3] [i_7] = (arr_15 [i_3] [i_4] [i_7 + 1]);
            }
            var_26 = (((max((min(3047385025, 1)), (arr_15 [i_3] [i_4] [i_4]))) - ((((arr_21 [1] [8] [1]) * (arr_23 [i_3] [i_3] [i_4]))))));
        }
        var_27 &= ((((min((min((arr_22 [i_3] [i_3] [i_3] [i_3]), (arr_22 [i_3] [i_3] [i_3] [i_3]))), ((max(8124, 61)))))) && ((max((arr_12 [6]), var_11)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_28 = (arr_18 [i_3] [i_9]);
                    var_29 = ((((((11464 & (arr_24 [i_3] [i_9] [i_9] [i_8]))))) >> (((~var_11) + 6))));
                    var_30 &= (min(((((arr_22 [i_8] [i_8] [i_8] [i_8]) ^ (min((arr_14 [2]), (arr_15 [16] [i_8] [16])))))), ((1 ? 1 : 5371542531698832991))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_34 [i_10] = (min(((max((arr_33 [i_10] [i_10]), (var_14 <= 11460)))), (arr_16 [17])));
        var_31 = ((((((arr_31 [i_10]) % (arr_27 [10]))) > (arr_21 [i_10] [i_10] [i_10]))));
    }
    var_32 = (max(11455, 5469));
    var_33 = var_9;
    #pragma endscop
}
