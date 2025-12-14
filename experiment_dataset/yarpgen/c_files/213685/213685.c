/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (max((max((((arr_1 [i_0]) >> (58147 - 58132))), (((58147 >= (arr_1 [i_0])))))), var_4));
                    var_11 -= (max((max(-15403, 2260541629088788658)), ((((!var_2) ? ((-121 | (arr_2 [1] [1]))) : (!0))))));
                    arr_6 [i_2] = ((((((arr_2 [i_2 - 1] [i_0 - 1]) ? 1 : (~var_0)))) ? (((((max((arr_1 [i_2 - 1]), 7389))) ? 1023 : 32767))) : 18446744073709551612));
                    var_12 = (max(var_12, ((max(-1, -5968012551219229461)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_12 [18] [i_3] = 1;
                var_13 = (max((arr_1 [i_4]), (max(16777152, (arr_4 [i_3])))));
            }
        }
    }
    #pragma endscop
}
