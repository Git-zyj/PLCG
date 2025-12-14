/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_15 = 1;
        var_16 = (arr_2 [i_0 - 1] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = (min(3976426206, -106));
                        arr_12 [i_2] [i_1] [i_1] [i_1] [0] |= (((min((-32767 - 1), ((1 ? 15 : 281474976702464))))) ? 30998 : ((max(95, 105))));
                        arr_13 [i_0] [i_0] = ((+(max((arr_5 [2] [i_1] [i_2] [i_3 - 1]), (arr_5 [i_0 + 1] [9] [10] [i_2])))));
                        arr_14 [i_2] [i_1] |= 253;
                    }
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = var_10;
    #pragma endscop
}
