/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= -var_0;
    var_21 = 10727220683156539451;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [17] = ((!((((((var_12 - (arr_2 [14])))) ? var_1 : (min(12288, (arr_0 [i_0]))))))));
                arr_8 [i_1] [i_1] = ((19222 ? -1024 : (-9223372036854775807 - 1)));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_12 [i_0] [i_1] = (min((((((var_19 ? var_6 : (arr_6 [i_0] [4])))) & (min((arr_11 [5] [i_1]), (arr_10 [i_0] [i_0] [0] [i_2]))))), (((((arr_0 [i_0]) ? (arr_9 [i_2] [i_2] [i_1] [i_0]) : (arr_1 [i_1])))))));
                    arr_13 [i_1] = ((((((min(var_9, -326131616567426089))) ? (1521370427 - 250) : (((!(arr_10 [i_2] [i_2] [i_0] [i_0])))))) << (!var_5)));
                    arr_14 [i_0] [i_1] = ((-(((arr_3 [i_0]) ? -9223372036854775787 : 2774679890902720021))));
                    arr_15 [i_0] [17] [i_2] = ((+((((((arr_3 [i_1]) ? var_12 : var_10))) ? 237 : ((min(var_0, (arr_4 [i_0] [i_0] [i_0]))))))));
                    arr_16 [i_0] [i_1] [i_0] [i_1] = (arr_6 [12] [i_1]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_19 [i_0] [i_0] [i_0] [8] = ((((min((arr_11 [i_0] [7]), (arr_11 [i_0] [i_0])))) ? ((min(((((arr_2 [i_0]) || 1))), var_1))) : (((arr_1 [i_1]) ? var_1 : var_1))));
                    arr_20 [i_0] [i_1] = (arr_0 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
