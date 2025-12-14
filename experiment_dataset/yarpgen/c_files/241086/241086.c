/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_3 [13] = (-(arr_2 [i_0 + 1] [2]));
        arr_4 [i_0 - 2] = ((~(((arr_1 [i_0 + 2]) | (arr_1 [i_0 + 2])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_14 [i_0 + 2] [i_0 - 2] [12] [i_0 + 1] [i_0] [i_0 + 2] = (((arr_12 [i_0] [i_0]) * 8353));
                        var_14 = (min(var_14, (((((max(((var_10 & (arr_2 [i_2] [2]))), (min((arr_7 [6] [i_1 - 1] [9]), 4294967272))))) ? (((max((arr_6 [i_2] [i_0]), (arr_7 [13] [13] [i_2]))))) : (arr_0 [1] [i_2]))))));
                        var_15 -= ((var_13 || (((~(-127 - 1))))));
                        arr_15 [14] = (((((((((arr_5 [1] [i_1 - 1] [i_2]) ? 53 : 20))) ? 609518815 : (251 & 245)))) ? (((((min(65531, (arr_13 [i_0] [i_1] [12] [i_2] [1])))) - (arr_10 [i_2] [i_0])))) : ((-(147 - 24)))));
                        var_16 = ((((-((7 ? var_9 : 112)))) >> (arr_6 [i_1 - 2] [i_0 - 4])));
                    }
                }
            }
        }
        var_17 -= 65515;
    }
    var_18 = (((min(56753, 13))) ? 18 : (((2165902881 >= (((var_10 ? 111 : 1)))))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 = ((-1 >= (arr_17 [i_4])));
        var_20 += (((arr_16 [i_4] [i_4]) == var_12));
        var_21 -= var_10;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_22 = 248;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 13;i_7 += 1)
            {
                {
                    var_23 = ((((var_10 ? 241 : (min((arr_12 [i_5] [i_5]), 1)))) >= (((~(arr_11 [i_7 - 2] [i_7 + 1]))))));
                    var_24 |= (((((5 << (var_7 - 35)))) >= (((!616178077) ? (56748 || -47) : (arr_20 [i_7 - 1] [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
