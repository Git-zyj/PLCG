/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 0));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_19 = 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] = (((1550067214289805744 << 56) && 43225));
                        var_20 = 2;
                    }
                }
            }
        }
        var_21 += (1 % 1);
    }
    var_22 = ((((((0 << (-23 + 46))) ^ (((-24419 + 2147483647) >> (-2147483634 + 2147483643))))) << (((((-5808018590644616294 + 9223372036854775807) >> (1 ^ 1))) - 3415353446210159506))));
    #pragma endscop
}
