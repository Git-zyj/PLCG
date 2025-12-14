/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_16 << (var_3 - 1120689430)))) ? ((-(!var_3))) : ((max((var_3 >= var_12), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 *= ((((((~(arr_2 [i_4])))) >= ((~(arr_13 [i_0]))))));
                                var_21 *= ((-(arr_10 [i_4] [8] [10] [i_4] [i_4] [i_3 + 1])));
                                var_22 = ((-var_3 != (arr_2 [i_1])));
                                arr_14 [i_0] [i_1] [0] [i_1] [i_4 + 3] = (arr_7 [i_3 + 2] [i_3] [i_3] [i_3 + 2]);
                            }
                        }
                    }
                    var_23 &= (max((arr_5 [i_0]), (((+((((arr_10 [i_0] [7] [10] [10] [i_2] [i_2]) != (arr_10 [2] [14] [2] [i_2] [i_2] [1])))))))));
                    var_24 = ((((((-24484 || 92) ? (arr_8 [i_0] [i_0] [12] [12]) : var_12))) > (((((-20237 ? 24464 : 449014196851772810))) ? (max(4294967287, -9223372036854775804)) : 9223372036854775797))));
                }
            }
        }
    }
    #pragma endscop
}
