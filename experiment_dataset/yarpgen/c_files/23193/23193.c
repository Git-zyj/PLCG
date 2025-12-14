/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (207840868 * 2047);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((82 > (((arr_5 [i_0 - 2] [i_0 + 1] [i_0 - 4]) / (arr_4 [i_0 - 2] [i_0 + 1] [i_0 - 4])))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_22 = (((((-var_12 ? 2047 : (arr_3 [i_1] [i_1])))) ? 4294967295 : (((~var_11) ? 1843509355 : (((arr_9 [i_0 - 2] [i_0 + 3]) - var_9))))));
                    var_23 = arr_7 [i_0] [i_1] [i_1] [i_2];

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0 - 1] [i_1] [i_1] [i_0 - 1] = -216;
                        arr_13 [i_1] = ((+((((arr_1 [i_1]) != (arr_1 [i_3]))))));
                        arr_14 [i_2] [i_2] [i_1] [i_2] = (((((max(8, 1946587693)))) ? (((arr_9 [i_0 + 1] [i_0 + 2]) | ((max(4036317393, 853479180))))) : (((var_19 ? -1946587694 : var_16)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_18 [i_0 - 3] [i_1] [i_1] = (arr_11 [i_0 + 2]);
                        arr_19 [i_0] [i_0] [i_0] [i_1] = 1;
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_22 [i_1] [i_1] = (!1843509354);
                        var_24 = 195;
                        var_25 = (max((min(4112292453572249819, 1600763006)), ((((arr_9 [i_0 - 3] [i_5 - 1]) > 60)))));
                        var_26 = (~var_2);
                    }
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    var_27 = (((4294967295 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 4]))));
                    var_28 = ((((-var_1 & (((arr_3 [i_1] [i_1]) ? (arr_11 [i_0]) : 1)))) > 3767));
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_29 = -1187755017596248340;
                                var_30 = 1499723233;
                            }
                        }
                    }
                }
                arr_31 [i_1] [i_1] [i_1] = 4294967279;
                var_31 ^= (max((min((arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1]), (arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1]))), 1));
            }
        }
    }
    var_32 = (max(64287, 1));
    #pragma endscop
}
