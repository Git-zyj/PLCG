/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_10 = ((-(((!((((arr_3 [i_1] [i_2]) ? (arr_6 [i_1] [i_1] [i_2] [i_0]) : (arr_2 [3])))))))));
                arr_8 [i_2 + 1] [3] [17] = ((min(var_5, (arr_3 [18] [i_0 - 1]))));
                var_11 += (arr_1 [i_0 + 1] [i_1]);
            }
            var_12 = (max(var_12, (arr_5 [i_1] [i_0])));
            arr_9 [i_0 + 1] [i_1] [11] = ((((((9119 ? 1203869070 : 1564474095)) | 52))) ? (arr_1 [i_0] [i_0]) : 149);
            arr_10 [i_0] [i_1] [i_0] = ((30152 ^ (((arr_3 [i_0 - 1] [i_0 - 1]) | var_8))));
            var_13 = (max(var_13, (((var_9 ? (((arr_6 [i_0] [i_0 - 1] [10] [i_1]) ? ((((var_6 || (arr_1 [i_1] [i_0]))))) : (((arr_0 [i_1] [i_0]) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : var_7)))) : (((min(6, var_1)))))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_0] [1] [i_0] |= ((((((-((67076096 ? (arr_5 [i_3] [i_0]) : (arr_3 [i_0] [i_0 + 1]))))) + 2147483647)) << (((min((arr_4 [i_0] [i_0] [1]), (((arr_7 [i_0 + 1]) & (arr_4 [i_0] [i_3] [i_3]))))) - 1162564230575048704))));
            var_14 = ((((min((arr_2 [i_0]), (~32767)))) ? ((min(var_5, (arr_7 [i_0 + 1])))) : (((((1 ? 251 : 46458)) >> (30152 - 30149))))));
            arr_14 [i_0] [i_3] [17] = ((-((-(arr_6 [i_3] [i_0 - 1] [i_0] [i_0])))));
        }
        var_15 = (((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / (arr_5 [i_0 - 1] [i_0 - 1]))) == ((((arr_11 [i_0 - 1]) + 29)))));
    }
    var_16 &= var_2;
    #pragma endscop
}
