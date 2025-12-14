/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_13;

    for (int i_0 = 1; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_21 = (156 == 166);
            var_22 = ((var_10 >> ((((((((arr_3 [i_1 - 2]) ^ var_1))) ? 94 : (var_10 | var_14))) - 73))));
            var_23 = (min(var_23, var_5));
        }
        var_24 &= (((~-1151265375) != (!0)));
        var_25 = 1;
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    var_26 = ((((max(156, ((var_6 ? 114 : -1196882600420562830))))) ? var_3 : (((((35 & var_5) != var_4))))));
                    var_27 = ((((((arr_5 [i_3 - 1]) ? (arr_5 [i_3 + 1]) : var_16))) ? (((((!var_15) >= ((-1010322841 ? 5990200668219087306 : var_11)))))) : (((var_11 >= (arr_2 [i_2] [i_3]))))));
                    var_28 = ((~(arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                }
            }
        }
        arr_12 [i_2] = ((29416 >> ((((~(arr_8 [8] [i_2 + 1]))) - 2189294508))));
        var_29 = (arr_3 [i_2 + 1]);
    }
    #pragma endscop
}
