/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((max((73 ^ var_10), (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (var_10 + 126))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]) >= (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) % ((+((max((arr_8 [i_0] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2]))))))))));
                    var_15 = (max(var_15, ((((-37 / 5645744881069674399) ? (max(-1558755784, 32767)) : (1 % -904157746))))));
                    var_16 = ((!((((arr_2 [i_1]) ? (arr_2 [i_1 - 1]) : (arr_2 [i_0]))))));
                    var_17 *= (((((~(max((arr_9 [i_0] [i_1 - 1] [i_1] [i_2 - 2]), (-2147483647 - 1)))))) ? (min(((var_9 ? (arr_0 [i_0]) : (arr_9 [i_2] [i_0] [i_0] [i_0]))), (((var_5 < (arr_7 [i_0] [0] [i_2 + 1])))))) : (((!((max(-32767, 65527))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = ((~((~(arr_12 [i_0] [i_1 - 1] [i_3 + 1] [i_1 - 1] [i_4])))));
                                var_19 = (min(var_19, (arr_6 [3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
