/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(var_15, ((~((var_12 ? -5732755532340295267 : var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1] [i_1] = (5732755532340295244 % 3230507764698514219);
                            var_18 -= var_2;
                            var_19 = (((((-(38 <= var_13)))) ? -var_11 : ((max((2147483647 || var_7), (arr_7 [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            arr_18 [i_0] [i_5] [i_1] [i_2] [i_3] [i_5] = ((var_2 % ((max(var_1, (var_13 >= var_9))))));
                            arr_19 [i_5] [i_0] [i_1] [i_2] [i_3] [i_5] = (min((3230507764698514234 < var_5), 3230507764698514240));
                        }
                        var_20 = (((((((17 & var_10) >= (max(var_8, (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]))))))) >= 5732755532340295276));
                        var_21 += (((((-(arr_10 [i_1] [i_1 - 1])))) ? ((((min(var_1, var_12))) ? ((max(var_2, (arr_8 [i_0] [i_0] [i_0] [i_0])))) : -1644197577)) : ((var_11 % (arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1 - 1] [i_1])))));
                        var_22 = ((!((max(((8702340771922824585 ? 218 : 3230507764698514206)), (var_14 % var_9))))));
                    }
                    arr_20 [i_0] [i_0] = ((var_16 ? 65522 : -1813125028));
                    arr_21 [i_2] [i_1] = (((((var_10 ? var_14 : -2066759401))) || (1813125035 & var_12)));
                }
            }
        }
    }
    var_23 = (max(((((~var_6) | (((max(var_12, var_11))))))), ((var_3 ? (max(11820688587808852537, 1)) : (((-1813125041 ? var_6 : -1813125035)))))));
    #pragma endscop
}
