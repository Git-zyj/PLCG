/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((~(((!(((var_3 ? 0 : (arr_2 [i_0] [3])))))))));
                    var_10 -= ((!((((max(63510, 13914))) >= ((-(arr_5 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_2] = ((!((!((min(18446744073709551611, 1)))))));
                    var_11 = (max(var_11, (((~((var_0 ? ((min((arr_0 [i_2]), var_9))) : var_3)))))));
                }
            }
        }
        var_12 = (min(var_12, ((((((255 ? var_8 : var_0))) ? (min(18446744073709551615, 37039)) : var_3)))));
        arr_10 [i_0] = ((~(((var_6 || (~var_7))))));
    }
    var_13 *= (((max(((63 ? 23121 : 32564)), ((max(1, 119))))) + ((1 ? 1 : (-23113 < 65201)))));
    var_14 = var_9;
    #pragma endscop
}
