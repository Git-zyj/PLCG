/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_10 = (max(var_10, -120511567));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_0] [i_1] [i_1] [i_2] [i_0] = (18446744073709551615 ? ((~(min((arr_8 [i_3]), var_5)))) : (((!var_9) << (120511567 - 120511544))));
                            arr_11 [0] [0] [i_0] = (-(((-120511542 || (arr_9 [7] [i_1 - 1] [9] [i_1 - 1])))));
                            arr_12 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_0] = ((((max(1597779778, 120511585))) ? ((min((arr_1 [i_0 + 3] [i_0]), (arr_1 [i_0 + 4] [i_0])))) : ((var_7 ^ (arr_1 [i_0 + 4] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_11 = -2130847822;

    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] = var_0;
        var_12 = ((((!((((arr_14 [i_4]) ? var_7 : 2474162455188463169))))) && (-120511594 || -120511567)));
    }
    var_13 = (((((((120511566 ? var_3 : var_7))) ? (((var_6 + 2147483647) >> (var_7 - 9338100934288137933))) : (~var_6)))) ? (var_4 == var_3) : (11237896016225046228 ^ -1));
    var_14 = (((((var_8 ? var_7 : var_4))) ^ (((~-864272167) ? (~14750839115146418657) : (4625846114732418973 <= 4194303)))));
    #pragma endscop
}
