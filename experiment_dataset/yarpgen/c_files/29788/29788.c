/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_11 = (min(var_11, -var_7));
                    arr_8 [i_1] = ((-((min(var_0, (arr_4 [i_0] [i_0] [i_0]))))));
                    var_12 -= var_6;
                    arr_9 [i_0] [i_0] = (((((((-1472298734 + 2147483647) >> (var_2 + 126))))) ? -1472298713 : ((((var_7 << (1005984 - 1005966)))))));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = var_6;
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [i_3 + 2] = 1472298734;
                    var_13 += (arr_12 [i_3] [i_1] [i_3] [i_3]);
                    var_14 = 1472298733;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 6;i_5 += 1)
                        {
                            {
                                arr_19 [i_4] [i_1] [i_1] = ((((min(((-1472298731 ? -1472298741 : 1472298733)), var_3))) ? (((((arr_0 [i_0]) != 2336910894245242900)))) : ((((min(var_8, var_8))) ^ 1472298734))));
                                var_15 = -1472298734;
                                var_16 = min((((var_1 ? var_1 : ((var_10 ? var_5 : (arr_3 [i_0] [i_1] [i_3 + 2])))))), ((~((9639169601850580913 << (-1472298743 + 1472298771))))));
                                var_17 = ((((arr_16 [i_0] [i_1] [i_0]) ? (((!(arr_4 [i_1] [i_3] [i_4])))) : (!var_7))));
                                var_18 = (min(var_18, ((((-var_6 + 9223372036854775807) >> (1472298712 - 1472298712))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_7] = 14021899848967706229;
                                var_19 = var_9;
                                var_20 = ((~(((min(1472298732, var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_6;
    #pragma endscop
}
