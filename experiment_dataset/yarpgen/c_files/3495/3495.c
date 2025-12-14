/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((3507 ? ((((!6275) ? (arr_5 [i_0] [i_1] [1] [8]) : ((max(21351, 32686)))))) : (arr_3 [i_0] [17])));
                    arr_7 [8] [11] [i_0] = (((arr_1 [i_0] [i_2]) / 828243880));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((max(((29557 ? (arr_2 [0]) : (arr_6 [i_1] [i_2]))), 10424510740614094962)));
                    arr_9 [i_0] [i_0] [i_0] = 29557;
                    var_18 = (1 - 21366);
                }
            }
        }
    }
    var_19 = 16140141215217380659;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] = (((((arr_17 [12] [12]) ? (min(11, 1)) : ((((!(arr_14 [10] [i_4 - 1])))))))) ? (((((384 ? -19987 : 8022233333095456662))) ? (arr_4 [7] [i_4 - 1]) : 2281817058361088639)) : (arr_1 [i_3] [12]));
                    arr_20 [i_5] [i_5] [i_5] [4] = (max(((max((arr_13 [i_4 + 1] [i_5 + 1]), (arr_13 [i_4 - 2] [i_5 + 2])))), (((arr_13 [i_4 - 1] [i_5 - 1]) ? (arr_13 [i_4 + 1] [i_5 - 2]) : (arr_13 [i_4 - 2] [i_5 - 2])))));
                    arr_21 [i_3] [i_3] [i_3] [i_3] = (((((-((25953 ? 65535 : var_4))))) ? (32864 + -125) : (var_11 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
