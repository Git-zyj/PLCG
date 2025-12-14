/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 206;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((1172635953 ? (((arr_1 [i_0]) % (((1172635953 ? 1 : 32745))))) : ((-(11213241566855674668 & 5941902955364192241)))));
                    var_19 ^= (((max(var_10, (~18446744073709551615)))) ? (((5 ? 9223372036854775787 : -9223372036854775788))) : ((1093023231840633169 ? (~807250603382013176) : ((min(var_0, -6311053530549293356))))));
                }
            }
        }
    }
    var_20 = ((var_1 % (min((~9223372036854775787), 9223372036854775787))));
    #pragma endscop
}
