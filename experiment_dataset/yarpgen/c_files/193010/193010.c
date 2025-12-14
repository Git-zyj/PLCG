/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(((max(var_5, 1571230582))), var_9))) ? var_8 : 35659);

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] = 4061486211820163021;
            arr_6 [19] [i_0] = (min((((!(arr_3 [i_0 + 2] [i_1 - 2] [i_0 - 1])))), ((((arr_4 [i_0] [i_0 + 2] [i_0]) ? (arr_1 [i_0 + 2]) : (arr_2 [i_1] [i_1 - 2]))))));
        }
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = (arr_9 [i_2] [i_2] [i_2]);
            arr_12 [i_2 - 2] [i_0] [i_0] = ((((max((min(14843058186819766582, (arr_2 [i_0] [i_2 - 3]))), ((((((arr_8 [i_0]) + 9223372036854775807)) << (532676608 - 532676608))))))) ? ((((arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2]) ? (arr_7 [i_0 - 1] [i_0 + 2] [i_0]) : (arr_7 [1] [i_2 - 2] [i_0 + 2])))) : (((arr_8 [i_0 - 2]) ? (arr_8 [i_0 - 1]) : (arr_8 [i_0 + 1])))));
            arr_13 [i_2] = (!var_5);
        }

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_11 = (((arr_2 [i_0 + 1] [i_0 - 2]) ? ((min(var_6, (max((arr_7 [i_0] [i_3] [i_3]), 4246829850))))) : (arr_16 [i_0 + 2] [i_0 - 2] [i_0 + 1])));
            var_12 = ((((((arr_0 [i_0 + 1]) >> (((arr_15 [i_3]) * (arr_2 [i_0] [i_3])))))) ? -3100144696 : ((((((arr_10 [i_3] [i_0 + 1] [i_0]) ? 23540 : 0))) ? (max(2922066406, 1)) : -1571230582))));
        }
        for (int i_4 = 3; i_4 < 23;i_4 += 1)
        {
            arr_20 [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_4]);
            var_13 = ((((((((((arr_16 [i_4] [i_4 - 3] [15]) ? -1 : -93))) || (((-32753 ? 33231 : (arr_2 [i_4] [i_0])))))))) > (min(((min((arr_10 [i_0] [i_0] [i_4]), (arr_0 [i_4])))), ((var_4 ? 3 : 72057594037927935))))));
            arr_21 [i_4] = (((arr_14 [i_0] [i_0] [i_4]) != 1));
            var_14 = (max(((~(arr_16 [i_0] [i_0] [i_0]))), ((((max((arr_19 [i_4] [i_4] [i_0]), (arr_14 [i_4] [i_4] [i_0 - 1]))) || ((!(arr_9 [i_0] [i_0] [i_0]))))))));
        }
        arr_22 [i_0] = ((!((((arr_10 [21] [i_0 - 1] [i_0 - 1]) ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
    }
    #pragma endscop
}
