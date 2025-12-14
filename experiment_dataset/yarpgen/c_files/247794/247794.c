/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] &= ((~(max((arr_4 [i_0] [i_1]), 313118557))));
                arr_8 [i_0] [i_1] |= ((-((32767 ? (arr_4 [i_0 + 1] [i_1]) : (arr_0 [i_0 + 1])))));
                arr_9 [i_0] [i_1] [i_0] = 1;
            }
        }
    }
    var_10 -= (!var_5);
    var_11 -= (((max(1, (var_0 % var_5))) & (((4293111763 && var_6) % var_3))));
    var_12 = ((max((var_8 + -32763), (((var_3 ? -1811515560 : 24))))) == var_1);
    #pragma endscop
}
