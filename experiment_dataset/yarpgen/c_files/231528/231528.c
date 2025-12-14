/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (max(var_16, (((((min((arr_1 [21] [i_0]), 158434508))) ? (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))) : (min(2312864743764826973, (arr_1 [i_0] [i_0]))))))));
        var_17 = (max(var_17, ((min((2312864743764826973 == 2312864743764826981), (((66 == -6516815178211650146) <= (min(var_4, var_0)))))))));
        arr_2 [i_0] [i_0] |= ((max(-2312864743764826974, (max(13076230322711003062, 1)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = ((((((arr_3 [i_0]) >= 1))) <= var_14));
            arr_7 [i_0] = min((((!(7 / var_3)))), ((-(!var_12))));
        }
        arr_8 [10] [15] = var_11;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 += -1;
        var_20 -= (!2312864743764827001);
        var_21 = (min(var_21, ((-(var_9 + 2312864743764826974)))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_22 = ((((var_3 ? 3030982964 : 164)) == ((((arr_11 [4]) * (arr_12 [i_3]))))));

            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_23 = (max(var_23, 2312864743764826974));
                var_24 |= ((-(arr_1 [i_4] [5])));
                var_25 = (3404594911 << (((arr_18 [i_3] [i_3]) - 4149584452928217652)));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_23 [i_3] = (((189 >> (((arr_1 [i_6] [i_3]) + 2452)))));
            var_26 = (min(var_26, (((((((arr_14 [i_3]) & var_10))) > (max(var_0, (arr_13 [i_6]))))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_27 = ((((max(-68, 3404594911))) ? ((+((var_14 ? (arr_14 [i_7]) : var_13)))) : (((((arr_18 [i_3] [i_7]) == (arr_18 [i_3] [i_7])))))));
            var_28 = (~var_13);
        }
        arr_26 [i_3] = (arr_0 [i_3]);
        var_29 *= (((128 && var_10) < ((1 + (arr_6 [i_3] [i_3] [i_3])))));
        var_30 = ((((!(((18025367068840341092 << (419281952 - 419281905))))))));
        var_31 ^= -48;
    }
    var_32 = var_2;
    #pragma endscop
}
