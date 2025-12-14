/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_21 = ((!((!(((796987101 ? 3497980195 : 1)))))));
                                arr_14 [i_4 + 4] [i_1] [i_2] [i_1] [i_1] [i_0] = ((!(((1453551659 ? (arr_6 [i_1 + 1]) : var_19)))));
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = (1879048192 <= 0);
                                var_22 = (min(var_22, ((((-30466 <= -1453551659) ? 1 : var_6)))));
                                arr_16 [i_2] [i_2] [i_2] [i_1] [i_0] = var_14;
                            }
                        }
                    }
                }
                var_23 -= ((((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1 + 3]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1 - 1])))) ? var_19 : ((46 ? ((3497980195 ? var_9 : var_14)) : (((var_1 ? 1 : var_12)))))));
                arr_17 [i_0] = 26319;
                arr_18 [i_0] = 18286;
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
