/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] = ((-(arr_3 [i_0] [i_0])));
                    var_18 = (-((40 ? (((42 ? 55 : 63488))) : 12199034174828173780)));
                    arr_7 [i_0] = -46;
                }
                var_19 += (((((!(arr_0 [i_1])))) << ((((((arr_0 [i_0]) ? 18446744073709551615 : (arr_0 [i_1])))) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : var_16))));
                var_20 = (max(var_20, var_9));
                var_21 = (((arr_2 [i_1]) > (arr_2 [i_0])));
                var_22 = (arr_0 [i_1]);
            }
        }
    }
    var_23 = max((((-67 == (50 == var_16)))), (((var_2 / 1) ? (var_6 * 1) : var_11)));
    #pragma endscop
}
