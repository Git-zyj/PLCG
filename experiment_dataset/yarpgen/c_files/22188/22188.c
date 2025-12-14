/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((((460725566 ? var_1 : var_11))) || var_14)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = ((((min(460725566, var_2))) && (((var_9 ? var_15 : -var_15)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_18 = -460725566;
                    var_19 = 1;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_3] = (min((((arr_10 [9] [i_1] [i_3] [i_3]) ? 4294967291 : (~var_4))), ((min(1, ((!(arr_11 [3] [3] [3] [0]))))))));
                    arr_13 [i_3] [i_3] = (((arr_2 [i_0] [i_1] [i_3]) ? ((max((arr_9 [i_0 - 1] [i_1] [i_3]), (arr_9 [i_0 + 1] [i_0 + 1] [1])))) : ((+((((arr_5 [i_0 + 1] [i_1] [i_3] [i_1]) < (arr_7 [2] [2]))))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_4] [2] = (max((max(((max((arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0]), (-127 - 1)))), ((1386199365 ? var_3 : var_1)))), 460725569));
                    var_20 = (((((~(460725590 <= 65535)))) * (((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]) ? 16384 : (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [1] [i_1] [i_4] [10]) : 460725539))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [4] [i_5] [i_0] = (((-(arr_11 [i_0] [i_0] [5] [i_5]))));
                    arr_20 [i_5] = (min((((arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_5]) / (arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_5]))), ((((arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_5]) > (arr_15 [i_0] [i_0 + 1] [i_0 - 1] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
