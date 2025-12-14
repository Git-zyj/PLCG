/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(var_10, (~var_8)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = 1;
        arr_2 [i_0] [i_0] = ((!(arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = (40 ? 109 : 108);
        arr_4 [i_0] = 15025010162318419382;
        arr_5 [3] = (min(var_5, ((max((var_15 || 10685897512262260910), (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = ((((51090 <= (arr_9 [i_1] [i_1]))) ? (((50617 ? var_10 : var_1))) : (max((arr_9 [i_1] [i_1]), (arr_9 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_18 = (((!66) && (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                        arr_20 [i_2] [i_3] [i_3] [i_2] [i_1] [i_2] = (min((37 && 2342011415010426111), var_13));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        var_19 = (((!17) ? var_0 : (min(((min(var_0, 154))), ((-77 ? (arr_18 [i_5] [18] [i_5] [i_5]) : (arr_15 [i_5] [i_5])))))));
        var_20 = var_0;
        var_21 ^= (arr_22 [13]);
        var_22 = (min(var_22, ((((((((var_11 / (arr_6 [i_5])))) ? ((111 / (arr_9 [i_5] [i_5]))) : var_14)) * 0)))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_23 = ((var_3 ? (max(((4646 ? 12288 : -8646973396741187613)), (-127 - 1))) : (arr_30 [1] [i_6] [i_6] [i_6])));
                        arr_33 [i_9] [i_8] [i_7] [i_9] = 12;
                        var_24 = (arr_29 [13] [i_7] [i_7]);
                    }
                }
            }
        }
        arr_34 [i_6] = (max(((var_7 ? var_10 : var_7)), 240));
        var_25 = (((arr_7 [i_6]) ? ((((max(4611686018427387903, 58))) ? (((min(189, 2)))) : ((32768 ? -1224566312 : var_8)))) : var_0));
    }
    #pragma endscop
}
