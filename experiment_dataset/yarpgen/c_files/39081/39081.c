/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((var_4 == var_6) >> var_14)), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (((((11 ? (arr_4 [i_3] [i_2] [i_1] [i_0]) : 15))) ? 255 : ((min(-96, (arr_6 [i_0] [i_1] [i_3] [6] [i_3 - 3]))))));
                            arr_8 [i_3] [i_1] [4] [i_1] [i_1] = (((arr_5 [i_0] [i_1] [i_0] [i_3 - 2]) ? ((65535 ? -19 : 31)) : 11));
                            var_17 = 68;
                        }
                    }
                }
                var_18 &= (arr_6 [i_0] [i_0] [1] [i_0] [i_0]);
                var_19 += (((arr_4 [i_0] [i_0] [i_1] [i_1]) ? (arr_3 [i_0]) : (arr_1 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
