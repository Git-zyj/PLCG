/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, ((max(((((min(-1372871401, (arr_0 [i_0])))) ? 0 : ((1 ^ (arr_1 [i_0]))))), ((min((arr_0 [i_0]), (arr_1 [i_0 + 1])))))))));
        var_19 = 1;
        var_20 = arr_1 [i_0];
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        var_21 = ((-((((min(23884, -974052862))) ? 17670475628039409132 : (arr_3 [i_1 - 2])))));
        var_22 = ((((max(5745502250237967137, (arr_3 [i_1])))) ? 1 : ((((arr_3 [i_1]) < 32070)))));
        var_23 = (max((((-829 ^ (arr_3 [i_1])))), (max((arr_2 [i_1 - 1]), -47))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_24 -= ((!(((6193 ^ ((41159 ? 1602171043 : 1)))))));
                        var_25 = ((!(arr_4 [23] [i_5])));
                        var_26 = ((((max((arr_16 [i_5] [i_4] [i_3] [i_2]), (arr_13 [i_5] [i_4] [3] [i_2])))) ? ((min((arr_13 [i_2] [i_3] [i_4] [i_5]), (arr_16 [i_2] [i_4] [i_4] [i_5])))) : (arr_16 [i_2] [i_2] [i_2] [22])));
                    }
                }
            }
        }
        arr_18 [i_2] = 10;
    }
    var_27 = ((var_8 * (24 * 1)));
    #pragma endscop
}
