/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min((((-(!var_3)))), ((((0 ? 1 : -1768567459586692577)) % (var_4 >= var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0])))))));
                var_12 = ((!(1 != 1)));
                var_13 = (arr_3 [i_1]);
            }
        }
    }
    var_14 |= max(1, 7131065591881047041);
    var_15 = 1;
    #pragma endscop
}
