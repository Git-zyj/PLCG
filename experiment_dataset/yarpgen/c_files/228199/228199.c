/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_17, var_7));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(min(var_0, 11401003639551210176))));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = min((((arr_3 [i_1 - 1]) ? var_3 : 7045740434158341440)), ((((arr_1 [i_1 - 1]) ? var_2 : (arr_1 [i_1 - 1])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_1 [i_4]) && ((min(1, 2329593849)))));
                            var_19 = (min((((arr_7 [i_1 - 1]) * 281337537757184)), (arr_8 [i_0] [i_2] [i_4])));
                            var_20 = min((((0 || (-9223372036854775807 - 1)))), ((((max((arr_10 [i_4] [i_3] [i_2] [i_0] [i_0]), 7))) ? (min((arr_4 [i_0] [i_0] [i_0]), -959888741221311747)) : (4934991859753598591 * 1491462106))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            arr_17 [i_0] [i_5] [i_5] = (max((((arr_12 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5]) >> (!11401003639551210162))), ((13511752213955953025 ? (arr_15 [i_5 + 1]) : (7045740434158341439 || 442922277218824269)))));
            var_21 = ((((11401003639551210174 ? (max(var_7, var_1)) : (1 | 11401003639551210176))) >> (((max(((min(1, 1))), (49 * 227))) - 11078))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_21 [i_6] = ((var_9 ? ((((var_6 && (arr_18 [i_0]))))) : ((~(arr_18 [i_0])))));
            arr_22 [i_0] = ((((min((((4294967295 ? 1737616190 : 48))), (arr_7 [i_0])))) ? -216 : ((((max(-1111894200796908915, 7541943898521230881)) > (!4294967289))))));
            var_22 ^= ((-(arr_18 [i_0])));
            var_23 = ((722247107 ? 55 : 1));
            arr_23 [i_0] = (max(((min((arr_12 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), var_5));
        }
    }
    #pragma endscop
}
