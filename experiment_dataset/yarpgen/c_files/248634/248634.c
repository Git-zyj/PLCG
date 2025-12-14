/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!(-1435289244 + 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((~(var_11 | 18446744073709551612))) & var_4);
                arr_6 [i_1] = (arr_1 [i_0]);
                var_15 = ((((arr_3 [i_1] [i_1]) ? 2047 : 21)));
                var_16 = var_9;
                var_17 = (max(var_17, (((((((((-30 & (arr_0 [i_0])))) ? ((-(arr_1 [i_0]))) : (arr_4 [i_0] [i_1])))) ? (((((arr_2 [i_1]) ? 0 : 2045)) / (((min((arr_0 [i_0]), 31936)))))) : (arr_4 [i_0] [i_0]))))));
            }
        }
    }
    var_18 &= (((max(((((var_11 + 2147483647) >> 0))), var_3)) & 2047));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [i_4] [i_3] &= ((((((~0) ? (max((arr_2 [i_4]), var_3)) : ((((arr_14 [i_2] [i_3]) ? 17978 : var_9)))))) ? (min((((~(arr_3 [i_3] [i_3])))), 255)) : ((max(((var_7 ? -241820657 : var_6)), (-2117230199088081068 <= 2147483647))))));
                    arr_17 [i_2] = (min((((arr_4 [i_2] [i_2]) && 14265897274614586504)), ((-7288509994535906753 || (arr_11 [i_4 + 1] [0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_4 - 3] = ((((min(-8493285727720509089, (arr_18 [i_3] [i_4] [i_4] [i_4 + 1] [i_5] [i_5])))) ? ((((arr_20 [i_2] [i_2] [i_2] [i_4 - 3] [i_6 + 2]) >= var_8))) : ((min(-126, (arr_21 [i_3] [i_4 - 2] [i_4] [i_4 - 2] [i_6] [i_6]))))));
                                var_19 = (max(var_19, 18446744073709551612));
                                var_20 = ((!((((arr_9 [i_6] [i_3]) ^ (arr_3 [i_2] [i_2]))))));
                                var_21 ^= (max((max((arr_21 [i_4 - 2] [i_4] [i_4 - 2] [i_4] [i_5 - 1] [i_6 + 1]), (arr_18 [i_2] [i_3] [5] [i_5] [i_6] [i_2]))), (arr_8 [i_2] [i_2])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
