/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min((min((max(255422615, var_9)), (-2147483647 - 1))), 2987704015));
                    var_12 = (max(var_12, ((max(((max((-127 - 1), (arr_2 [i_0] [i_0])))), (arr_2 [i_0 - 2] [i_0 + 3]))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        arr_9 [i_0 + 2] [i_1] [i_2] [i_0] [9] = ((!((((arr_3 [i_0 + 3] [i_3 - 2]) ? (arr_5 [i_3 - 2]) : var_7)))));
                        arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] = (17592186044415 >= 2224747053);
                        arr_11 [i_0] [1] |= ((var_6 ? 73 : (arr_7 [10] [10] [i_3 + 1] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_13 = (min(var_13, 1));
                        arr_15 [i_1] [i_2] [i_0] = (arr_5 [i_2]);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] = ((((min((arr_16 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_4] [i_0 + 4] [i_4] [6]), (-118 - 1)))) ? ((4060523340 * (max(307010770016985484, (arr_6 [i_0 + 4] [i_0] [i_0] [i_0]))))) : (~61)));
                            arr_20 [8] [i_0] [13] = (i_0 % 2 == 0) ? ((((min(2724488045, (arr_0 [i_0]))) << (((((arr_0 [i_0]) + (arr_0 [i_0]))) - 202020378440364738))))) : ((((min(2724488045, (arr_0 [i_0]))) << (((((((arr_0 [i_0]) + (arr_0 [i_0]))) - 202020378440364738)) - 4712052689810887940)))));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = (arr_13 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2]);
                            arr_25 [12] |= (((arr_6 [i_0 + 3] [i_4] [i_6 - 1] [i_6 - 1]) << (162 - 139)));
                            arr_26 [5] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((min((min(4952, (arr_0 [i_0]))), ((max(var_1, 63))))) | 22313));
                            arr_27 [13] [i_1] [i_2] [i_4] [i_0] = 0;
                        }
                        arr_28 [i_0 - 2] [i_0 - 2] [i_0] [7] = 67108863;
                    }
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_14 = var_4;
                        arr_33 [i_0] [i_0 - 2] [i_0 - 2] [i_0] = (9404 * 63699);
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0 - 1] = (arr_0 [i_0]);
                        var_15 *= ((var_10 ? (max((((var_4 >> (var_4 - 52217)))), (var_6 ^ 9223372036854775807))) : var_10));
                        var_16 = (min(var_16, (((var_8 ? (min(0, -2)) : 0)))));
                        var_17 = (max(((((41069 || 2742795615013773641) != var_1))), (min(4194303, 24798))));
                        var_18 |= ((((((min(3520033400, var_0))) || (13882193922869434602 && var_0))) ? (arr_22 [i_8] [i_2] [i_1] [13] [i_0]) : (!var_7)));
                    }
                }
            }
        }
    }
    var_19 += ((-10284 ? (min(var_7, (min(1620359022, var_9)))) : var_8));
    var_20 = ((((((min(6, 0))) ? -2028972977 : (16383 == 0)))) || (((1 % (1 << var_1)))));
    #pragma endscop
}
