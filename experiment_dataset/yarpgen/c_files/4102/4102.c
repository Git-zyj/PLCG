/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 += ((var_8 ? (((145 ? var_4 : (arr_1 [i_0 + 3])))) : (((var_2 * 1) ? (((arr_5 [i_0] [i_1 - 1]) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_0 [i_0]))) : (!-1999527766)))));
                var_16 = (max((!var_4), ((((((arr_4 [i_1]) * (arr_4 [i_0])))) - var_12))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_17 += (((!65535) & (arr_3 [i_0] [i_0])));
                    var_18 = ((((((3996055635 * var_7) / ((max(-700625434, 24108)))))) ? (arr_0 [i_1]) : 0));
                    var_19 = (max(var_19, (((!(((max(0, var_9)))))))));
                    var_20 -= ((!(((max(127, 1928597111))))));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_12 [9] [i_1] [i_3] [i_3] = (min(var_7, ((115 ? (((min(1, 0)))) : var_12))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((((arr_14 [i_3] [i_1] [i_0] [i_1] [i_0 - 1] [i_0]) != (min(8194993798186766459, -26983738))))))));
                                var_22 += ((!((!(((-2650628532319306617 ? (arr_15 [i_0] [4] [i_3] [i_0] [i_5]) : (arr_15 [i_1] [i_1] [0] [i_4] [i_5]))))))));
                            }
                        }
                    }
                }
                var_23 = var_6;
            }
        }
    }
    var_24 = 5742219728260881804;
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            {
                arr_27 [i_6] [1] [i_6] = ((!(!var_12)));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_25 = ((((((arr_31 [i_6 - 2]) ? (arr_31 [i_6 + 1]) : (arr_31 [i_6 - 2])))) ? (0 / 32753) : (arr_31 [i_6 - 1])));
                            var_26 = (min(var_26, (((((-1268441559 - (min(43189, var_8)))) % ((((max(8194993798186766470, 1999527783))))))))));
                        }
                    }
                }
                var_27 = (max(var_27, ((max((~var_2), 119)))));
            }
        }
    }
    var_28 *= ((((min(((1 ? 1 : var_12)), ((13 ? var_8 : var_11))))) ? var_9 : ((min(((82721270 ? 24 : 127)), ((min(var_10, var_5))))))));
    var_29 = var_2;
    #pragma endscop
}
