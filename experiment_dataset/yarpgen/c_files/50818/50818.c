/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((4294967291 ? 1 : 109))) * 0))) ? (max(var_5, 4294967295)) : (((((max(139, 116))) - 139)))));
    var_17 = (max(117, 8382027754644864107));
    var_18 = (min(var_18, ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << ((((((((586741300 ? (-2147483647 - 1) : 87)) - -2147483617)) + 37)) - 6)))))));
    var_19 ^= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((!((max((var_6 | -101008712), (((-2147483647 - 1) ? 73 : 586741300)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = -21719;
                            var_22 = (((-2147483643 % 201) * (-127 - 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
