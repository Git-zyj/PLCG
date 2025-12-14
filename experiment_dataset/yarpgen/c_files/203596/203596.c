/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((max(8764228155151106933, (arr_3 [i_0]))) >> ((min(1, 1)))));
                arr_5 [i_0] [i_1] [i_1] |= (max((max((max((arr_2 [i_0]), var_5)), 1603274426943800802)), (arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_14 = (min(var_14, (255 && var_12)));
                    var_15 = (min(var_15, ((min(3348482800, -5256839264966436386)))));
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_3] [i_4] [i_3] = (((((var_11 ? var_2 : var_3))) ? ((min((arr_15 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 3]), (arr_15 [i_3 + 2] [i_3 + 3] [i_3 - 1] [i_3])))) : ((-(arr_15 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                                var_16 += ((((max(var_6, (arr_9 [i_3] [i_3 + 3] [5])))) <= 137438953471));
                                var_17 = ((-(((min(var_3, var_2)) + var_7))));
                            }
                        }
                    }
                    var_18 ^= var_8;
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_19 = -79;
                    arr_21 [i_0] [i_0] = (!(((3450854504 ? 40395001 : 946484496))));
                    var_20 ^= (((((((arr_19 [i_6] [i_1] [i_0]) < 1739904071509558754)))) / (((arr_19 [i_0] [i_0] [i_6]) ? var_11 : (arr_4 [4] [i_1])))));
                    arr_22 [i_0] [i_0] [i_0] = ((!((max(7581079302161103022, 38540913)))));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_21 -= (max(((((min(3348482800, 204)) << (-var_9 - 6269120940395501437)))), -1739904071509558754));
                    var_22 ^= ((((~2305843009213693951) / 720836720)) >> (-1739904071509558761 + 1739904071509558763));
                    arr_25 [i_0] [i_0] [i_1] [i_7] = min((!var_1), (max((arr_4 [i_0] [i_0]), (arr_4 [i_1] [i_0]))));
                    var_23 = (min(var_23, (((-(min((max((arr_9 [i_7] [i_1] [i_0]), var_7)), -38540907)))))));
                }
            }
        }
    }
    var_24 = (~946484499);
    #pragma endscop
}
