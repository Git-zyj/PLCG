/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_17 = var_14;
                    arr_8 [i_0] [i_2] = ((((((!(arr_7 [i_0]))) ? 141863388262170624 : -1621424271)) <= (0 >= 8184)));
                }
                arr_9 [i_0] [i_0] = 0;
                arr_10 [i_1] |= var_13;
                arr_11 [i_0] [i_1] [i_1] = (max((max(59798, 10293890190065756822)), ((((108 == 8179) ? (((-19 + 2147483647) >> (var_4 - 244171137))) : (arr_0 [i_0]))))));
            }
        }
    }
    var_18 = (((min(-48, var_9) / var_13)));
    #pragma endscop
}
