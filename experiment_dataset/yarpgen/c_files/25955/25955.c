/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(((min(127, var_12))), var_8)), 98));
    var_19 += ((var_10 ? (77 > 1) : (((max(var_8, 125))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((min((arr_4 [i_1] [i_1] [i_0]), (arr_3 [i_0] [i_0] [i_1])))) ? (arr_4 [i_1] [i_1] [i_0]) : 18639);

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    var_20 -= (((((min(1, (arr_0 [i_0]))))) == ((min((arr_4 [8] [8] [8]), 4418)))));
                    var_21 *= (max(-99, -31644));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((min((arr_7 [i_0] [i_1] [i_0] [i_2 - 3]), (min(-124, (arr_6 [i_0] [i_1]))))));
                    var_22 = ((((((min(-115, (arr_6 [i_0] [i_0])))) ? (max((arr_7 [i_0] [0] [i_1] [i_2]), 12)) : (((1 ? 1 : -113))))) >= (min(2869207816, 1))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_23 = ((((min((arr_8 [i_0] [i_1] [i_3] [i_0]), (arr_12 [i_1] [i_1] [i_0]))) << (98 - 43))));
                    arr_13 [0] [i_1] [i_0] [i_0] |= ((-92 ? ((min((arr_1 [i_1]), (arr_1 [i_3])))) : ((24455 / (arr_1 [i_0])))));
                    var_24 = (min(var_24, 1));
                }
                arr_14 [i_0] = ((4294967295 ? 79 : 21516));

                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    arr_17 [i_0] [i_1] = (max(0, ((~(arr_12 [i_4] [i_4 + 2] [i_4 + 1])))));
                    var_25 = (~-1);
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_26 = (((min((((arr_1 [i_0]) ? 78 : (arr_0 [i_0]))), ((min(-13172, 1)))))) ? (min(-111, (arr_8 [7] [i_1] [i_1] [i_1]))) : -12827);
                    var_27 = (min(var_27, (((((max(-22098, 652655156))) ? 1 : ((max(1, (arr_11 [i_0] [i_0] [i_0])))))))));
                }
                for (int i_6 = 1; i_6 < 9;i_6 += 1)
                {
                    var_28 += (max(((~(arr_11 [i_0] [i_6 + 2] [i_6]))), 1));
                    arr_23 [i_6] = (((((~(max(-31644, 9149016836965730773))))) ? -5 : (((((-11 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : (arr_19 [i_6 + 1] [i_1] [i_1] [i_0])))) ? 228218371 : (1 >= 1)))));
                    var_29 += (~1675847852);
                }
            }
        }
    }
    #pragma endscop
}
