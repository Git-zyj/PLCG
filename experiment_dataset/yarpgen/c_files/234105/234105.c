/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_13 ? -var_11 : var_13))) ? (min((((var_8 ? var_15 : var_8))), ((var_11 ? var_13 : var_3)))) : (var_11 | var_18)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((((((((arr_3 [i_1]) >= 24212)))) + 237342789))) ? 15064 : 65535);
                arr_6 [i_1] = -15055;
            }
        }
    }
    var_20 = (((((-var_10 + 2147483647) << (((min(65535, var_13)) - 65535)))) & 32));
    var_21 = (((~var_18) ? (((-(var_10 != var_9)))) : (((~1204380546) ? -1575329905 : -var_13))));
    #pragma endscop
}
