/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 1));
    var_14 = ((((((min(var_4, 57290))))) > 15869143495293291356));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = 1075541020004449994;
                var_16 = ((!(((~(min((arr_4 [i_1]), (arr_0 [i_0]))))))));
                var_17 |= 17189073299289163015;
                var_18 = (max(var_18, 7397912278645534148));
                var_19 ^= 3750331079051857972;
            }
        }
    }
    var_20 |= 1257670774420388600;
    #pragma endscop
}
