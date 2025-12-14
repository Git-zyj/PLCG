/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((4890839621192304220 >= (max(362412999904777960, -215860455)))) ? var_2 : ((-((66 << (66 - 56))))));
    var_15 = ((((((var_3 < var_5) ? (!var_9) : ((-66 ? 1804636166780288548 : 3))))) ? -79 : (((var_7 + 2147483647) >> ((((9223372036854775807 ? var_11 : var_9)) - 6590265165931924251))))));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = (arr_2 [i_1] [i_0]);
            var_17 = (arr_0 [i_1]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (0 % 555845152)));
            var_19 |= var_1;
            arr_8 [i_0] [i_0] = ((0 ? -1203328729 : -1597817287194518947));
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_20 = (min(var_20, ((((((var_1 ? (arr_2 [i_0 - 1] [i_0 - 2]) : (((arr_0 [i_3]) ? var_5 : var_5))))) ? ((2 ? -66 : 4294967288)) : (-1597817287194518947 < 159))))));
            arr_13 [i_3] [8] |= ((~(arr_5 [i_0 - 2] [i_0] [i_3])));
        }
        var_21 *= (~4294967288);
        arr_14 [i_0] = ((0 ? ((min(1, 1))) : 57));
        arr_15 [i_0] [i_0] = (((((((arr_9 [i_0] [i_0 + 1]) ? (arr_5 [i_0] [i_0 - 1] [i_0]) : ((min(var_2, var_9))))) + 2147483647)) << (((((arr_1 [i_0 - 1]) + 8149724312346093775)) - 30))));
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        var_22 *= max(((((arr_18 [i_4 - 2]) < 1203328729))), (min(38982, 5294079234942926201)));
        arr_19 [i_4] = ((max(20115, (-127 - 1))));
        arr_20 [i_4] = ((((((((0 ? var_8 : var_6))) ? var_11 : var_9))) ? ((var_9 ? var_1 : (arr_16 [i_4 - 2] [i_4]))) : (((~(arr_16 [i_4 + 1] [i_4]))))));
        arr_21 [i_4] = 0;
    }
    #pragma endscop
}
