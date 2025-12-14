/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 *= (arr_8 [i_1] [i_1]);
                    var_14 ^= min((((-(arr_7 [i_0] [i_1])))), ((-(arr_6 [i_1] [i_2]))));
                    var_15 = (max(var_15, ((((12708118991291848706 && 5738625082417702921) ? ((((-2147483647 - 1) ? -97 : 18446744073709551613))) : (arr_8 [i_0] [i_0]))))));
                    var_16 = ((!(-32767 - 1)));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_17 = (((((arr_14 [i_3] [i_3]) % (arr_14 [i_3] [i_3])))) ? 1524603495 : (((arr_14 [i_3] [i_3]) << (((arr_14 [i_3] [i_3]) - 24509)))));
        var_18 = 5;
        var_19 *= arr_11 [i_3];
        var_20 = (var_0 == -var_9);
    }
    var_21 = var_2;
    #pragma endscop
}
