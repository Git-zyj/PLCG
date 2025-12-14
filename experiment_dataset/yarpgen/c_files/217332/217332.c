/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (((-var_8 ? (((-63 ? (arr_1 [i_0]) : 1))) : 1346853983)));
                        arr_10 [i_0] [i_0] = (arr_3 [i_1] [i_1] [i_1]);
                        var_15 = (min(var_15, (((((min((arr_7 [2] [i_3 - 1] [2] [i_1 - 1] [8]), (arr_7 [i_0] [i_3 - 1] [i_2] [i_1 - 1] [12])))) ? ((-(arr_7 [i_2] [i_3 - 1] [i_2] [i_1 - 1] [0]))) : ((0 ? -1346853983 : 20935)))))));
                        var_16 += (arr_6 [6] [i_1] [i_1 + 1] [i_1 - 1]);
                        var_17 = -var_5;
                    }
                    var_18 = (1346853991 ? -1346853983 : 5088913919492411632);
                    var_19 = (min(var_19, (((-1346853983 ? (((((-32767 - 1) + 2147483647)) >> (-899672126 + 899672155))) : 1)))));
                    var_20 = min((((!(((-1 / (arr_0 [i_0]))))))), (((((127 >> (8380834270194413074 - 8380834270194413058)))) ? (arr_2 [i_1 - 1] [i_1 - 1]) : 1343912366642556597)));
                    var_21 = (min(4, 1));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_22 = (min(var_10, (min(-1160755327, 65535))));
                    var_23 = -0;
                    arr_15 [i_0] = ((~(min((((42894 << (127 - 121)))), (min((arr_8 [i_0] [i_0]), 228))))));
                }
                var_24 *= (min(((-1363432863 ? ((min(112, var_13))) : var_5)), 16106127360));
            }
        }
    }
    var_25 = (min(var_25, var_11));
    #pragma endscop
}
