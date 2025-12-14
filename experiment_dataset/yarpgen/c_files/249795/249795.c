/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_19 *= (min((((arr_0 [2] [i_0]) ? (((~(arr_2 [i_1])))) : (max(1096586634297021661, 22561)))), ((((~(arr_4 [i_1 + 2])))))));
            arr_5 [i_0] [i_0] [i_1 - 2] = (((min(((-48 ? (arr_2 [12]) : (arr_2 [i_0]))), (arr_0 [i_0] [i_0]))) - (var_2 - var_13)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_20 = ((!(arr_7 [i_1 - 1] [8])));
                var_21 = (max(var_21, ((((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 - 2]) : (arr_3 [1] [i_1 - 2] [2]))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_12 [i_1] [i_1 - 1] = (min((((arr_7 [i_0] [i_0]) ^ (arr_7 [i_0] [i_3]))), ((min(54900, -23443)))));
                        var_22 -= (max((!1), (max((arr_9 [12]), -1291776169))));
                    }
                }
            }
            arr_13 [16] [i_0] = (arr_6 [i_0]);
        }
        arr_14 [i_0] = (arr_3 [i_0] [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        arr_17 [16] = ((((!(arr_10 [i_5] [i_5] [i_5] [15] [i_5] [i_5])))));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_20 [i_5] [i_5] [i_5] = (((((arr_7 [2] [i_6]) ? (arr_8 [i_5] [i_6]) : (arr_8 [i_5] [i_6]))) >= ((((max(10635, -1291776182)))))));
            var_23 = (max(var_23, ((max((((max(28, -1291776197)))), (max(((((arr_11 [i_6] [i_6] [i_6] [i_5] [i_5] [i_5]) ? 21 : 101812285))), 5800247074397477006)))))));
        }
        var_24 = (min((((!((max(var_16, (arr_4 [i_5]))))))), var_1));
        var_25 = (max((((-16384 ? (((arr_0 [i_5] [i_5]) - 54885)) : 94))), (max(41925, 2346975251))));
        arr_21 [15] [i_5] = (((106 ? (arr_9 [i_5]) : (arr_9 [i_5]))));
    }
    var_26 = (min(var_26, ((min(var_6, var_2)))));
    var_27 = 1;
    var_28 = (max(var_5, ((((min(0, var_7))) ? var_15 : 27))));
    #pragma endscop
}
