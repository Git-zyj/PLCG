/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_5 [6] [i_1 - 1] [i_0 + 2]) ^ -381878023)))));
                    var_18 &= -381878042;
                    var_19 = ((((((arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1]) * 255))) ? var_0 : (arr_5 [i_0 + 1] [i_1 + 1] [i_1 - 4])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, (-var_5 * 226)));
                    var_21 = var_14;
                }
            }
        }
        var_22 = 4294967295;
    }
    var_23 = (min(var_23, 381878043));
    #pragma endscop
}
