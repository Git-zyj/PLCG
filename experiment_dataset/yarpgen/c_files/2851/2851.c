/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((((!(((var_17 ? var_17 : 25))))) ? var_8 : var_7));
    var_19 = (min(var_19, ((~((var_8 ? (((var_1 ? var_6 : var_6))) : (~3829428701)))))));
    var_20 = ((((-767655250 != ((1 ? 12 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = arr_2 [i_1] [i_0];
                arr_7 [i_0] = var_5;
                var_21 ^= (arr_5 [i_0]);
                var_22 -= ((max((arr_3 [i_0] [i_1] [i_1]), (~239))));
            }
        }
    }
    #pragma endscop
}
