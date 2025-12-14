/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 18446744073709551615;
    var_18 = ((var_12 ? (max(((3 ? var_1 : 46230)), 19325)) : (((((var_4 ? var_8 : var_5))) ? (~var_16) : ((var_13 ? 1023 : var_15))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~(((arr_0 [i_0]) << (((arr_0 [i_0]) - 4835069735360013216)))));
        arr_3 [i_0] = ((-(((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        var_19 = ((32767 ^ ((19777 ? -17 : 127))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] = ((+((max((arr_7 [i_1 - 2] [i_1 - 4] [i_1 - 4] [i_1 + 2]), (arr_7 [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1 - 4]))))));
                        var_20 = max((-2147483647 - 1), (max(-6945723925813651246, -3905)));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((max(4294967294, 5)));
        var_21 = ((!((max(1, var_0)))));
        arr_14 [i_4] = ((!((((~9) ? (!var_13) : (arr_12 [i_4 + 1]))))));
        var_22 = (((max(((max(224, (arr_11 [i_4] [i_4 - 1])))), 16815313898023108102)) << (((((-9223372036854775800 <= var_9) ^ -907125414)) - 3387841827))));
    }
    #pragma endscop
}
