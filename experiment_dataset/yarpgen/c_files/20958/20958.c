/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (2101556972 * 0)));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 += (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])));
        arr_4 [i_0 - 1] &= (((arr_0 [i_0 - 1] [i_0 + 1]) != (((-1195122162 ? 6916268662679794842 : 6916268662679794849)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 += ((91 ? 6916268662679794842 : 105));
                    var_19 = (max(var_19, (arr_3 [i_0 - 1])));
                }
            }
        }
        arr_9 [i_0 + 1] &= -346270785;
    }
    var_20 = (min(var_20, var_11));
    var_21 &= (((((255 ? var_3 : 2101556952)) % var_11)));
    var_22 += (-2101556953 ^ 445359718);
    #pragma endscop
}
