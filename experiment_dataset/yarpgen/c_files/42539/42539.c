/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((max(-80, (-9223372036854775807 - 1)))), 14489485160236577852));
    var_12 -= (min(((max(0, var_9))), (((((max(var_1, 14489485160236577845))) ? (max(-9223372036854775782, var_5)) : -150434956)))));
    var_13 = (max(((var_0 ? (min(var_6, var_0)) : (((34266 ? 55 : 67))))), ((((-74 ? var_8 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_14 = (((((var_3 ? 0 : 34266))) ? var_7 : 127));
                            var_15 = (min(var_15, ((max(-55, var_6)))));
                            var_16 = ((((min(43743, ((32756 ? var_6 : var_5))))) ? (64924 & var_8) : (((((var_2 ? var_9 : 34266))) ? ((min(-56, var_6))) : (min(9223372036854775807, 3104460582))))));
                            var_17 = ((max(4025517774212138861, 65535)));
                        }
                    }
                }
                arr_14 [i_0] = (min((((max(-1355190474, 37272)))), ((((max(var_1, 63))) ? ((max(var_3, var_7))) : var_0))));
                var_18 = max(var_7, (max(-1355190451, var_1)));
                var_19 = var_9;
            }
        }
    }
    var_20 ^= ((17734093 ? 5397034838711055187 : 112));
    #pragma endscop
}
