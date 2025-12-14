/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_2;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (var_8 <= var_7);
                        var_17 = (((((~(~63197)))) != ((4421 ? var_5 : (arr_1 [i_0 + 1])))));
                        arr_12 [i_0] [i_0] [15] [i_3 + 1] = (arr_7 [i_0] [i_1] [i_0] [i_3 + 2]);
                        var_18 = (min(var_18, (min(((max((arr_2 [i_2 + 1]), var_14))), (max((4041841782 || 2341), ((var_10 ? 16320 : (arr_6 [i_0] [12] [i_2])))))))));
                        var_19 = (min(var_19, (((var_2 ? 16302 : 228)))));
                    }
                }
            }
        }
        arr_13 [i_0] = (((((-var_1 / (min((arr_6 [18] [i_0] [i_0 - 1]), -14290))))) ? (arr_9 [i_0] [12] [i_0] [i_0]) : ((((var_9 && 0) * (!4041841782))))));
        arr_14 [i_0] = (max((((!(((arr_5 [i_0]) && var_11))))), -16340));
        arr_15 [i_0] [i_0] = (((~(arr_7 [i_0 + 1] [i_0 + 1] [i_0] [1]))) | (((arr_7 [i_0 - 1] [i_0] [i_0] [i_0 - 1]) & (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))));
    }
    var_20 = (min((((min(var_8, var_8)))), var_0));
    #pragma endscop
}
