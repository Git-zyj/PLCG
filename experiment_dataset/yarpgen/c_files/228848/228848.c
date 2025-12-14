/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1, (((((var_0 ? 0 : var_6))) <= (max(var_14, var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = (min(var_20, ((((((((min(-5308862709588954714, 30))) ? ((((arr_3 [i_0] [i_2]) < 113))) : 0))) ? (((max(var_17, var_13)))) : (((arr_0 [i_0] [i_0 - 1]) ? 13274355793440246354 : (arr_5 [i_0 - 1] [i_0 - 1] [20]))))))));
                    var_21 = (min(((var_6 ? (var_4 - var_17) : (arr_2 [i_0 - 1] [i_0 + 1]))), var_6));
                    arr_7 [10] [i_0 - 1] [i_0 - 1] &= ((!((max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [i_0 + 2]))))));
                    arr_8 [19] [i_1] [i_2] = (max(((min((arr_1 [i_0 + 2] [i_0 + 1]), ((13274355793440246354 ? -28267 : var_7))))), (((arr_0 [i_0 + 1] [i_0 + 2]) ? 1 : var_12))));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0 - 1] [i_0] [i_3] [i_3] [i_0 - 1] [i_0] = min(((((var_10 ? (arr_12 [i_0] [i_1] [i_1] [i_3 - 1] [i_1] [i_4]) : 888012846)))), (min((~var_17), (arr_9 [13] [i_4 + 3]))));
                        var_22 = (max((-20347 & -143), (arr_14 [10])));
                        var_23 = -32764;
                    }
                    var_24 += min((((arr_6 [16] [i_0 + 2] [i_0 - 1] [i_3 + 1]) & 4194296)), (((arr_13 [10] [i_1] [i_0 - 1] [i_3 + 1]) ? (-32767 - 1) : (arr_11 [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))));
                    var_25 &= (137 ? (((arr_11 [i_1] [i_0] [i_1] [i_3]) ? (arr_1 [1] [i_3 - 1]) : ((var_15 ? 1227843802 : (arr_0 [i_0] [i_0 + 2]))))) : (((var_14 ? (arr_11 [i_1] [i_1] [i_0 + 2] [i_1]) : (arr_12 [i_3 - 1] [1] [i_1] [i_1] [i_1] [i_0 + 2])))));
                    arr_16 [i_3] [i_3] [i_0] = (((((-(arr_14 [i_0 + 2])))) ? 83 : ((~(arr_14 [i_0 + 1])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_26 = (min(var_26, (0 ^ 192)));
                    var_27 |= var_17;
                    arr_21 [9] [i_1] [i_0] = (max(var_1, ((((min(var_5, (arr_6 [i_0] [1] [8] [6])))) * (min(5308862709588954714, 28267))))));
                    var_28 = (max(var_28, ((192 || ((min(-27181, 18446744073709551595)))))));
                    var_29 = ((+(((((((arr_17 [i_0 + 2] [i_1] [i_5]) ? 1 : 249))) <= 6736946485904338404)))));
                }
                arr_22 [i_0] = ((var_5 % (arr_12 [i_0] [i_0 - 1] [18] [12] [i_0] [i_0 - 1])));
                arr_23 [i_1] [i_0] = ((((min(0, 0))) ? (arr_12 [16] [i_1] [i_0 - 1] [i_0] [20] [i_0 - 1]) : (((164567083 ? 4130400213 : 4130400213)))));
            }
        }
    }
    #pragma endscop
}
