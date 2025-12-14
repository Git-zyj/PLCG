/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (4672966989202495137 & 172);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (arr_0 [10]);
                arr_5 [i_0] [i_0] = ((((((65196 ? 229 : 177) < 1)))));
                arr_6 [3] [i_1] = -209;
            }
        }
    }
    var_19 = ((((-var_10 ? (12704689669016567993 * 0) : -6195625441599148649)) != -var_11));
    var_20 = (max(var_20, 229));
    #pragma endscop
}
