/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 = 1;
                        arr_12 [i_0] [i_0] [i_1] [1] [i_2 - 1] [i_1] = (min(0, ((max(49940, 16383)))));
                        var_13 &= (((((18446744073709551615 ? 4 : -354803124))) && 24));
                        var_14 = (min(var_14, 1274252221));
                    }
                    var_15 = ((((min(var_11, var_8))) ? ((((arr_9 [i_0] [i_0]) && ((((arr_10 [i_2] [i_2] [i_1] [1]) ? (arr_11 [i_0 + 1] [i_1] [i_2] [i_1]) : var_10)))))) : ((((((var_11 + (arr_5 [i_0] [i_1])))) && ((max(32252, var_4))))))));
                    arr_13 [i_0] [i_0] [i_1] = (((((((-97 ? 7250 : 1)) - (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1])))) ? -var_0 : ((((-13 ? (arr_8 [i_2] [i_1] [i_2] [i_2] [i_0] [i_0]) : var_5)) / (arr_1 [i_0 - 1])))));
                }
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
