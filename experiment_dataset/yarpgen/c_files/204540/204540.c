/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~(min(17093149980710054603, var_4))))) || var_6));
    var_16 = (!var_4);
    var_17 += (max((((var_8 + (-8349660662952720934 == 0)))), var_1));
    var_18 += var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 &= (min((max(-17, ((max(113, var_9))))), (((((65930118 ? 18446744073709551615 : 1))) ? 18 : (((var_9 >> (-38 + 53))))))));
                var_20 *= ((!((min((max(3531338463, var_10)), (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
