/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 -= ((((((((2899667369687930393 & (arr_3 [13])))) ? ((2899667369687930393 ? 15547076704021621238 : (arr_3 [i_0 - 1]))) : (arr_2 [i_0] [i_0 + 2])))) ? 1 : -15547076704021621222));
                var_12 = var_2;
                var_13 |= max((min((arr_0 [i_0]), (max(536870911, (arr_3 [i_1]))))), (((var_7 >= (((!(arr_5 [1] [0]))))))));
            }
        }
    }
    var_14 = var_6;
    #pragma endscop
}
