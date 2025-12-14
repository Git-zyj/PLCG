/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = ((1 >> (224 - 222)));
                    arr_8 [i_1] = ((((max(18202442593815005482, -1))) && 227220181));
                    arr_9 [i_0] [i_1] [i_2 - 1] = 16777215;
                }
            }
        }
    }
    var_12 = min((((~216) ? 217 : (~38))), var_7);
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_13 = (229 | 206);
                    arr_17 [i_3] [i_3] [i_4] [i_3] = (max((max(54, (~39))), ((-((16320 ? 19 : -32754))))));
                }
            }
        }
    }
    #pragma endscop
}
