/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((~(((!(((var_2 ? 767001161 : 67))))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 = (min((var_0 | 0), (~21)));
        arr_3 [i_0 - 2] = ((~(15 <= 29021)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 = (((+-17) < (arr_5 [i_0 - 1] [i_0 - 1] [i_1])));
            var_17 = ((((min(0, var_5))) >> (-1 + 28)));
            var_18 = ((((((max(4294967295, var_12)) * (((var_11 ? 1 : 1)))))) & (min(-4616865507050311886, 1))));
        }
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_19 = (min((arr_6 [i_2 + 2]), (((!(((var_7 ? (arr_0 [i_2] [4]) : (arr_2 [i_2 + 2])))))))));
        var_20 = ((((!(arr_7 [i_2])))));
    }
    var_21 = (min(((min((max(var_5, 83)), var_8))), (min((min(-215460674708006880, var_5)), (min(var_0, var_9))))));
    var_22 = (max((min((min(8901668029101606870, 22112)), (134217727 && 1))), (((min(var_10, 4294967295))))));
    var_23 |= var_1;
    #pragma endscop
}
