/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_10 = ((((!(((11 ? -44 : 1))))) ? (arr_1 [i_0]) : (~1)));
                var_11 = ((((((-54 > 0) ? -44 : ((max((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_1] [i_0]))))))) ? ((((arr_4 [i_1] [i_1]) || 255))) : (max(-71, ((-43 ? 0 : 61))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = (((((max(-22074, (arr_2 [i_0]))))) ? -44 : (((arr_7 [i_0] [i_1 + 1] [i_2] [i_1]) % (~-1643170834)))));
                            var_12 = (max(var_12, (((((max(-71, -0))) ? ((+((max((-32767 - 1), (arr_10 [i_0] [i_2] [i_2] [i_3] [i_2] [i_2])))))) : ((((!(arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3]))) ? (-2147483647 - 1) : ((min(-44, 221))))))))));
                        }
                    }
                }
                arr_13 [i_1] = (((((((arr_0 [i_0] [i_0]) == (arr_11 [i_0] [i_1] [i_0] [i_1 + 1] [i_1] [i_0])))) <= ((32767 - (arr_4 [i_1] [i_1]))))));
            }
        }
    }
    var_13 = min(var_6, (!var_0));

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_16 [i_4] [i_4] = (((((!(~-81)))) < (arr_15 [i_4])));
        arr_17 [i_4] = (((max(-14826, ((64 ? (arr_15 [i_4]) : (arr_15 [i_4]))))) < -1));
        arr_18 [i_4] = 149;
    }
    var_14 = ((((91 ? ((-92 ? var_7 : 81)) : ((max(-44, 15868))))) < var_9));
    #pragma endscop
}
