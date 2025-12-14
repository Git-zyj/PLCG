/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(min(((var_16 ? var_5 : var_2)), var_6))));
    var_20 = var_6;
    var_21 = -16052;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [3] = ((~(((var_7 ^ -8) ? ((8650831900028187499 ? 17099232294491699079 : (arr_4 [10] [10] [10]))) : -var_3))));
                var_22 |= (+((+((17332934097801314952 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_2 [i_1]))))));
                arr_6 [i_0] [i_0] = ((+((min((arr_2 [i_0]), (arr_0 [i_1]))))));
                arr_7 [i_0] [i_0] = arr_4 [i_0] [i_0] [i_1];
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
