/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((3930209912 ? 10794414602504694040 : var_1)) >= (max(((var_8 ? var_11 : var_9)), ((min(var_3, 9223372036854775795))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((var_0 ^ (max(2057085267024540116, (-634825749 && 3940988469)))))));
                    var_14 -= var_6;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = var_8;
                        var_16 += (!var_0);
                        var_17 = -23;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_18 = -var_7;
                        var_19 = ((var_1 >> (!14893)));
                    }
                    var_20 = var_4;
                }
            }
        }
        var_21 = (max(var_21, 23864));
        var_22 = (max(1851315928, -41676));
        var_23 = var_0;

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    {
                        var_24 = (max(var_24, (((1851315928 || ((((arr_5 [i_5 + 1] [i_7 + 1] [i_6]) + (arr_5 [i_5 - 1] [i_7 + 1] [i_6])))))))));
                        var_25 ^= -var_7;
                        var_26 = (min(var_26, ((((((((max(59, 30))) ? (min(0, 18446744073709551609)) : (((min(var_11, var_10))))))) ? ((((((max(1, 199))) || var_7)))) : (max((min(var_6, var_3)), 1746357971)))))));
                    }
                }
            }
            var_27 = (min(var_27, 13641440690237263188));
        }
    }
    #pragma endscop
}
