/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max(var_8, (((-96151453 + 2147483647) >> (-96151428 + 96151433)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = var_17;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 *= ((((max(96151452, 1337521637))) >= (arr_3 [i_1 - 2] [i_0 - 1])));
                        var_22 = (min(var_22, (arr_1 [i_3] [i_1])));
                        var_23 = var_15;
                    }
                    var_24 = 68085134;
                    var_25 = (min((arr_5 [i_1]), ((!(0 == 1)))));
                    var_26 = ((((((246290604621824 ? (arr_7 [i_0 + 2] [i_1] [8]) : (arr_4 [i_1])))) || ((min(1, 1099343826))))) ? ((-var_15 - (min((arr_9 [i_2] [i_2] [i_2] [1] [1]), (arr_8 [11]))))) : var_13);
                }
            }
        }
    }
    var_27 |= 1;
    var_28 = ((((((max(var_2, 0))) ? var_11 : (((2147483637 ? var_12 : 203))))) >= (((((((var_4 << (var_6 - 100)))) >= (min(var_9, var_9))))))));
    #pragma endscop
}
