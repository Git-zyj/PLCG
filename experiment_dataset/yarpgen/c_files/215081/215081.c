/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(246, 32767))) ? ((((var_10 >= 26109992) && var_2))) : (((((10748040724110873192 ? var_3 : var_11))) ? ((var_8 ? var_0 : 79)) : (1 && var_11)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, (((((((arr_0 [i_0]) ? (arr_1 [2] [i_0]) : (arr_0 [i_0])))) && ((((~(arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [1] [8] = (arr_2 [4] [4] [i_2]);
                    arr_7 [i_0] [i_1] [5] = (!(((-858214950 ? (arr_1 [i_0] [i_2]) : -1))));
                }
            }
        }
        var_16 = ((((((((arr_2 [i_0] [0] [1]) ? 257408781 : 339929388)) * 10748040724110873192))) ? (((arr_2 [i_0] [i_0] [i_0]) ? var_9 : (var_13 + 4294967267))) : (((var_11 ? ((min((arr_3 [i_0] [1] [i_0]), var_0))) : var_6)))));
        arr_8 [i_0] [i_0] = ((((max(((max((arr_5 [1] [i_0] [i_0]), 1))), (~56360)))) ? (((!(((-1390977742 ? 1 : 244)))))) : var_7));
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 6;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_17 = (max(var_17, (((((1253082836 && 65535) - -7181954245218800977))))));
                    arr_17 [i_3] [i_3] [i_4] [i_5] = (arr_2 [i_3 + 1] [i_4] [i_3 - 4]);
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
