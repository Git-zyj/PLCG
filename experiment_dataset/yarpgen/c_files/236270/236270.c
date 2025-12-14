/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (max((!var_7), ((((max(0, var_12))) <= var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_17 -= (var_4 == -123);
                var_18 = ((((((225 ? (arr_3 [i_0]) : 102))) ? 24 : 1340742220)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 |= 1;
                            var_20 = (max(var_20, ((((!(arr_5 [i_2] [i_1 - 1])))))));
                            var_21 -= var_10;
                        }
                    }
                }
                var_22 = (min(var_22, ((((((((4294967295 ? -122 : 0))) ? (arr_4 [i_1] [14] [i_0]) : (arr_5 [6] [i_1 + 1]))) == (2575929582 < 247))))));
            }
        }
    }
    #pragma endscop
}
