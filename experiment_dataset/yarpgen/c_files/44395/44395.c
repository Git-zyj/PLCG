/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [13] [i_0] = (arr_2 [18] [13]);
                var_15 = (arr_5 [i_0 + 2] [i_0]);
                var_16 = 8102636521544194691;
                arr_7 [i_0] = (((min(50678, (var_2 - -1277307093))) != 50664));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [8] [i_3] [12] = ((~(max((-2147483647 - 1), 50664))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_18 [i_3] [6] [0] [16] = (arr_0 [3]);
                    var_17 = (max((((((var_8 ? 14872 : var_0)) ^ (arr_5 [i_3] [i_3])))), (arr_2 [13] [10])));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_18 += ((((((50669 ? var_8 : 213) <= (arr_20 [8] [14] [0] [i_5]))))));
                    arr_21 [10] [14] [i_3] [8] = ((((((5710495643540985921 ? 12736248430168565695 : 0)) | (arr_15 [0] [i_3] [0] [1]))) <= 87));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_19 = (arr_4 [i_3]);
                    arr_24 [i_3] [5] [15] = (min(4171287033, (arr_16 [0] [8] [9])));
                    arr_25 [6] [i_3] [i_3] [9] = (((((arr_19 [i_3] [i_3]) || var_9)) ? ((var_5 % (~63))) : ((((((arr_22 [i_3] [1] [12]) - var_10))) ? (var_4 * var_11) : ((268435328 ? 1218476471 : -11561))))));
                    arr_26 [i_3] = -385770914669037103;
                }
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    arr_29 [i_3] [17] [5] = (((var_12 ? (var_5 || 4294967295) : (((arr_4 [i_3]) | var_0)))));
                    arr_30 [14] [i_3] [10] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
