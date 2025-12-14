/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(1, 13276));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = ((-((+((8128 >> (((arr_1 [i_0]) + 91))))))));
        arr_2 [i_0] = (max(((~(arr_0 [i_0] [i_0]))), ((min(var_3, (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((((((min((arr_0 [i_0] [i_0]), var_13)) == (arr_1 [i_0])))) >> ((((var_9 - (arr_0 [i_0] [i_0]))) - 1590335230))))) : (((((((min((arr_0 [i_0] [i_0]), var_13)) == (arr_1 [i_0])))) >> ((((((var_9 - (arr_0 [i_0] [i_0]))) - 1590335230)) - 12083)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = (-((min(var_5, (arr_6 [i_1 + 2])))));
                    arr_13 [i_2] [i_2] [i_2] [i_2] = (max(20, 190));
                }
            }
        }
        var_20 = (max(var_20, ((max(var_6, 0)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, (((!(((-(-48 / 1493541161)))))))));
                        var_22 *= (min(5632824275833009392, ((min(-13276, -81)))));
                    }
                }
            }
        }
        arr_22 [i_1] = ((((min((arr_20 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), 102))) / (1 - -13268)));
    }
    var_23 = var_11;
    #pragma endscop
}
