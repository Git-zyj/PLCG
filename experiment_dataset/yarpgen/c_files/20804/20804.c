/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1534224019;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 &= (((min((arr_3 [i_1 + 1] [i_1] [i_1 + 1]), (arr_3 [i_1 - 1] [i_1] [i_1 + 1])))) % (arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                var_14 = ((((((arr_1 [i_0]) + (((var_1 ? 0 : (arr_3 [i_1] [i_0] [9]))))))) ? (((1534224019 || (arr_3 [i_1 - 1] [6] [i_1 + 1])))) : (((var_10 % (arr_4 [i_0]))))));
                arr_5 [i_0] [i_1] = (arr_3 [i_1] [i_1 + 1] [2]);
            }
        }
    }
    #pragma endscop
}
