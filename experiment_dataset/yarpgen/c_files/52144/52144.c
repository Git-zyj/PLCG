/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((10745 + 389596284414468065) ? -5155244286129887192 : (((32767 ? 483579257834192997 : var_8))))));
    var_15 += var_11;
    var_16 = (((--68) ? ((min((!1056339643505437542), var_11))) : -var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 1] = (((((var_11 ? (arr_3 [i_0] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? ((~(arr_3 [i_1] [i_0 + 1]))) : -32757));
                arr_6 [i_0] = (min((min(1, 98355960310781852)), (~var_4)));
                arr_7 [i_1 + 1] = (((-127 % (min(12923, -483579257834193008)))));
                var_17 |= -65535;
            }
        }
    }
    #pragma endscop
}
