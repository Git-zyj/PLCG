/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (((((((var_1 ? var_9 : -1))) ? (!-2133139877) : (~820465187))) > (((var_14 && 49378) % var_14))));
    var_17 += (~var_13);
    var_18 -= (((+-1) || var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((((!(arr_3 [i_0] [i_1]))) || -1125449736))) ^ ((((((~(arr_1 [i_0])))) && (((0 / (arr_0 [i_1])))))))))));
                var_20 = (min(var_20, (((+((7081653104926798077 ? (-1824 || 3098515050223790481) : (618236232680905751 | 1))))))));
                var_21 = arr_0 [i_0];
            }
        }
    }
    var_22 += (!-var_10);
    #pragma endscop
}
