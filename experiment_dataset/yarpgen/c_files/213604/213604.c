/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = var_8;
                arr_6 [i_0] = (((arr_3 [i_1] [1]) ? 6672029987120181469 : var_2));

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = ((((12892831873822190534 ? (((((arr_2 [1]) || var_8)))) : (((arr_3 [i_0] [6]) ? 1 : var_7)))) / var_10));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_2]);
                    var_16 = (min(var_16, var_1));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (max(var_17, (((((max(var_0, ((var_4 ? var_6 : 1))))) ? (((12892831873822190543 || (((-6994373193661293660 ? var_2 : var_3)))))) : ((((18446744073709551602 && var_4) || (((var_11 ? (arr_7 [0] [i_1] [i_1]) : var_14)))))))))));
                        arr_14 [i_0] [0] [i_0] [6] [i_0] = (((min((arr_8 [i_2 - 2]), 74))) ? (((var_9 ? 32390 : ((5553912199887361084 ? (arr_5 [11]) : 1))))) : 16019206622944859818);
                        var_18 = (min(var_18, 84));
                    }
                }
            }
        }
    }
    var_19 = -26971;
    #pragma endscop
}
