/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((max((var_6 < 4294967292), ((var_4 ? var_5 : 229)))));
    var_12 = (min(1, ((((max(var_3, var_7))) || var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 ^= (min((((((max(1, var_10))) ? -10782 : 1))), var_0));
                    var_14 = (((((-10810 && ((min(2199023255551, var_1)))))) & (arr_3 [i_2])));
                    var_15 = min(var_7, (arr_6 [i_0]));
                }
            }
        }
    }
    var_16 = (((max(((var_2 ? var_7 : var_9)), var_6)) % ((15699715803812937081 / ((var_10 ? var_2 : var_0))))));
    #pragma endscop
}
