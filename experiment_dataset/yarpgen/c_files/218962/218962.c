/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = (max(-31334, ((65535 ? 31554 : (175 & 65532)))));
                var_18 = 65535;
            }
        }
    }
    var_19 = (min(var_19, (max(((31334 + (4294967295 / 31332))), ((((max(12027, 0))) ? (46903 / var_8) : (2304235016 / 53)))))));
    var_20 = (max(var_0, ((((min(var_1, 30981))) ? var_16 : ((var_2 ? var_5 : 22450))))));
    var_21 = (max(var_21, ((((226 | 56584) == 210)))));
    var_22 = (max(var_22, var_4));
    #pragma endscop
}
