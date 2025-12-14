/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 *= (min((((var_1 / var_15) ? -22933 : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]))), ((-22933 ? 17 : 122))));
                    var_19 = ((((((((var_14 ? var_16 : var_5))) ? ((max(var_7, var_7))) : ((min(var_15, var_12)))))) ? ((~(max(-1941088685182358562, 239)))) : ((var_1 ? -497046057 : -1941088685182358562))));
                    arr_7 [i_0] [i_0] [i_0] = (~-1337404088);
                    arr_8 [1] [i_1] [1] [1] = 97;
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
