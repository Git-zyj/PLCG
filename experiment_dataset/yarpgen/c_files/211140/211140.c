/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max((5332566084043614772 + -66), var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((var_4 ? (((((((!(arr_5 [i_0] [i_0] [i_2] [i_0]))))) <= ((var_1 & (arr_4 [i_0] [i_0] [i_2 - 1] [i_0])))))) : (!1)));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((((max((arr_0 [i_0]), var_10))) ? (((arr_0 [i_0]) ? var_1 : (arr_4 [i_0] [8] [i_1] [2]))) : var_13));
                    var_16 &= var_7;
                    var_17 = ((0 ? 8074 : ((-(arr_0 [1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_2] [i_3] [i_3] [i_3] = ((arr_1 [i_0]) ? 1830 : (((-30890 && 4655025962561416230) ? 8090 : (max(5332566084043614769, 1)))));
                                arr_13 [i_0] [i_2] [2] [6] [i_3] = (((((~1281034320) ? ((62 ? 14391741813133535466 : 1)) : (((max(var_5, 1)))))) + ((max(((min(-14748, (arr_8 [i_0] [i_1] [i_2 + 1] [i_3])))), (((arr_0 [i_4]) ? 149 : -8674807722051728518)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
