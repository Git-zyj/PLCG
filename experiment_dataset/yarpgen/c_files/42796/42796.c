/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (arr_8 [2] [i_1] [i_2]);
                                var_14 = (((((6244 ? ((var_8 ? (arr_9 [i_3] [i_3]) : var_6)) : (((min(126, var_11))))))) ? (((((3206818195 ? 78 : var_12))) ? (~var_2) : (arr_11 [i_3] [i_3] [4] [i_0] [i_4]))) : ((var_0 ? var_3 : var_11))));
                                arr_14 [i_2] [i_3] [i_4] = (min((((-38 < ((var_6 ? -744081304 : 78))))), ((((min(14666, 78))) ? ((var_7 ? 2711227703 : (arr_9 [i_3] [i_1]))) : var_5))));
                                arr_15 [i_0] [8] [i_2] [i_4] [0] [i_0] [i_4] &= ((!((!((max(32768, (arr_0 [i_0] [i_1]))))))));
                            }
                        }
                    }
                    var_15 = (max((arr_5 [i_1] [i_1] [i_1]), ((((arr_11 [i_0] [16] [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : var_9)))));
                }
            }
        }
    }
    var_16 = ((var_7 ? (min(((var_10 ? var_12 : var_10)), (((var_8 ? 32768 : 32768))))) : 2175436658));
    var_17 = (max(var_17, (((var_10 ? ((0 ? var_4 : (~62320))) : 3206818195)))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                arr_21 [i_5] |= var_0;
                var_18 = ((var_9 ? 4294967277 : (min((arr_11 [i_5] [12] [i_5 + 2] [i_5 - 1] [i_5 + 1]), (arr_4 [i_5] [i_5] [i_5 + 2])))));
            }
        }
    }
    #pragma endscop
}
