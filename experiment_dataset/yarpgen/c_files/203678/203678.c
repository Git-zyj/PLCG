/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_6;
    var_15 = (min(var_15, (((((var_1 << ((((var_13 ? var_1 : var_2)) - 16616)))) - ((-70 ? ((114 << (var_4 - 2457927641218822112))) : (35744 + var_6))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_16 = ((((var_6 ? var_4 : var_10)) | (((-(var_9 - 29784))))));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((-((12 << (4294967284 - 4294967265)))));
                        var_17 = (var_13 / var_12);
                        var_18 = (((((254 == 10255470332316975401) == var_6))) ^ -var_0);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((4072273451 != ((11062191324412648428 << (!35744))))))));
                        var_20 += 251658240;
                    }
                    arr_15 [i_0] [6] [i_0] = ((((35744 ? var_8 : 35744)) | (((~(~var_12))))));
                    var_21 += ((((8191273741392576208 ? 29533 : 35744)) | -182));
                }
            }
        }
    }
    #pragma endscop
}
