/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((!(((var_12 ? var_16 : var_3))))))));
    var_20 = (min(var_4, ((((var_1 != var_13) != var_18)))));
    var_21 = 41;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = (arr_3 [i_1]);
                    var_22 &= ((161708855 || (arr_4 [i_0] [i_2] [i_0])));
                    arr_8 [i_1] [i_1] [i_1] = (min(((max((var_3 || var_14), (-2405 != var_17)))), ((((((arr_2 [i_1] [i_1] [i_2]) ? var_2 : (arr_0 [i_0])))) ? 32131 : ((16515072 ? 35987 : (arr_6 [i_1])))))));
                }
            }
        }
        var_23 ^= ((!32156) ? ((((arr_4 [i_0] [i_0] [i_0]) != (arr_5 [i_0] [i_0] [i_0] [i_0])))) : -32737);

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_24 = var_8;
                arr_14 [i_0] [i_3] [i_4] [i_4] = ((arr_12 [i_4 + 2] [i_4] [i_4 - 1]) ? (((var_9 != (arr_3 [i_4])))) : ((max((arr_3 [i_4]), (arr_12 [i_4 + 2] [i_4 + 1] [i_4 + 1])))));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_25 = ((846603660 ? var_14 : (min(0, (((~(arr_17 [i_0] [i_0] [i_5] [i_5]))))))));
                var_26 = ((-(min((arr_3 [i_5]), (arr_6 [i_5])))));
                var_27 = (min(var_27, ((max((((!(((-(arr_2 [i_0] [i_0] [i_3]))))))), (arr_2 [i_5] [i_3] [i_5]))))));
            }
            var_28 = ((16515060 ? (((arr_17 [i_0] [i_0] [i_3] [i_3]) ? (min((arr_16 [i_0] [i_3] [i_3]), -17140)) : (arr_9 [i_3] [i_3] [i_3]))) : var_2));
        }
    }
    var_29 *= ((max(var_12, 1912501256)));
    #pragma endscop
}
