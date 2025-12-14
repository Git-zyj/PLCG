/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_11 = (max(var_11, ((((1 & 1) ? ((2547255390643611997 ? 2547255390643611997 : (arr_1 [i_0] [i_0]))) : ((((-13622 == (arr_1 [i_0 - 1] [i_0 + 4]))))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_12 += ((((((13622 == (arr_4 [i_0] [i_3] [i_1 + 1] [i_0 + 3]))))) & ((var_6 ? (arr_3 [i_0 - 1]) : 0))));
                        var_13 = (((((((17912107698684226139 ? 55758 : (arr_8 [i_1] [i_0] [i_1] [i_3])))) ? (arr_4 [i_0 - 1] [i_1] [i_1 - 2] [3]) : var_1)) % (arr_2 [i_1])));
                        var_14 += ((((min((arr_10 [i_0 + 1]), (arr_10 [i_0 + 3])))) ? (((5998744489791136154 <= (arr_10 [i_0 + 2])))) : (((!(arr_10 [i_0 + 3]))))));

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_3] = ((170 - ((11925987614884644492 >> (7206 - 7194)))));
                            var_15 = ((((max(var_8, (max(2018250618293712128, 21463))))) ? (max((arr_2 [i_1]), (((9759 ? 13622 : (arr_0 [i_0 + 2])))))) : (max(177506374, -8887725794068128048))));
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = 42608;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_1] [i_3] [i_1] [i_1] [i_1] = var_9;
                            var_16 &= (max(((2723154495010017093 ? -65211 : (((arr_17 [i_3]) ? 3561865699 : 7945)))), ((((arr_0 [i_0 + 1]) <= ((~(arr_3 [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((74 ? 86 : 17217217563638558607));
    #pragma endscop
}
