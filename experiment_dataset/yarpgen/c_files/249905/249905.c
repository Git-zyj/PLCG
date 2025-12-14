/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (max(((var_10 ? (1575763360 == 216) : 6)), var_6));
    var_15 = (max(var_15, 13742483561374361808));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((-(arr_1 [i_1])));
                arr_6 [0] [i_1] = (((((255 ? (arr_0 [1] [20]) : 24))) ? var_2 : (!199)));
                arr_7 [i_0] = 65535;
                var_17 ^= ((!((min((arr_1 [10]), (((arr_2 [i_0] [i_1]) ? 1 : 42)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = 0;
        var_18 *= (((((((((0 > (arr_3 [i_2]))))) % 6))) ? (~var_2) : ((((var_0 == (arr_0 [i_2] [i_2]))) ? (arr_1 [i_2]) : ((54428 | (arr_8 [i_2] [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_19 = (max(var_19, (((((((((1 ? 1 : 1))) - 3893884978))) || ((max((max(var_4, (arr_3 [i_3]))), (arr_12 [i_3])))))))));
        arr_13 [i_3] = (max((arr_5 [i_3 + 1]), 20));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_20 [4] [i_4] = ((65535 || ((!(-127 - 1)))));
                    arr_21 [i_3] [i_4] [i_5] [i_4] = (arr_8 [i_3 + 2] [i_4]);
                }
            }
        }
        arr_22 [i_3] [i_3 - 1] = (arr_2 [i_3] [i_3 + 2]);
        var_20 = (min(var_20, (((((!(((var_9 ? var_0 : var_10))))) ? (arr_2 [11] [i_3]) : (((arr_2 [i_3 - 1] [i_3]) ? (max(var_0, var_3)) : ((~(arr_12 [i_3 + 1]))))))))));
    }
    #pragma endscop
}
