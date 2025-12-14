/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = 79;
                arr_5 [i_0] = (arr_3 [i_0] [i_1]);
                var_19 = (max((((arr_0 [i_0]) ^ (arr_0 [i_1]))), 187));
                arr_6 [i_1] |= ((((max(610545358, 8))) - -610545346));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = 0;
        var_20 = ((((((-610545345 ? -807578031 : 254)))) ? ((((125 || 65) && (arr_10 [i_2] [i_2])))) : (((arr_7 [i_2] [i_2]) ? 610545346 : (125 || -22)))));
        arr_12 [i_2] = (((arr_7 [i_2] [i_2]) & (((246 - 13) ? (((-610545345 < (arr_8 [i_2])))) : ((-1487542980 ? (arr_8 [17]) : 8))))));
        var_21 = (((-10 % 65) ? (((arr_8 [i_2]) ? (arr_8 [i_2]) : 1)) : ((max(2147483637, 187)))));
    }
    var_22 = (((min(var_0, -var_9)) | ((1 ? 0 : 1))));
    #pragma endscop
}
