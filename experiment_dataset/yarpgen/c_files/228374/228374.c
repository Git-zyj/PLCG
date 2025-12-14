/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((max(var_0, (((max(1, -986070202)) % ((max(169, var_1))))))))));
    var_12 = (min(var_12, var_8));
    var_13 |= (max(-524288, (-230780497 && var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 10509334756498585610;
                arr_6 [i_0] [i_0] [i_1 - 1] = 32680;
                arr_7 [i_0] [6] |= (max((min((min(16773179585872069422, 1807887549)), -0)), ((((arr_3 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            }
        }
    }
    var_14 += (var_0 <= var_7);
    #pragma endscop
}
