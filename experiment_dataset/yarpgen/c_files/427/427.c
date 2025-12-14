/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 -= var_2;
                                arr_12 [i_2] = (((-((8496084503718641026 ? var_3 : 5)))));
                                arr_13 [i_4] [i_2] [15] [7] [i_1 - 2] [i_2] [i_0] = 2503243656;
                                var_16 = 1;
                            }
                        }
                    }
                    var_17 = (((((~(((!(arr_10 [i_1 + 2] [i_0] [17] [i_0] [i_2]))))))) - (max((arr_2 [i_0] [i_1] [i_0]), (((arr_7 [i_0] [i_0] [i_0]) / 1))))));
                    var_18 = (((6892599216297680672 ? 1791723640 : (6892599216297680668 + 54043195528445952))));
                }
            }
        }
    }
    var_19 = 2147483647;
    #pragma endscop
}
