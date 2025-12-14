/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((1579686684 ? var_16 : var_10)), ((var_8 ? var_14 : 1))))) ? (((((((-32767 - 1) + 0))) ? var_1 : -25))) : (min(var_3, ((min(var_13, var_10)))))));
    var_20 = (min(var_20, 11237));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [23] = ((17695 ? ((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 3]) : (arr_0 [i_0 + 2])))) : ((6 ? 1 : 10703600910327916672))));
        var_21 = (!var_0);
        arr_4 [12] [12] = ((((max((arr_0 [i_0 + 3]), (arr_1 [i_0 + 4])))) ? var_13 : (((((max(var_10, 32760))) > ((3986782472 ? 11237 : 155)))))));
    }
    var_22 *= var_0;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            {
                var_23 = ((((((arr_8 [i_1]) == var_12))) & (((arr_8 [i_1]) ? (arr_8 [i_2]) : var_9))));
                arr_10 [i_1] [i_1] [i_2] = ((var_4 ? var_4 : (((255 ? 211 : (var_7 == 3369316505))))));
                arr_11 [i_2] [i_1] [i_2] = (!30567);
            }
        }
    }
    #pragma endscop
}
