/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = 1;

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 = ((-(((arr_0 [i_0]) ? (((arr_3 [i_1] [i_1] [i_3]) ^ (arr_3 [i_0] [i_1 - 2] [i_2]))) : (var_12 - -62)))));
                        var_22 = (arr_5 [i_0]);
                    }
                }
            }
            var_23 += (((max((((var_2 > (arr_4 [i_0] [i_1 + 1])))), ((var_17 ? (arr_3 [i_0] [i_1] [i_1 + 1]) : var_1)))) << var_4));
            var_24 = (arr_8 [i_0] [i_1 - 2] [i_0] [i_1 - 2]);
        }
        var_25 |= (arr_6 [i_0] [i_0] [i_0]);
        arr_9 [i_0] = ((((((49 ? -100 : 100)) != 100)) ? -909727100 : -8738071358452328193));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_26 = (min(var_26, ((((-108 + 2147483647) << (374713331 - 374713331))))));
        var_27 = (max(var_27, (((((min(((min(100, (arr_11 [i_4])))), ((var_9 ? (arr_11 [i_4]) : (arr_10 [i_4] [i_4])))))) ? ((((arr_11 [i_4]) / (arr_11 [i_4])))) : (arr_10 [i_4] [i_4]))))));
        var_28 = ((+((~(((arr_10 [i_4] [i_4]) ? (arr_10 [i_4] [i_4]) : -100))))));
    }
    var_29 &= (min((max(var_11, (min(8023001859783773057, 1)))), ((((((var_4 >> (var_19 - 6498591036584808441)))) ? var_16 : var_11)))));
    var_30 *= var_14;
    var_31 *= var_17;
    var_32 += ((-(min((var_1 >= 9327632048200380028), 9119112025509171574))));
    #pragma endscop
}
