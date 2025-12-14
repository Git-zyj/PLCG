/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_8 ? (((var_2 ? (~-7801) : var_15))) : var_3);
    var_19 = (min(var_19, ((((((29770 ? 5634 : 0))) ? ((((-275 ? var_5 : 2209)) * var_10)) : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = ((((var_0 ? var_8 : var_1)) | (((-102 ? var_0 : 0)))));
                    var_20 &= (((((0 ? 0 : -7801))) ? (((((arr_3 [i_2 - 1]) || (arr_3 [i_2 + 1]))))) : (((arr_6 [i_0] [i_1] [i_2]) ? var_14 : (arr_0 [i_2 - 1])))));
                    var_21 -= (((var_4 || var_15) ? ((0 ? (arr_2 [i_2 - 2]) : 150)) : (65532 ^ var_4)));
                    var_22 = (min(var_22, 3099591400586354920));
                }

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_23 = (((((((var_15 ? var_9 : (arr_3 [i_1])))) ? (((arr_7 [i_0] [i_1]) ? 7680 : 285978576338026496)) : var_5))) ? (((186 ? 0 : 7801))) : (((arr_8 [i_1]) ? ((max(1128683334, 0))) : -3)));
                    var_24 = (min(var_24, (((((((((1022 ? 1 : -1480949607))) ? (~1) : var_15))) ? (((((3145743514325303359 ? var_4 : -2147483636))))) : ((var_8 ? (((arr_2 [i_0]) ? 18446744073709551595 : -7801)) : (arr_12 [i_0] [i_1] [i_1] [i_3]))))))));
                    var_25 = (max(var_25, ((((15347152673123196700 * var_0) ? (var_14 || -var_14) : ((15347152673123196695 ? var_17 : (arr_6 [i_3] [i_1] [i_0]))))))));
                    arr_13 [i_0] = ((((((1152921504606842880 ? var_4 : 1)) <= (arr_3 [i_0]))) ? (((((var_11 ? var_10 : (arr_9 [i_3])))) ? (arr_2 [i_3]) : 15580880467295959529)) : (((var_2 / var_7) ? (arr_7 [i_1] [i_3]) : (38685 + 25640)))));
                }
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_26 -= ((((((((var_12 ? 18446744073709551595 : var_9))) ? (arr_8 [i_0]) : var_2))) ? 16 : (((-var_10 ? 22 : (~var_3))))));
                    var_27 &= (arr_11 [i_0] [i_1] [i_4] [i_4]);
                    var_28 = ((((((~22) ? var_9 : ((-105 ? 9223372036854775807 : var_16))))) ? var_4 : ((1 ? var_13 : 37))));
                    var_29 &= ((((max(var_14, (arr_3 [i_1])))) ? (max(var_13, var_6)) : var_8));
                }
            }
        }
    }
    #pragma endscop
}
