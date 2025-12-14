/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((!9223372036854775807), (((((9223372036854775807 ? var_11 : 9223372036854775782))) || (((var_15 ? var_0 : var_2)))))));
    var_21 = (min((((3528949431 ? 766017865 : 3528949439))), var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 &= ((~((-(arr_0 [i_1] [i_1])))));
                arr_4 [i_0] [14] [i_0] &= ((-((((var_3 ^ -1989173293) == ((3528949420 ? 1362950506 : 27)))))));
            }
        }
    }
    #pragma endscop
}
