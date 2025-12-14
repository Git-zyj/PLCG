/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] &= ((1 ? 1 : 1));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [2] = ((-((1 ? (!2600302402) : 1694664894))));
                            var_19 = (((-((var_10 ? var_2 : var_5)))));
                            arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] = (((!var_4) ? ((-(!var_6))) : (((!(((var_4 ? var_16 : var_6))))))));
                            var_20 = ((((((var_15 <= var_14) % ((var_3 ? var_14 : var_5))))) ? var_1 : (((~((var_0 ? var_15 : var_7)))))));
                        }
                        var_21 &= (((((var_2 ? var_7 : var_12))) ? (((var_10 ? var_4 : var_10))) : (var_0 + var_11)));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_22 *= var_17;
                        var_23 = ((((var_6 << (var_14 - 4171387296)))) != ((var_4 ? var_6 : var_1)));
                        arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] = ((((!(((var_17 << (var_7 - 194)))))) ? ((var_6 ? var_18 : (!var_7))) : (((((((var_14 ? var_12 : var_15))) && -var_3))))));
                    }
                    arr_23 [3] [i_1] [i_2] = (!(var_7 & var_7));
                    var_24 = (((~(~2600302402))));
                }
            }
        }
        var_25 += ((~(((!var_14) ? (!var_3) : (~var_15)))));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_26 [i_6] = ((((var_12 ? var_12 : var_2)) <= (var_4 | var_6)));
        arr_27 [i_6] = (((((var_8 ? ((var_18 ? var_3 : var_2)) : (!var_7)))) ? (~var_5) : (var_4 | var_3)));
    }
    var_26 &= var_10;
    #pragma endscop
}
