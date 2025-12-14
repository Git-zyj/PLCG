/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_5 % var_8) ? ((65532 ? 59405 : 65528)) : (var_6 < var_5))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_14 = ((~(((((~(arr_0 [i_0])))) ? (min(16533225946874889873, 12)) : (arr_0 [i_0])))));
        var_15 = (min(var_5, (min((!var_10), ((var_12 ? (arr_0 [i_0 + 1]) : -121))))));
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_16 += (((((var_4 ? var_1 : (arr_4 [i_2] [i_3])))) && ((((arr_9 [i_1 - 2]) ? (arr_9 [i_1 - 1]) : (arr_9 [i_1 + 1]))))));
                    var_17 = (arr_8 [20] [6]);
                    arr_13 [i_1] [i_1] [i_3] = (((((((arr_3 [i_1] [i_2]) ? (arr_11 [i_1] [i_1] [i_2] [17]) : var_10)) != ((0 ? var_5 : var_10)))) ? -1 : ((((((13 ? -7644 : 16533225946874889873))) || (((var_7 ? var_10 : 42))))))));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = (max((~var_8), (-32756 < 17592186044416)));
    var_20 = (max(var_20, (((~((((~var_8) < ((-7644 ? var_9 : 76))))))))));
    #pragma endscop
}
