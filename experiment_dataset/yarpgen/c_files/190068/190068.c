/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (1 + var_8);
    var_21 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (((var_7 || 9223372036854775807) || (4830387358634624577 && var_19)));
                arr_5 [i_0] = (min((arr_4 [i_0]), ((var_19 ? 254 : var_17))));
                arr_6 [i_0] [i_0] [i_0] = 1;
            }
        }
    }
    var_23 = ((((21741 <= (min(1, 1305468484)))) && 1));
    #pragma endscop
}
