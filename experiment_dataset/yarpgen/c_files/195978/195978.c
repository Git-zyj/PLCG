/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (~((247 | (((var_19 ? var_4 : 66))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (min(var_21, 255));
                var_22 -= ((-((max(((((arr_1 [i_0] [16]) > (arr_3 [i_0])))), (arr_6 [i_0] [7] [7]))))));
                var_23 = (max(var_23, ((((!(arr_4 [i_0])))))));
                var_24 = ((var_5 ? (arr_2 [i_0]) : (arr_4 [i_0 + 4])));
            }
        }
    }
    var_25 = -var_5;
    var_26 = (((((-((max(var_16, 0)))))) & (((var_3 > var_7) ? (4294967270 ^ 8) : 4294967295))));
    #pragma endscop
}
