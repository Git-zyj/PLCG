/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (+-65397);
    var_17 *= (((((~((7 ? var_15 : 255))))) ? ((((var_10 & 2) ? (((max(var_3, var_1)))) : ((var_6 ? 226 : var_9))))) : ((var_4 ? var_12 : (-16089 | 7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((6166 == (max(var_7, (arr_1 [i_1 + 1] [i_1 - 1])))));
                    var_18 = var_1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    var_19 = (4194303 ? -1 : 223);
                    var_20 = 4294967295;
                    var_21 = (min(var_21, (arr_8 [i_3 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
