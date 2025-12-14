/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_9 ? (((var_9 && (arr_0 [i_0] [i_0])))) : ((min(var_12, (arr_0 [i_0] [i_0]))))))) ? var_1 : ((((arr_0 [i_0] [i_0]) == ((((arr_0 [i_0] [i_0]) && 803005321))))))));
        var_15 ^= var_10;

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_6 [i_1] = ((((min(((var_11 ? 1 : (arr_0 [i_0] [i_1]))), (((arr_0 [i_1] [i_0]) ? var_10 : var_2))))) ? ((((((arr_4 [7] [i_1 + 2]) ? (arr_0 [2] [i_1]) : (arr_4 [i_1 + 1] [i_1 + 1])))) ? (var_2 - var_5) : (106819039 * var_9))) : ((min(((var_0 ? -2547 : (arr_0 [i_0] [i_1 + 1]))), (arr_3 [i_0] [8] [i_1]))))));
            var_16 = (max(var_16, (arr_1 [i_0])));
            arr_7 [i_1] = (max((((min(var_2, (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0] [i_0]) ? var_0 : (arr_1 [i_0]))) : (arr_4 [8] [i_1]))), (((((max(var_11, (arr_1 [i_1])))) ? var_9 : (arr_4 [i_0] [i_1 + 2]))))));
            arr_8 [i_1] = (((min((var_5 / 1655947550576995118), ((((arr_0 [i_1] [i_1]) ? var_10 : var_4))))) * ((((((var_7 ? -621655274 : 1696105727846634075))) ? ((min((arr_0 [i_0] [0]), var_5))) : (arr_4 [3] [i_1]))))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_17 [i_3] [i_2] [i_3] [i_4] = ((((((((52884 ? var_10 : (arr_10 [i_0])))) ? ((13934241143244999723 << (((arr_1 [i_0]) + 921026333)))) : ((((4182676882 != (arr_5 [i_0] [i_2])))))))) ? ((var_3 ? (3472952710 - 16790796523132556514) : (((max((arr_15 [i_0] [1]), (arr_3 [i_0] [i_3] [i_3]))))))) : ((((var_8 && 4226847923) / (((arr_10 [4]) ? (arr_4 [i_0] [i_0]) : (arr_9 [i_2] [i_2]))))))));
                        arr_18 [i_0] [i_0] [i_3] = (max((((((arr_15 [i_4] [i_0]) - var_0)) - (max((arr_13 [i_0] [i_0] [i_3] [i_3]), var_0)))), ((max((arr_0 [i_3] [i_2]), var_7)))));
                        arr_19 [i_3] [i_3] [i_3] = (((((((-5676729785824265427 ? (arr_4 [i_0] [i_2]) : 6832))) && (((8974714328260478995 ? var_11 : (arr_10 [1])))))) ? (((((arr_13 [i_0] [i_2] [i_3] [i_4]) <= (arr_12 [i_3] [i_2] [i_2]))))) : ((((((arr_5 [7] [7]) ? 123444331 : -29376))) - ((var_0 ? 1655947550576995118 : var_0))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
