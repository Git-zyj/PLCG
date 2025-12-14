/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) ? ((max((8472395564836088848 >= 9974348508873462781), ((15276 ? 15270 : 27339))))) : (min(8472395564836088862, 3538409698742496441))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((((arr_3 [i_1 + 1] [i_1 - 1] [i_1]) & (arr_4 [i_1 - 2] [i_1 + 4] [i_0]))) < ((((-1 < (arr_4 [i_1 + 3] [i_1 + 1] [i_0])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_17 = ((((-1553125386 ^ (arr_4 [i_1 + 1] [i_1 + 1] [i_1])))) > (((max(65533, -951597564057508561)) << (((min((arr_10 [i_3] [i_3]), 24576)) - 24530)))));
                            var_18 *= var_15;
                            var_19 = ((((max(var_10, 1048575))) ? 15276 : 64));
                            arr_14 [i_3] = 14;
                        }
                    }
                }
            }
            var_20 = (max(var_20, (-17569 + 251)));
            var_21 = 127;
        }
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            var_22 = (min(var_22, (((((((max(var_0, -6))))) ? var_1 : -14)))));
            var_23 = ((((max(8472395564836088870, ((((arr_4 [i_0] [i_5 - 4] [i_5]) - 71)))))) ? (max(4294967292, (1 + 0))) : (((~14) & (((min(1, var_7))))))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_24 = (min(var_24, (((((1 && var_2) && ((min(var_9, 18446744073709551606)))))))));
            var_25 *= 1;
            var_26 = ((var_11 ^ (max((max(0, 36)), var_1))));
            arr_21 [i_0] [i_6 + 1] = ((2968806483 != (var_14 % 1)));
        }
        var_27 = (((~((min((arr_2 [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
    }
    var_28 = (max(var_28, -var_10));
    var_29 = ((+(max((var_1 * 0), var_0))));
    #pragma endscop
}
