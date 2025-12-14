/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = 2739919810285498328;
        arr_2 [i_0] [i_0] = ((((var_9 ? (!var_9) : (min((arr_0 [i_0]), (arr_1 [i_0]))))) << (((!(((-8405647822547817974 ? (arr_1 [i_0]) : 10025891610614477322))))))));
        var_18 = 8405647822547817974;
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 ^= (-32767 - 1);
                    arr_10 [i_0] [i_0] [1] [6] = (((((((min(6043101100988973319, 21))) ? (!var_2) : (arr_8 [i_0] [i_1] [i_1] [i_2])))) ? 2418574033 : var_2));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 = ((!((max((arr_12 [i_3] [i_3]), (arr_11 [i_3]))))));
        var_21 = (arr_11 [i_3]);
    }
    var_22 = (var_12 && 8420852463095074294);
    var_23 ^= (((((!(-9223372036854775807 - 1))) ? (var_9 <= var_6) : var_10)));
    var_24 = (max(var_24, ((((!var_6) ? var_14 : (((!234) - var_7)))))));
    #pragma endscop
}
