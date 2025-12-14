/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = ((57840 * (-5288701026513018017 > 7887583172918876922)));
        var_20 = (max(var_20, 224));

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_21 = (min(var_21, (((31294 ? (((!(22812 << 0)))) : (((((min(var_6, var_13))) || (var_7 * var_17)))))))));
                var_22 = (max(var_22, ((((((min(7, -6563)) ? ((((arr_2 [8]) ? (arr_3 [i_0] [i_0]) : -2276))) : (var_18 / -1))))))));
            }
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                arr_9 [i_0] [4] [i_3 + 1] [i_3] = (max(((35 ? ((var_6 ? 21636 : var_17)) : 1)), (((((0 ? 0 : 0))) ? var_18 : (((arr_3 [0] [0]) | var_18))))));
                var_23 = ((var_14 ? (~17594) : (~12334)));
                arr_10 [i_3] [i_1 - 2] [i_0] [0] &= (max((arr_3 [i_3 - 1] [i_1 + 1]), ((~((-(arr_1 [i_3 - 1])))))));
            }
            var_24 = var_9;
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_25 = -107;
            var_26 = 21941;
            var_27 = (((((-(4398046445568 * 17658)))) ? var_15 : var_3));
        }
    }
    var_28 = (max(var_5, 319416229491548781));
    var_29 &= var_9;
    var_30 = ((!(((1981 < 28845) < 249))));
    #pragma endscop
}
