/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [10] [i_1] [i_2] [i_3] [10] = (var_9 == (((arr_10 [i_3] [13] [0] [i_1]) ? var_2 : (arr_7 [i_2 - 2] [i_2 + 1] [i_1] [i_0 + 1]))));
                            arr_12 [i_3] [i_2 - 2] [i_1] [i_0] [i_0] = ((!(((var_2 ? var_3 : (arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]))))));
                            var_10 = (5433158765659541533 * var_2);
                            arr_13 [i_0] [i_1] [i_2] [i_3] = ((+((((arr_9 [i_0] [i_0] [i_2] [i_3]) == var_8)))));
                        }
                    }
                }
                var_11 *= 9367654602248039646;
            }
        }
    }
    var_12 *= (0 == 570261198152839920);
    var_13 = 9079089471461511982;
    var_14 = ((((19714 == (44107 * var_8))) ? var_3 : ((((min(1208234665, var_7))) | var_5))));
    #pragma endscop
}
