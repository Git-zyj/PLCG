/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((-9223372036854775807 - 1), 60124));
                var_17 += (arr_1 [i_0] [13]);
            }
        }
    }
    var_18 ^= -var_6;
    var_19 ^= ((var_13 ^ (((!-6318314074225533365) ? ((max(var_8, 5412))) : (var_3 % var_9)))));
    var_20 ^= ((~-var_15) ? ((var_0 << ((((4611686018427387904 ? 9153339908640813583 : 1537905898)) - 9153339908640813565)))) : var_0);
    #pragma endscop
}
