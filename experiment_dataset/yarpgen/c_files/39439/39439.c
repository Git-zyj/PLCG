/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_14 = (48427 - -2010853757237807804);
                    var_15 = var_9;
                }
                var_16 = ((((((+(max((arr_6 [i_0 + 1] [i_1] [i_1 + 1] [i_1]), var_6)))) + 9223372036854775807)) << (((min((((arr_4 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1]) % var_5)), ((((arr_0 [i_0]) + 20265))))) - 1225821590))));
                var_17 = (((((~(arr_5 [i_0 - 1]))) + 2147483647)) << (((((17107 | -1) + 7)) - 6)));
            }
        }
    }
    var_18 = ((var_1 ? 49581 : (((!(((var_0 ? var_5 : 22236))))))));
    #pragma endscop
}
