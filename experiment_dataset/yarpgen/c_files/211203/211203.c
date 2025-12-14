/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [9] = ((+(((arr_0 [i_0]) % 105))));
                arr_5 [i_0] [i_1] = ((var_7 - ((-2920742100413821628 ? -31077 : 6291456))));
                arr_6 [i_0] [i_0] = (max((((((108 * (arr_2 [15])))) ? -var_8 : (min(var_17, (arr_0 [i_0]))))), (min(63, (max((arr_1 [i_1]), (arr_0 [6])))))));
            }
        }
    }
    var_19 |= (min(((max(var_16, var_12))), -14336));
    var_20 *= (~var_5);
    var_21 = (max(65535, -1));
    #pragma endscop
}
