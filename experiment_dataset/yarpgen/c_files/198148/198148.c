/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_5;
    var_11 = (38 <= 38);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((!((((arr_3 [i_1] [i_1] [i_0]) ? 72 : (arr_3 [i_1] [i_0] [i_1]))))));
                var_12 &= var_4;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 = ((-(var_0 % var_2)));
                    var_14 = 45331;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_15 = ((-(min((1257982061 && var_4), ((~(arr_10 [i_0] [3] [i_3])))))));
                    arr_12 [i_1] = (min((-61 * 90), (arr_10 [i_0] [i_0] [i_3])));
                    var_16 = (min(var_16, -980868728));
                }
                arr_13 [i_1] [i_1] = (arr_3 [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
