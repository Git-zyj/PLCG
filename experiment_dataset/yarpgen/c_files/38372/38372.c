/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((-var_13 <= ((min((arr_1 [i_0]), (arr_1 [i_0])))))))));
        var_15 = (((max(var_5, var_1)) + 0));
        arr_3 [i_0] [i_0] = 56454;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_4 [i_1 + 1] [i_1 + 1]) && -7))) & -32757));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_16 = ((3356753254997244182 && ((4294967295 && (((1 ? (arr_7 [i_1] [i_1]) : 1)))))));
                    var_17 = (((127 % 15089990818712307453) ? (!var_7) : (((!(arr_8 [i_1]))))));
                }
            }
        }
    }
    var_18 = ((-var_0 ? var_12 : (((var_14 <= ((1 ? var_10 : -127)))))));
    #pragma endscop
}
