/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -1356272582));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [6] [i_0] = (max((min(((var_9 ? 91 : var_0)), (1 % 1345084692))), -1345084693));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_10 [i_0] = 65535;
                        var_12 = (min(var_12, var_9));
                        var_13 = max(18, (((1345084689 == 1356272576) ? (((0 ? var_5 : -1))) : ((-9 ? 1864032935 : 6)))));
                        var_14 = (min(((var_6 ? 119 : (max((arr_4 [i_0 - 3] [11]), (arr_9 [i_0] [i_0] [i_2] [i_2]))))), ((((arr_8 [i_0] [i_1 - 2] [i_1 + 1] [i_1]) << (((-1520141898 + 1520141928) - 17)))))));
                    }
                    var_15 = (max((-727562419 != var_9), ((8692 ? (arr_9 [i_1 + 2] [i_2] [i_2] [i_2]) : (var_0 >= var_1)))));

                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_16 = (((arr_11 [20] [i_4] [0] [20]) + (var_9 == var_10)));
                            arr_15 [i_0] [i_5 - 2] [i_1] [i_0] [i_0] = (((min((arr_4 [i_1 - 1] [i_0 - 2]), (arr_12 [i_5 - 1] [i_0] [i_0 + 1]))) ^ -1575664058));
                        }
                        var_17 = (max((((((((arr_12 [i_1] [i_0] [i_4 + 1]) ? 0 : 532618026317456258))) ? ((var_9 ? -9 : var_9)) : -var_2))), -9223372036854775797));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_18 = (var_8 <= var_9);
                        var_19 = (~0);
                    }
                }
            }
        }
    }
    var_20 = ((((max(((var_1 ? var_1 : 1718163016555019171)), (((var_10 ? var_3 : 65535)))))) && ((((((var_2 ? var_2 : 1425142899))) ? (var_1 << var_4) : 12148)))));
    #pragma endscop
}
