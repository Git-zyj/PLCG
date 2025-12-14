/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (min((((1222070317771236751 ? 1 : 0))), 4209281792));
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_13 += (((((1 / ((min((arr_1 [8]), var_3)))))) ? 32736 : (((arr_0 [9] [i_0 + 2]) / (arr_0 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((~(((arr_6 [i_1] [i_1 + 1]) ? (arr_5 [12]) : (arr_5 [i_1])))));
        arr_8 [8] = (min((((608865236 ? 1 : 29004))), ((((var_11 ? (arr_4 [i_1]) : 0)) << (32736 == var_5)))));
        arr_9 [i_1] = (arr_5 [12]);
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    {
                        var_14 = ((((min((min(1, 529379916142952573)), (max(1, 13858988818104470962))))) ? 28997 : (min(-var_7, (arr_10 [i_4] [i_3])))));
                        var_15 -= (((3224033521338418832 && (arr_5 [i_5 - 2]))));
                        arr_20 [i_5] [i_4] [i_3] [i_5] = (min(((min((arr_14 [i_2] [i_5]), var_2))), (((!(arr_17 [i_2] [i_2] [i_4] [i_5 - 2]))))));
                        var_16 = arr_14 [16] [i_4];
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_26 [i_2 + 1] [i_6] [i_7] = 55151;
                    var_17 = (!var_12);
                    arr_27 [10] [i_6] [i_6] = (((((((min(101, 1))) && ((!(arr_15 [i_2] [i_2 - 1])))))) <= (arr_15 [i_2] [i_7])));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_18 += ((((!((((arr_17 [15] [15] [15] [i_8]) >> (var_0 + 812822779)))))) ? ((((max((arr_11 [i_2]), var_10))) ? var_8 : (((~(arr_23 [i_9] [i_6])))))) : (((((min((arr_25 [i_9] [i_7] [i_6]), 3224033521338418832))) ? (arr_15 [i_9] [i_6]) : 160)))));
                                var_19 = (max(-32747, (min((arr_24 [i_6] [i_2 - 1]), (arr_29 [i_9] [i_9] [i_8] [i_7] [i_6] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = -9262;
    #pragma endscop
}
