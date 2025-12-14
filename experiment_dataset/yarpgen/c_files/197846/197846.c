/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_3;
    var_13 = (((((127 ? 0 : 1321260893)) < 65408)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((arr_0 [i_0 + 1]) ? var_2 : (max(var_6, (arr_2 [i_0 - 1]))))) < ((-((var_1 - (arr_5 [i_2 + 4] [8] [8] [i_0 - 1]))))))))));
                    var_15 = (max(var_15, ((min(var_1, var_4)))));
                }
            }
        }
    }
    var_16 |= (((((max(var_2, var_1)) < (var_8 < var_0))) ? (min((!var_6), (((var_0 + 9223372036854775807) << (var_1 - 1729701122982627031))))) : var_6));
    #pragma endscop
}
