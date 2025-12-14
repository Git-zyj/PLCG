/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = 8;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = -3158589547934873667;
                        var_12 = (max((min(14040946085065314830, var_0)), (((((12945392480452272763 != (arr_12 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]))) ? var_4 : ((min((arr_6 [i_1] [i_1]), 7))))))));
                    }
                }
            }
        }
    }
    var_13 = ((-29796 ? (min(2568484592110660014, (max(16205865552409154105, 1)))) : var_3));
    var_14 = var_3;
    var_15 = (((max(var_8, (max(var_5, 9217154056291495194))))) ? ((0 ? (max(var_7, 9223372036854775800)) : var_9)) : var_2);
    #pragma endscop
}
