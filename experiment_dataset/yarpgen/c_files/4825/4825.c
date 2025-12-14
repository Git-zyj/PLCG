/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max((179 && 0), 16384));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((!var_5) | var_19));
                var_22 = (max(var_22, ((max(((max(28248, 204))), ((((var_7 ? 405048389467211527 : 1)) | var_11)))))));
                var_23 = (((((var_14 ? var_2 : var_17))) ? (!var_12) : (23595 || var_1)));
                var_24 = (((max(var_9, ((1725593599 ? var_1 : 1)))) / var_1));
            }
        }
    }
    var_25 *= (10528029115958927881 / 65);
    #pragma endscop
}
