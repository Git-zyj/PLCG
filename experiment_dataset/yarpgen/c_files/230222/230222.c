/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (((!(((min(1001, (arr_4 [i_2] [i_2 - 2] [i_2] [i_2]))))))))));
                    var_18 = ((0 ? ((832676389 ? (!0) : ((-(arr_5 [i_0] [i_0] [i_0]))))) : (arr_2 [i_0] [i_0 + 1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((+(((-2147483647 - 1) ? 12 : 1)))))));
                                var_20 = (min(var_20, (((~((20339 ? (arr_7 [i_3 - 1] [i_1] [i_3] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_7 [i_3 - 1] [i_1] [i_3] [i_3 - 1] [i_1] [i_3 - 1]))))))));
                                var_21 = (((~20334) ? ((240 ? 786716210 : 3857047341)) : (-2147483647 - 1)));
                                var_22 = (((arr_10 [i_4] [8] [i_0] [8] [i_1] [i_0] [i_0]) ? (((arr_2 [i_0 - 1] [i_3 - 1] [i_4]) ? ((min(63303, (arr_1 [i_0])))) : ((3857047341 ? 46342 : (arr_1 [i_0]))))) : 137));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_23 = ((!((min(((((arr_13 [9] [i_6]) ? (arr_6 [9] [9] [i_5] [5]) : (arr_14 [i_6])))), (((arr_10 [i_5] [i_6] [i_6] [i_5] [1] [i_5] [i_5]) ? 12 : (arr_14 [i_5]))))))));
                var_24 ^= ((((((((46342 ? (arr_2 [i_5] [i_6] [i_6]) : 0))) ? (arr_12 [i_5]) : 1))) ? ((46328 ? (arr_13 [i_6] [i_5]) : (arr_13 [i_6] [7]))) : (((!(!65521))))));
                var_25 = (!19202);
            }
        }
    }
    var_26 = ((+(((-20340 + 2147483647) >> (15243781970223876284 - 15243781970223876284)))));
    var_27 *= ((((((((var_16 ? 14 : 20325))) ? 19219 : ((1 ? 11 : -23079))))) ? (((min(1, 1)))) : (~var_15)));
    var_28 = (max(var_28, (((((((var_5 ? -49 : var_9)) * -var_11)) >> ((((((var_8 ? 61008 : var_9)))) + 4559)))))));
    #pragma endscop
}
