/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 ? (!-0) : (var_12 == var_10)));
    var_14 = ((max(var_4, (-75 + var_12))));
    var_15 = (min(((~(var_12 | var_7))), (18992 && 18992)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = ((((max(4294967272, (arr_6 [4])) + (((((arr_7 [i_1]) && var_2))))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_17 = (((var_12 / (arr_0 [i_0]))) << (9260786182599732311 - 9260786182599732307));
                        var_18 = (arr_2 [i_0] [i_3]);
                    }
                }
            }
        }
        var_19 = ((((max((((65530 ? 2147483648 : -32))), (max(3923901720579542712, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [6]) : (max((max(4146542474, 12)), ((max(var_8, var_6)))))));
        var_20 = ((((min((!37), (var_12 <= 27)))) == (min((113 + 36), (var_7 >= var_12)))));
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = (arr_13 [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            var_22 &= ((3 << (var_1 - 127)));
                            var_23 = (!var_2);
                            var_24 = (((--7) + var_6));
                            var_25 = min(((~(arr_20 [8] [14] [i_8 - 1] [i_8 - 3] [i_8 - 4] [i_7] [i_7 + 2]))), 839455271);
                            var_26 = var_1;
                        }
                        var_27 = ((+((((arr_18 [i_4] [i_5] [i_5] [i_5] [i_6] [i_7]) == 65535)))));
                        var_28 = (arr_17 [i_4] [i_4] [i_6]);
                        var_29 = -65525;
                    }
                }
            }
        }
    }
    #pragma endscop
}
