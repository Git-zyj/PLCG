/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (min(((-var_3 + (arr_1 [i_0]))), var_9));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((!((max(13845, (((arr_3 [i_1] [i_1] [i_1]) ? var_2 : var_5)))))));
                        var_10 = ((51691 ? 53999 : 51701));

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = arr_10 [i_3] [6] [i_3] [6];
                            var_11 -= ((29743 << (((min((arr_9 [i_4] [i_4] [i_4 + 3] [i_4]), ((51703 ? (arr_4 [i_2]) : (arr_10 [6] [i_1 + 2] [i_2] [i_4 - 1]))))) - 24686))));
                            arr_16 [2] [i_1] [i_2] [10] [i_3] [i_4] = (((min((arr_12 [i_3] [i_4] [i_4 - 1] [8] [i_0] [7]), ((var_2 ? (arr_8 [i_1] [i_2]) : 13842)))) >= (((arr_0 [i_0 + 3]) ? var_6 : (arr_0 [i_0 - 4])))));
                            var_12 = (((((~((min(51691, var_7)))))) || ((max((((arr_7 [i_0] [i_0]) ? (arr_5 [i_4 + 1] [i_1]) : var_4)), 51699)))));
                        }
                    }
                }
            }
        }
    }
    var_13 = ((var_8 ? (((((var_0 ? var_7 : 6800)) >= -var_0))) : (((((var_9 ? var_2 : 57775))) ? ((var_8 ? var_0 : var_1)) : ((max(var_6, var_7)))))));
    var_14 = ((var_8 ? (((~8679) ? ((min(var_4, var_3))) : ((min(var_4, var_2))))) : ((13820 % ((51691 ? 53197 : 13832))))));
    #pragma endscop
}
