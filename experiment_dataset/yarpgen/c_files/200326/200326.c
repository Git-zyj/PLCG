/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_11 = (((~30984) ? (arr_2 [i_1] [i_1]) : (((arr_0 [i_0] [i_1]) ? (18446744073709551596 ^ 29952) : 10852))));
                    var_12 = ((((-(max((arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))) ? (((((-25934 ? (arr_2 [i_0] [6]) : (arr_2 [20] [i_2])))) ? 31797 : (arr_0 [i_0] [i_1]))) : ((+(max((arr_2 [i_1] [i_1]), -20)))));
                    arr_7 [i_1] = (max((-25937 * 3458764513820540928), (!19074)));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (((((-21 ^ (arr_6 [i_1] [i_1] [i_1] [i_1])))) ? ((((((arr_5 [2] [15] [8]) ? var_2 : (arr_4 [i_0])))) ? (((((arr_0 [i_0] [12]) == var_7)))) : ((var_9 ? 31803 : 12276665865476416701)))) : ((((((arr_2 [i_0 - 2] [i_1]) ? 27852 : -6)))))));
                    var_13 = (((arr_1 [i_2]) == (63 <= -7855)));
                }
            }
        }
        arr_9 [i_0] = (((((arr_6 [i_0] [i_0] [11] [i_0]) ? ((min(-3154, -31815))) : (arr_4 [i_0 - 2])))) ? ((-(((arr_0 [i_0] [i_0]) ? 6170078208233134918 : -1)))) : -7858);
        arr_10 [i_0] = var_4;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 = (max(var_14, ((max(18446744073709551615, 31803)))));
        var_15 = (((arr_13 [i_3]) ? -31804 : ((+((((arr_3 [i_3] [i_3] [i_3]) && 4971666974158780124)))))));
    }
    var_16 = (min(var_16, ((max(34, -14)))));
    #pragma endscop
}
