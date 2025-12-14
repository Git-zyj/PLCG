/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 ^= (((((((arr_0 [i_0 - 2]) > 0)))) + ((var_5 ? var_9 : (arr_0 [i_0 - 1])))));
                    var_12 = var_6;
                }
            }
        }
        arr_7 [i_0] = ((32512 ? ((65535 ? 16777215 : 2486008182171250741)) : (((min((arr_2 [i_0]), (min((arr_5 [i_0] [i_0] [i_0] [i_0 + 1]), var_9))))))));
    }
    var_13 = (min(var_13, (((!(((var_3 / ((var_3 ? var_10 : -86))))))))));
    var_14 += ((((((((var_9 ? var_7 : var_5))) ? (((17822617037670273529 ? var_10 : 115))) : ((-18930 ? -97 : (-9223372036854775807 - 1)))))) ? var_8 : 30051));
    #pragma endscop
}
