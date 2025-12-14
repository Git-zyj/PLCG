/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (20 <= 0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (588422741 > 122);
                    var_13 = (max(var_13, ((((((~((var_0 ? var_1 : (arr_7 [i_2])))))) ? (arr_7 [i_2]) : ((((!(arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2]))))))))));
                    var_14 = ((+((((var_5 ? (arr_2 [i_0] [i_1]) : (arr_6 [i_0])))))));
                    var_15 = (min(((((arr_6 [i_0 + 2]) ? var_12 : (arr_6 [i_0 - 1])))), ((((18446744073709551609 ? var_7 : var_1)) % ((((!(arr_0 [i_0 - 1])))))))));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_16 ^= ((-((min((!8698074951836036379), (min(-112, 62042)))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_17 = 467673629;
                    var_18 |= (min(((((((arr_15 [i_3] [i_4] [i_3]) ? (arr_14 [i_3]) : (arr_18 [i_3] [i_3] [i_3 + 1] [i_4])))) ? -8 : (var_1 < var_8))), ((-(arr_3 [i_3] [i_5 - 1])))));
                }
            }
        }
        var_19 = ((~(max(-5, 356454223927147305))));
    }
    var_20 = ((var_5 ? ((var_12 ? 467673629 : (((var_12 ? var_2 : var_8))))) : 122));
    var_21 -= var_2;
    #pragma endscop
}
