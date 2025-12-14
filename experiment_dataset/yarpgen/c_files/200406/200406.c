/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = (max(var_20, 13550494711531735082));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(var_21, ((min(((((arr_1 [i_0] [i_0 - 1]) < 0))), ((-(arr_1 [i_0] [i_0 - 2]))))))));
        var_22 = (max(var_22, ((min(var_0, (arr_1 [0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_23 = (((-((-(arr_3 [1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_24 = (min(var_24, ((min((((!((((arr_7 [i_1] [i_2] [3] [4]) ? var_14 : (arr_5 [i_3] [i_4]))))))), (min(94, var_2)))))));
                        var_25 = (((((arr_4 [i_2]) && (((var_8 ? 211 : (arr_5 [i_1] [3])))))) || ((max(((17679 ? 67 : 4779838435577929632)), (0 && var_15))))));
                        var_26 = ((arr_3 [i_1]) <= (min(var_15, ((2100747849 ? (arr_5 [i_2] [i_2]) : var_5)))));
                        var_27 = ((((min((arr_4 [i_3]), (arr_4 [i_1])))) ? -9223372036854775792 : (((((arr_4 [i_1]) && 114))))));
                        var_28 = (arr_6 [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_29 = (max(var_29, (((!((min((max(4170458933541726891, 127)), 8191))))))));
        var_30 = ((+((-((0 ? (arr_11 [i_5] [i_5 - 1]) : var_10))))));
        var_31 = -861838219;
    }
    var_32 *= var_1;
    #pragma endscop
}
