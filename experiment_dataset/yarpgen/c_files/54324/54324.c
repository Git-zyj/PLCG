/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((138 ? ((3622403581060569310 ? 127 : 240)) : 106))) && ((((min(var_4, var_17)) * (((var_7 >> (var_10 - 4882640945976540152)))))))));
    var_20 = var_18;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_21 = (min(((-((187 ? 117 : 2251250057871360)))), (-9223372036854775801 / 8)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = (((arr_4 [i_0] [i_0 + 2] [i_0] [i_0]) ? (max((arr_0 [i_0]), (((arr_6 [i_2] [i_1] [i_0]) ? (arr_0 [i_2]) : var_9)))) : ((((min(var_15, (arr_4 [i_0] [i_1] [i_1] [i_2])))) ? var_9 : (arr_4 [i_2] [i_2] [i_2] [i_2])))));
                    var_22 &= var_3;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = (((arr_9 [i_3]) ? var_13 : (arr_9 [i_3])));
        var_23 = var_5;
    }
    #pragma endscop
}
