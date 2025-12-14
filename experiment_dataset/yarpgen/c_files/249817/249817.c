/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = 1;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_13 ^= (((3758221170 >> (33 - 24))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = ((47 | (arr_0 [i_1])));
        var_15 = (24576 | 1);
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_16 = ((((((((arr_4 [i_2] [i_2 + 1]) <= -6753768437451850518)))) != (arr_4 [i_2] [i_2 + 1]))));
        arr_11 [i_2 + 2] [i_2 + 2] = (((!209) ? 5 : 24576));
        arr_12 [i_2 + 2] = (max(-8994043060381813352, ((((arr_4 [13] [5]) >= (arr_4 [i_2] [i_2 + 2]))))));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3 - 2] = arr_0 [i_3];
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, ((max(-var_9, ((((arr_21 [i_3] [i_5 + 2] [i_5 + 2]) != (arr_21 [i_3] [8] [i_3])))))))));
                    var_18 = (min(var_18, (((max((arr_5 [i_5 + 2]), (arr_5 [i_5 + 1])))))));
                    var_19 = ((((var_4 + 2147483647) >> (((var_6 + var_6) - 6922646328889521001)))));
                }
            }
        }
    }
    var_20 = ((((max(var_9, var_5))) + var_0));

    for (int i_6 = 4; i_6 < 13;i_6 += 1)
    {
        arr_26 [i_6] = -var_4;
        arr_27 [i_6] = (min(18446744073709551608, -70));
    }
    #pragma endscop
}
