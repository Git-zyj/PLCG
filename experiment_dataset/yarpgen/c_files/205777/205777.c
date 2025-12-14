/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-(max(var_11, 1166006103))))) ? ((max(((1166006103 ? -1 : var_8)), var_5))) : ((0 ? var_6 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((-(arr_7 [i_0] [i_2] [i_0] [i_0]))))));
                    var_14 = (max(var_14, (((var_5 / (5 * -28))))));
                    var_15 += ((-(((!(arr_3 [i_2] [i_1]))))));
                }
            }
        }
    }
    var_16 = (max(1166006103, 5970651582016484080));
    #pragma endscop
}
