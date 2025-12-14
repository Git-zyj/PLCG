/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_6);
    var_13 = (max((((max(var_10, var_3)) + var_0)), var_3));
    var_14 = (((min(var_2, (max(var_2, var_11)))) ^ var_2));
    var_15 = (max((min((min(var_9, var_8)), var_5)), (min((65532 ^ var_9), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (((((~(max(var_9, var_5))))) ? ((-(max(var_3, 7150)))) : (((var_8 == (((arr_3 [2]) & 9323771531702036313)))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [8] [i_0 - 1] [13] [1] = ((+(((1425638 * 0) * var_1))));
                        var_17 = ((((arr_6 [i_1]) != 13157620895618337972)));
                        var_18 &= 9323771531702036313;
                        arr_11 [i_3] [i_1] [i_3] |= ((((((arr_4 [i_2] [i_3]) > -1425639)) || ((((arr_7 [i_0] [i_0] [i_2] [i_2] [i_3]) & (arr_2 [i_3])))))));
                    }
                    var_19 -= (((((arr_9 [i_2]) ? (min(15438623023725090455, (arr_5 [i_2] [i_1] [i_0]))) : (arr_2 [i_2]))) + (((((max(2147483647, var_2))) ? (arr_3 [i_0]) : (arr_2 [i_2]))))));
                    var_20 = (min(var_20, (arr_6 [i_2 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
