/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_13;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = 1;
        var_20 = 14997052884378114244;
        arr_2 [i_0] = 0;
        arr_3 [i_0] = ((((min((arr_1 [8]), (max((arr_0 [i_0]), (arr_0 [i_0]))))))) * ((min(var_15, var_9))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = (arr_4 [i_0]);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_22 = (min(var_22, ((~(arr_0 [i_2])))));
                var_23 = ((((((((arr_6 [6] [i_1] [i_2]) % (arr_7 [i_1]))) ^ (((-(arr_5 [i_1] [i_1]))))))) ? var_9 : 890544853545916490));
                var_24 = (arr_5 [i_2] [i_1]);
            }
            var_25 = (min(((((max(var_14, 2944498003102717920))) ? (min((arr_0 [i_0]), (arr_7 [5]))) : (min((arr_7 [i_0]), var_14)))), (((((18446744073709551615 ^ (arr_0 [i_0])))) ? (max(var_9, var_13)) : (arr_0 [i_0])))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_26 = ((((((arr_7 [i_0]) ? (arr_4 [i_0]) : var_12)) == ((max((arr_6 [i_0] [i_0] [i_3]), (arr_6 [i_0] [i_0] [i_3])))))));
            arr_12 [i_0] = ((((((arr_7 [i_3]) ? (arr_4 [0]) : (((!(arr_7 [i_0]))))))) || ((((min((arr_6 [i_3] [i_0] [i_3]), (arr_10 [18] [i_0] [i_0]))) * ((((arr_9 [i_0] [i_0] [i_3]) * var_2))))))));
            var_27 &= (~119);
            arr_13 [6] [i_3] [i_0] = ((43620 ? 1791941058115387628 : (((~var_15) ? (arr_8 [i_0] [i_3] [i_0]) : var_8))));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_28 |= 109;
            var_29 = (max(var_29, 4584599863325733776));
        }
    }
    #pragma endscop
}
