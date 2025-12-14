/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = ((((!((!(arr_1 [i_0] [i_1]))))) ? (((3 != (arr_9 [i_0] [4] [i_0])))) : (((((arr_0 [i_0] [i_2]) & (arr_4 [i_0])))))));
                        arr_11 [i_0] [i_2] [i_3] = ((~((((((!(arr_2 [i_0] [i_1] [i_0]))))) * var_7))));
                    }
                }
            }
        }
        var_12 = (!var_7);
    }
    var_13 = (min(var_13, (((((((var_8 + 1978978900) ? var_6 : ((1978978899 ? var_3 : var_10))))) ? ((var_3 ? (var_3 & var_1) : var_10)) : ((((max(var_6, 2315988388)) >> (var_0 - 7703983620374057003)))))))));
    #pragma endscop
}
