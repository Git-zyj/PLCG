/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((!(((arr_1 [i_0]) && (arr_4 [i_0])))));
                arr_6 [i_0] = (((((-(var_12 <= var_0)))) * ((-var_3 - ((((arr_5 [i_0] [i_0] [i_1]) + (arr_4 [2]))))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_14 += ((~(((!(((arr_5 [4] [i_1] [i_0]) == var_7)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (((!((((((arr_10 [i_0] [i_4] [i_2]) || (arr_7 [2] [2]))) ? (((arr_0 [i_0]) << (var_3 - 3022936051))) : 1))))))));
                                arr_16 [8] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0] = ((var_5 ? 3840 : (((-114 * 1) ? 511430669 : (48011 == -511430669)))));
                                var_16 = (max(var_16, (arr_2 [i_3])));
                            }
                        }
                    }
                    var_17 = ((-(((((3490065429 ? 63829 : 48020))) ? ((var_2 ? 4294967289 : (arr_2 [i_2]))) : var_6))));
                    var_18 = (((!18434188414142032240) || (((-32752 ? 0 : 1)))));
                    var_19 = (!-1);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] = (-1044791287 >= 7);
                    arr_20 [i_0] [i_1] [i_0] = (min((19 * 8191), (!var_8)));
                    var_20 += var_2;
                    arr_21 [i_0] [i_0] [i_1] [i_5] = ((4226161706 ? -var_9 : (((((arr_7 [i_5] [i_1]) ? 20615 : 1044791286)) & (!var_1)))));
                }
                arr_22 [i_0] [i_1] = (var_5 > ((((max(114, (arr_17 [i_0] [i_0] [i_0]))) <= 118))));
            }
        }
    }
    var_21 = (((((var_11 << (var_3 & 1)))) ^ (((!26151) ? (((-98 ? var_3 : var_10))) : var_0))));
    #pragma endscop
}
