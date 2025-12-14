/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((min(181, (58 < 0)))), 4503599618981888));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (~3501694320537806026);
                var_17 = max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (((((max((arr_0 [i_0]), 3654014656)))) == ((~(arr_1 [i_2] [i_3])))));
                            var_19 = (arr_8 [i_0 - 4]);
                            arr_11 [i_1] = ((-125 + ((min((arr_7 [i_0 - 2]), (arr_8 [i_0 - 2]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_20 = (2 >> ((((~((var_4 >> (((arr_1 [i_4] [i_5]) + 31803)))))) + 18)));
                var_21 = (((((((var_8 && (arr_13 [i_4])))))) - (((max(13754929608242705590, (arr_16 [i_4 - 1] [i_4 - 1]))) - (arr_6 [i_5])))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 6;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_5] [i_5] [i_5] [i_7] [i_8] = ((~(7 % 3329926070)));
                                arr_29 [i_4] [i_4] [i_4] [i_7] [i_4] [i_7] = ((((min(208, 2147483647))) ? 6387 : (((75 - 2868161741004414294) ? (((arr_1 [i_5] [i_5]) ? (arr_25 [i_4] [i_5] [i_5] [i_7] [i_8]) : (arr_7 [i_4 + 2]))) : (1906246567 / -704673997)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
