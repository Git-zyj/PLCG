/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = ((((min(61472, (arr_1 [i_0] [i_0])))) == ((+(((-122 + 2147483647) >> (var_4 - 1278)))))));
        var_14 = (min((((19551 >= (arr_2 [i_0 + 1])))), (((arr_2 [i_0 - 2]) ? (arr_0 [i_0]) : ((min(61461, 3)))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            {
                arr_8 [i_1] = ((((((max((arr_6 [i_1]), var_11)))) == (max((arr_2 [0]), var_2)))) ? (((arr_6 [i_1]) ? (max(62077, (arr_7 [i_1] [i_2 + 1] [i_1]))) : ((((-23 < (arr_3 [i_1]))))))) : (((((((-85 ? (arr_2 [i_2 + 1]) : var_12))) != (~var_2))))));
                var_15 ^= max((arr_7 [4] [i_1 - 1] [i_2 + 1]), (min(var_0, var_4)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_16 = (((((var_7 ? -1392017227 : var_10))) ? -82 : var_7));
                    var_17 = (var_5 > var_8);
                    var_18 = arr_11 [i_1] [i_2 - 1] [i_1];
                }
            }
        }
    }
    #pragma endscop
}
