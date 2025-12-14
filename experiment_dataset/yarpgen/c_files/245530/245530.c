/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (max((arr_4 [i_1] [i_1 + 1] [i_1]), (((arr_4 [i_1] [i_1 - 2] [i_1 - 1]) ? 1 : (arr_4 [i_1] [i_1 - 3] [i_1 - 3])))))));
                var_14 += ((1 != 10126836) ? ((((arr_2 [i_0]) || var_12))) : 5);
                var_15 = ((1 ^ -21) ? ((-var_5 ? (max(5, 1)) : (arr_0 [i_1 - 2]))) : (-24 % 135107988821114880));
            }
        }
    }
    var_16 = (min(var_16, ((((!188) == (max(var_5, (var_6 + var_8))))))));
    var_17 = (max(var_17, 1762319490));
    var_18 = 23;
    #pragma endscop
}
