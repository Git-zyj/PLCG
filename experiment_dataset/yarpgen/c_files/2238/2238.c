/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [1] [i_1] [i_0 - 1] = (arr_4 [i_0 + 1] [17]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] = (((((((max(14865130589927390603, var_12))) ? (var_2 == 0) : ((var_0 ? (arr_0 [11] [i_3]) : (-127 - 1)))))) ? (max((((3503200094 ? var_16 : var_3))), (max(-1, (arr_3 [7]))))) : (((((((4311087458302129725 ? 32767 : 14135656615407421878))) && -1097180810))))));
                            arr_13 [i_0] [i_1] = -1;
                            var_19 = (min(var_19, (arr_5 [i_0 + 2] [i_1 + 1])));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, (((((((((1097180800 ? -32760 : 32758))) ? var_14 : var_7))) ? (max((1308298807700019233 != var_1), -4311087458302129737)) : -var_9)))));
    var_21 = ((-(max(172, ((127 ? 4311087458302129725 : var_13))))));
    var_22 = max((((var_3 ? 3 : (var_14 || 14135656615407421885)))), var_9);
    #pragma endscop
}
