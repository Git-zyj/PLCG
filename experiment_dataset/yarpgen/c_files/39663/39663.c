/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 |= var_2;
        var_12 = (min((((!(arr_1 [0] [i_0])))), (max(var_5, (arr_1 [i_0 - 1] [i_0 + 2])))));
        arr_2 [i_0 + 2] &= 72;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_13 -= -101;
        arr_6 [14] [i_1] = ((-78 ? 16 : (-2147483647 - 1)));

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = (arr_0 [i_1] [i_2]);
            arr_10 [i_2] [i_2] [5] = var_1;
        }
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_1] [3] [i_3] = ((var_10 + (arr_12 [i_3] [i_3] [i_3])));
            var_14 -= (arr_4 [i_1 - 1] [i_1]);
            var_15 *= (((((10186517731920644178 ? (arr_0 [i_1] [i_1]) : 255))) && (arr_13 [i_1 - 2])));
        }
        arr_15 [i_1 - 1] [i_1] = (((arr_11 [i_1]) ? (arr_13 [i_1 + 1]) : (arr_11 [i_1 - 2])));
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_16 -= (((+(((arr_5 [i_4]) ? (-2147483647 - 1) : -78)))));
        arr_18 [i_4 - 2] = ((((((!(-27311 ^ -8921747415584103801))))) < (min((arr_5 [i_4 + 1]), ((max((-2147483647 - 1), 18)))))));
    }
    var_17 = (((((var_5 << (var_2 + 16627)))) >= var_10));
    #pragma endscop
}
