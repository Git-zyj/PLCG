/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 += (arr_8 [i_3] [i_1] [i_3] [i_3]);
                            var_12 = (~(min((var_2 & 32758), (((arr_2 [i_0] [i_1] [i_0]) & var_1)))));
                            var_13 = (((((arr_2 [i_0] [i_2] [i_0]) < 1774996074)) ? ((max(var_6, (arr_8 [i_0] [i_0] [14] [i_0])))) : ((((max(var_8, var_3))) ? (((1774996081 ? 32752 : -673221986))) : ((58 ? var_2 : var_7))))));
                            var_14 = (((((((max(70368744177663, -32738))) ? (arr_10 [11] [i_0] [i_2] [i_2] [17] [i_2]) : 673221991))) || ((var_0 && ((max(var_0, 5028)))))));
                        }
                    }
                }
                arr_11 [i_0] = (min((((-32750 / ((1704755340 ? -303741573 : var_9))))), ((-(var_1 % 32741)))));
                arr_12 [i_0] [i_0] = ((arr_7 [i_0] [19]) ? 32751 : ((var_8 ^ (arr_5 [1] [i_0] [21]))));
            }
        }
    }
    var_15 = 5490;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_16 = ((((((arr_3 [i_6 + 1] [i_6 + 2] [i_6 - 1]) ? 60049 : var_0))) || -70368744177684));
                    var_17 = ((((max((1 % var_7), (!-7727)))) ? (((((((arr_3 [i_4] [i_5] [i_6 - 1]) ? 99 : 22922))) ? (!87) : (~-7721)))) : (max((~-70368744177653), (arr_9 [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_5])))));
                    arr_19 [i_4] [i_5] [i_5] = 7733;
                }
            }
        }
    }
    #pragma endscop
}
