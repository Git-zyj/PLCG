/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = min(((var_16 >> ((((109 ? 147 : -51404792)) - 135)))), (arr_5 [3]));
                    arr_8 [i_0] [i_1] [i_0] = (var_5 / 3030892085628546985);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 -= ((((((arr_2 [i_1]) - ((var_5 ? -1246517627 : 8589926400))))) ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]) : (((((var_4 ? 81 : 2254967485))) ? (arr_3 [i_0 - 1]) : (((arr_10 [i_2] [i_3]) ? 8745932587363461748 : (arr_2 [i_1])))))));
                                arr_13 [i_0] [i_1 + 1] [i_0] [i_4] = (arr_2 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= (max(var_13, var_8));
    var_20 = (min(((var_10 ? (min(var_5, var_7)) : var_11)), -9700811486346089840));
    var_21 = var_15;
    #pragma endscop
}
