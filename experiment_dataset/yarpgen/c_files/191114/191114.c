/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (arr_5 [i_0] [i_1] [i_2 + 1]);
                    var_15 = (min((arr_2 [i_2 + 1] [i_2 - 2]), (((arr_2 [i_2 + 1] [i_2 + 1]) ? 4534593898598236038 : (arr_3 [i_2 - 1])))));
                }
            }
        }
    }
    var_16 = (max(var_16, (((((min((0 || var_5), var_1))) ? ((var_2 ? (65535 - 189) : (1152886320234758144 % var_11))) : ((var_8 ? (max(10898549978441405784, var_7)) : var_12)))))));

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (~(+-6278151797712850340));
        arr_13 [i_3] = (min(4534593898598236038, 64));
        var_17 = (max(var_17, (((((((arr_9 [i_3]) ? ((min(-1092476687, (arr_10 [i_3])))) : (min(9223372036854775807, (arr_10 [7])))))) / (arr_9 [i_3]))))));
        var_18 = (min(var_18, ((((7548194095268145827 ? var_10 : ((-534795769 | (arr_10 [i_3]))))) << (((arr_10 [i_3]) - 164))))));
        arr_14 [12] &= (((arr_9 [i_3]) == (arr_8 [18] [i_3])));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_19 = (min(((-(arr_9 [i_4]))), (((~255) - (min((arr_15 [i_4]), (arr_8 [i_4] [i_4])))))));
        var_20 |= (+-302295402);
    }
    #pragma endscop
}
