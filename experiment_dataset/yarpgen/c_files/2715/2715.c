/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_1;

    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((((((arr_7 [i_1 - 1] [i_0 - 3] [i_0 - 3] [i_0]) || var_11))) | (((arr_0 [i_0]) + (arr_7 [i_1 - 1] [i_0 - 3] [i_0 - 3] [i_0])))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((-(((var_4 * (arr_5 [i_0] [i_1] [i_2]))))));
                    arr_10 [i_0 - 3] [i_0 - 3] [i_1] [i_1] = ((((4137 >> (((arr_6 [i_0] [i_0] [i_2]) - 102))))) >= var_0);
                }
            }
        }
        var_14 = ((((((!(arr_2 [i_0] [i_0]))))) * 108));
        arr_11 [i_0] = (((148 + 3995) > 61371));
        var_15 = 61398;
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((4194303 * ((((!((min(var_12, 0)))))))));
        var_16 = (((((!((max(6299133424939020015, var_1)))))) == 61537));
    }
    #pragma endscop
}
