/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((53966 ? 11551 : (arr_5 [i_0])))) ? var_2 : var_12));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_0] [10] [i_1 + 1] [i_2] = (((((48518 ? 1046236428 : -var_18))) ? (!1355087059) : ((11551 ? var_2 : 139))));
                arr_11 [i_0] [i_0] [i_0] = var_19;
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_19));
                            var_21 = (min(var_21, ((((((((arr_4 [i_4]) ? var_15 : 6294)))) ? (!var_18) : var_6)))));
                        }
                    }
                }
                var_22 ^= (((((var_8 ? var_16 : (arr_9 [1])))) ? var_16 : (!var_15)));
            }
            var_23 &= ((((var_16 ? ((var_11 ? var_9 : var_12)) : (((var_15 ? var_5 : 1))))) ^ var_6));
            arr_18 [i_0] [i_1 + 1] [i_0] = 17761086484214498055;
        }
        for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_24 = (((-1531618260 ? -8 : var_15)));
            var_25 = (min(var_25, var_12));
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] = (max(32767, (((((var_7 ? var_10 : var_7))) ? ((var_5 ? -4473568519471888237 : 14811956035557361159)) : 4473568519471888243))));
            arr_24 [i_0] = (max(((var_10 ? ((1 ? var_19 : var_6)) : 11570)), var_3));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_27 [i_0] [i_0] [i_0] = (min(10700501254904482306, ((((arr_26 [i_0] [i_7 + 1] [i_7 + 1]) % (arr_26 [i_0] [i_7 + 1] [i_7 - 1]))))));
            var_26 = ((+((((max((-9223372036854775807 - 1), var_11))) ? ((26258 ? var_18 : -990456118)) : -894465313))));
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_27 = ((((var_2 ? var_1 : 0))));
                                arr_40 [i_11] &= ((((((var_17 ? 184 : 57376)) >= (var_1 || -1793322359))) ? var_1 : (max(((var_15 ? var_1 : 4795)), var_8))));
                                var_28 |= ((!(((!(arr_9 [i_8]))))));
                                arr_41 [i_0] [i_0] [13] [i_0] [i_11] = ((var_16 ? var_7 : (max(var_19, var_12))));
                            }
                        }
                    }
                    var_29 = ((((((arr_38 [i_9] [i_9] [i_8] [i_8 + 1] [i_0 - 2] [i_0 - 1]) - (arr_38 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_0 - 2] [i_0 - 3])))) ? (var_4 + 8990) : 8862429410097488462));
                    var_30 = ((((max(var_19, 57376))) ? ((0 ? var_6 : ((var_6 ? (arr_13 [i_0]) : 169)))) : (arr_30 [i_0] [i_8])));
                }
            }
        }
        arr_42 [i_0] [i_0] = (~var_17);
        arr_43 [i_0] = var_11;
    }
    var_31 = (~var_16);
    #pragma endscop
}
