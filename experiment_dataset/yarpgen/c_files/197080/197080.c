/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 + 3] &= ((~((min(17843, (arr_3 [i_0 + 2] [i_0 + 2] [i_1]))))));
                var_14 = (~17848);
                var_15 = ((((40 ^ (arr_2 [i_1])))));
            }
        }
    }
    var_16 = var_10;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = var_9;
        var_17 = (min(var_17, -9098));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_18 = 573062770;
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [i_4 + 1] [i_4 + 1] &= ((!((!(arr_3 [i_3] [i_4] [i_6])))));
                        arr_21 [i_3] [i_3] [i_4] [i_6] [i_5 + 1] [i_6] &= (((arr_4 [i_5 - 1] [i_4 + 1]) >= (arr_4 [i_5 + 1] [i_4 + 2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_19 = (158 < 4188264654385698160);
                        var_20 = (((arr_19 [i_3] [i_3]) >> (((arr_19 [i_3] [i_3]) - 463782677835397238))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
    {
        var_21 = ((!(arr_27 [i_10])));
        arr_34 [12] = ((46 / (arr_23 [i_10] [i_10] [i_10])));
    }
    #pragma endscop
}
