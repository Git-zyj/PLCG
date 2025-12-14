/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~63);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_2, var_5));
                            var_16 = (max(var_16, (((((min(-32767, (((7 && (arr_6 [i_0] [i_1] [i_2] [i_3]))))))) ? ((min((arr_5 [i_2] [i_2 + 3] [i_2]), ((var_3 ? (arr_4 [i_0] [i_0] [i_2] [i_3]) : 1))))) : (min((var_11 && 1146), var_0)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = ((((!((max((arr_13 [i_0] [i_1] [i_4] [i_1]), 7))))) ? (arr_14 [i_0] [i_1] [i_4] [i_5]) : (max((arr_10 [i_0 - 1] [i_5 + 4] [i_1] [i_5]), var_11))));
                            var_18 = ((((min((min(var_4, var_11)), (arr_14 [i_0] [i_1] [i_4] [i_5])))) ? ((3 ? 1920 : -9984)) : (arr_12 [i_1] [i_4])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_19 = (((((((var_3 + 2147483647) << (((-7107868505421185401 + 7107868505421185414) - 13)))))) ? (((arr_16 [i_0] [i_1]) ? (arr_14 [i_0] [i_1] [i_6] [i_7]) : (arr_15 [i_0] [i_1] [i_1]))) : (arr_4 [i_0] [i_1] [i_6] [i_7])));
                            var_20 = 1;
                            var_21 = (min(-9969, (min(((70 ? var_8 : (arr_13 [i_0] [i_1] [i_6] [i_1]))), var_4))));
                            arr_21 [i_1] [i_1] = (((max((~var_7), ((-9984 ? -27349 : 474245919))))) || ((min((~1), ((((arr_4 [i_6] [i_1] [i_6] [i_6]) && var_13)))))));
                            var_22 = ((((((arr_10 [i_0] [i_1] [i_1] [i_7]) ? 63601 : 49181))) || ((!(arr_11 [i_0 - 2] [i_1] [i_6 - 1])))));
                        }
                    }
                }
                var_23 = (min((arr_3 [i_1]), (arr_2 [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
