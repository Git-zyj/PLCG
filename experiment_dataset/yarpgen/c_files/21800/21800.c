/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min(255, var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((min((min((((47709 ? 6 : (arr_1 [i_0])))), (((arr_1 [7]) ? 9007199254740991 : (arr_3 [i_0] [i_0] [i_1 + 1]))))), ((min(var_5, 26505))))))));
                var_12 = (((((((var_0 ? (arr_1 [i_0]) : var_5))) && (arr_2 [i_1] [i_1]))) ? ((min(var_6, var_9))) : (((((var_3 ? (arr_5 [i_0]) : var_4)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_14 [i_2] [i_3] [i_4] [i_4] = ((1 ? ((((arr_11 [i_2] [i_2]) <= 965924339))) : 17829));
                    var_13 ^= (((var_7 ? 6296697464774945904 : (-32767 - 1))));
                    arr_15 [13] [i_3] [i_4] = (((var_5 && 4) * ((47718 ? (arr_9 [10]) : (arr_6 [i_2] [9])))));
                    var_14 = ((var_0 ? (var_6 == var_7) : (var_7 / 288230367561777152)));
                }
                var_15 = min(((((-97 ? var_3 : 186)))), (((((min(var_5, var_9)))) - (min(var_8, 1842806262845826946)))));
                var_16 = ((min((min(2867403586, 11765)), (((arr_13 [13] [13] [i_2] [13]) ? (arr_13 [i_2] [i_3] [i_3] [i_3]) : var_0)))) == ((min((arr_13 [i_3] [i_2] [i_2] [i_2]), -113))));
            }
        }
    }
    #pragma endscop
}
