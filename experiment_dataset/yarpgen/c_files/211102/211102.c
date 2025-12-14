/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -9223372036854775805;
    var_12 = ((((min(((max(var_6, var_6))), (min(-5055, 5055))))) ? 32732 : var_0));
    var_13 = (max(var_13, ((min(15843595656439954762, (max(2138088567098608318, var_0)))))));
    var_14 = (!15843595656439954762);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 *= (max(((((min(15843595656439954762, 32732))) ? (!var_4) : (!1344283976))), -575137509));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = 5055;
                            var_17 |= var_8;
                            var_18 = max(((((min(var_7, -5055))) ? -5080 : ((max(32804, var_7))))), var_0);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
