/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (arr_6 [i_0] [i_2]);

                    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [0] [i_2] [i_3] |= (min((arr_8 [i_0] [10] [10]), (arr_8 [i_3 + 1] [i_3 + 1] [i_3])));
                        var_14 &= ((((max((((arr_2 [i_2]) ? var_10 : -30028)), ((var_12 ? (arr_3 [5]) : var_1))))) ? (arr_4 [i_0] [i_0] [i_0]) : ((~(arr_6 [i_1] [i_3 + 1])))));
                        var_15 = 4264;
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = (!61255);
                    }
                    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_16 *= 2147418112;
                        var_17 = ((~(max(((max(2591459751129663886, var_9))), (arr_9 [i_0])))));
                        var_18 = ((min(((var_9 ? 515981098 : var_4)), ((max((arr_13 [1] [i_0] [21]), (arr_1 [10])))))));
                        arr_15 [i_0] [1] [i_0] = ((~((max(112, 0)))));
                    }
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_19 |= (2925 > 2391966208133213547);
                        var_20 = ((515981108 ? ((562949953420800 ? 0 : 132)) : ((~(arr_5 [i_2] [7])))));
                        var_21 = min(((((max((arr_2 [i_5 - 3]), 65024))) ? (var_13 > var_6) : (arr_14 [i_5] [i_5 + 1] [1] [i_5] [i_5 - 1] [i_5]))), ((-(140 > 4264))));
                        var_22 = 1;
                    }
                }
            }
        }
    }
    var_23 -= var_1;
    var_24 += ((1087048682 ? ((min((!-65), var_5))) : (min(((112 ? -92 : 112)), var_6))));
    #pragma endscop
}
