/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (--2345556142857088056);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_20 = (((((((arr_1 [i_1]) ? var_0 : -1895640666))) * 16101187930852463559)) >> ((((((-78 ? 18113599642295181582 : 1152780767118491648)) << (((2345556142857088058 + 2147483634) - 2345556145004571636)))) - 1008806316530991072)));
                    var_21 = ((((32751 ? 17293963306591059955 : (~-2147483622))) ^ 53142));
                    var_22 &= (-1895640665 <= 10354465150322793349);
                    var_23 = ((((-4596811641888483990 + 9223372036854775807) << (((-2 + 7) - 5)))));
                }
                var_24 = (-(min((arr_1 [i_0 + 2]), -1757434170572662198)));
                var_25 = (((((((471552663 == (arr_3 [i_1] [i_0]))) ? 13167 : (((arr_1 [i_1]) * (arr_1 [i_0])))))) ? 32757 : (((((4197624022269758624 ? 1219213140 : -32752))) ? 1431 : 3248692596))));
                var_26 = (arr_3 [i_1] [i_0]);
            }
        }
    }
    var_27 = (-81 * -32761);
    #pragma endscop
}
