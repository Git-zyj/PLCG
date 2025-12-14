/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] = (((((((max(1125899906842496, 1))) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_1])))) ? (arr_2 [i_0] [i_0] [24]) : 49538));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = (((((arr_1 [i_0]) / var_6)) * (arr_3 [i_2] [i_2] [i_2])));
                            var_14 = (min(var_14, ((((arr_8 [i_0] [i_1] [i_2] [i_0] [i_0]) || ((min(((max(-3297286217839114815, (arr_2 [i_3] [i_3] [i_2])))), (((arr_2 [i_2] [i_1] [i_2]) ? (arr_0 [i_0] [i_2]) : 2128449868917941028))))))))));
                            var_15 = ((!((((arr_7 [i_0] [i_0]) * (arr_7 [3] [i_3]))))));
                            var_16 = (min(var_16, 0));
                            var_17 = (((((((var_5 ? 192 : 92))) ? 1417873883 : (arr_2 [i_3] [i_0] [i_0]))) | (((!(var_6 * var_8))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_8 >> (((((max(var_4, var_5)) * var_9)) - 17528212909169283786)));
    #pragma endscop
}
