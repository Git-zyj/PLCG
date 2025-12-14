/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!((max(108, 1)))))) % ((var_1 ? var_3 : 4611686018427387903))));
    var_11 *= var_2;
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_13 = ((-((~(arr_0 [i_2] [i_1])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 = ((((((109 ? (arr_6 [i_2] [23] [i_0]) : (arr_2 [i_0]))) != (((!(arr_4 [8] [i_1] [19])))))) ? (arr_7 [i_3] [i_1] [1]) : (((((~(arr_8 [i_0]))) ^ -53)))));
                        arr_9 [i_0] [i_0] [i_0] = (min((max((((arr_6 [1] [i_0] [i_0]) && -27)), (4611686018427387901 && var_9))), (((((13835058055282163692 ? 1 : 2147483647))) || ((!(arr_7 [i_0] [i_1] [i_0])))))));
                    }
                }
                var_15 = (min(var_15, (((27 ? (((((arr_5 [13] [i_1] [i_0] [i_0]) ? 13835058055282163712 : 2854099673)) * (((min(-115, (arr_0 [i_0] [i_1]))))))) : ((((max((arr_1 [i_1]), (arr_0 [11] [i_0])))) * (((arr_2 [i_0]) * 4611686018427387904)))))))));
                var_16 = ((1 ? 13835058055282163722 : -745569358));
            }
        }
    }
    #pragma endscop
}
