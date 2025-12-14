/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 -= ((min((arr_2 [i_0]), (((arr_5 [i_0] [i_1 + 1] [4]) ? var_8 : 18446744073709551611)))));
                    var_19 -= ((((min((arr_1 [i_1 + 2]), (arr_1 [i_1 - 1])))) ? (-32767 - 1) : (max((arr_1 [i_1 + 3]), (arr_1 [i_1 + 3])))));
                    arr_8 [i_0] [i_1 + 2] [i_0] = (min(-1914826909, (arr_7 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_20 += (max((min(var_14, ((var_2 ? 1259262724900044403 : var_14)))), (((!(((-6793371252875886393 ? 113 : 2669303653))))))));
    var_21 = (-1259262724900044391 <= ((1 % (min(5, -3205)))));
    #pragma endscop
}
