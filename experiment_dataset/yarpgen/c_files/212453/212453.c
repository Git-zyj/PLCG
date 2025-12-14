/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (!2999295738640916119)));
    var_18 += (!1331658723);
    var_19 -= var_3;
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = 59568;
                            var_22 = (((((~(arr_6 [i_0])))) >> (((min((arr_10 [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1]), (arr_8 [i_1 + 1]))) + 627449795))));
                            var_23 |= ((-((~(arr_10 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 2])))));
                            arr_13 [i_0] = ((+(((arr_7 [i_1] [i_1 + 2] [i_1 - 2]) ? (arr_7 [2] [i_1 - 2] [i_1 + 1]) : (arr_7 [i_0] [i_1 - 1] [i_1 + 2])))));
                        }
                    }
                }
                var_24 -= (((((~(arr_10 [i_0] [i_0] [i_0] [1] [i_1 + 2])) <= (min((arr_1 [i_0]), var_12))))));
                var_25 = arr_8 [i_1 - 2];
            }
        }
    }
    #pragma endscop
}
