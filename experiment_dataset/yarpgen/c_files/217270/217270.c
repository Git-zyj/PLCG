/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((-1 % (~var_6)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 -= 85;
        var_18 = (max((min(var_8, var_3)), 1639641290));
        var_19 += (((((~(!var_0)))) ? (54305 / var_11) : var_0));
        var_20 = (max(var_20, ((((1 * 1) / ((~((max(54305, (arr_0 [i_0])))))))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 ^= 1065353216;
        var_22 -= var_2;
        var_23 = (max(var_23, (((!((max(-737, 1))))))));
        arr_4 [i_1] = ((16777216 / (-2147483647 - 1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_24 -= var_15;
                    var_25 *= (min((arr_0 [i_1 + 1]), var_1));
                }
            }
        }
    }
    var_26 += var_5;
    #pragma endscop
}
