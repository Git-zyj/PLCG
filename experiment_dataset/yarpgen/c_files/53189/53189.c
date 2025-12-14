/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = (min(-6751484428303531764, -14800635916777536953));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_20 = var_0;
                            arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4] = ((((min((arr_0 [i_0 - 1]), (arr_0 [i_3])))) <= ((((arr_0 [i_0 - 1]) || 25259)))));
                            arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((((min((arr_6 [i_0 - 1] [i_0 - 1] [6]), ((var_17 ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_5 [i_2] [i_4])))))) ? (arr_3 [i_2]) : (((arr_4 [i_0 - 1]) ^ (arr_4 [i_0 - 1])))));
                        }
                        arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [0] [i_0 - 1] = (arr_12 [i_0 - 1] [i_0 - 1] [4] [i_0 - 1] [i_0 - 1]);
                    }
                    arr_16 [i_0] [i_0] [i_1] [i_2 - 2] = (+(((arr_0 [i_0 - 1]) ? (arr_10 [i_0 - 1]) : (arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_2 - 1]))));
                }
            }
        }
    }
    var_21 = ((var_7 ? 6751484428303531767 : (6751484428303531754 == var_18)));
    #pragma endscop
}
