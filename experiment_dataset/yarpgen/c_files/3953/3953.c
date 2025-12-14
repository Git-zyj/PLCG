/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 += ((-(min(4294967292, (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_17 = max(((max((arr_5 [i_2 - 1] [i_1] [i_2 + 1]), (arr_5 [i_2 + 1] [i_1] [i_0])))), var_2);
                        var_18 = (min(var_18, (((((((arr_9 [i_0] [i_1] [2] [i_3]) ? 428160913 : 19568))) / ((((((55063 ? (arr_2 [17] [1] [i_3]) : (arr_7 [i_1])))) ? ((min((arr_2 [i_0] [i_0] [i_2]), (arr_4 [i_1])))) : (min((arr_4 [i_3]), 1281304382))))))))));
                    }
                }
            }
        }
    }
    var_19 = (min((~var_10), 2094098899462062543));
    var_20 = (max(var_20, ((min((max(1966663570, -3549973866084400997), ((min(1966663570, var_13)))))))));
    #pragma endscop
}
