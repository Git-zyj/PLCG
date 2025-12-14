/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 *= (((((~(min(7461272777948198028, (arr_0 [i_0])))))) || 32763));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_20 &= (-0 || 32767);
            var_21 = (arr_1 [i_0]);
            var_22 = ((((min(((min((arr_2 [i_0] [i_1]), (arr_1 [i_0])))), 586045014835070277))) || (((~(arr_3 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_23 *= ((((arr_6 [i_0 - 1] [2] [i_0 - 1] [i_1]) ? (max(2147483647, (arr_5 [i_0]))) : (((arr_9 [i_1 - 2] [i_0]) ? (arr_3 [i_0] [i_1]) : (arr_4 [i_3] [i_2] [i_0]))))));
                        arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [11] = ((-31235 || (arr_4 [i_0] [i_0 - 1] [i_1 + 1])));
                        arr_13 [i_1] [i_2] [i_1] [i_1] [i_1] |= (((((((min(0, 128))) ? ((((arr_0 [6]) || (arr_11 [i_0] [i_3] [i_1] [i_2] [i_1] [i_1 + 1])))) : 1198265428))) ? ((((arr_3 [i_0 - 1] [i_1]) || (arr_3 [i_0 - 1] [i_1])))) : (~0)));
                    }
                }
            }
        }
    }
    var_24 = (max((((~var_7) ? ((var_9 ? var_13 : var_1)) : (((28084 ? 4294967295 : 23))))), 100));
    #pragma endscop
}
