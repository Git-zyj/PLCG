/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~(((((var_9 ? var_14 : 12110592389705903940)) <= var_10))))))));
    var_18 = (((365609678 ? var_9 : -var_9)));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = (!32746);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_3] [i_3] [i_1] [i_2] = ((((((arr_4 [i_1] [i_1] [i_3 + 3]) ? (arr_4 [i_0] [i_0] [i_3 + 1]) : (arr_4 [i_0] [i_1] [i_3 - 1])))) ? var_0 : (arr_4 [i_3] [i_3 - 1] [i_3])));
                                var_19 = ((((((!(arr_9 [i_0] [i_3] [i_3])))) != var_1)) ? ((max(var_14, (min(9223372036854775807, var_9))))) : ((-((var_7 ? 10049294512684232509 : 29)))));
                                var_20 = (min(var_20, (((32752 ? -8 : 0)))));
                                arr_14 [i_4] [i_4] [i_2] [i_0] [i_4] [i_0] |= ((((((((var_11 ? (arr_10 [i_0 + 1] [i_4] [i_2] [i_3]) : var_1))) ? ((var_11 ? (arr_2 [i_2]) : var_6)) : (!var_2)))) ? ((var_10 ? var_13 : (arr_12 [i_0] [i_4] [i_2] [i_4] [i_3 + 2] [i_3] [i_1]))) : (((var_12 > 3551529407) ? (max(8397449561025319128, 1)) : (arr_6 [i_0])))));
                                var_21 = (max(var_21, ((max((arr_11 [i_3] [i_4] [i_3] [i_3 + 3] [i_3 - 2]), ((min(var_4, (arr_5 [i_3 - 2])))))))));
                            }
                        }
                    }
                    var_22 ^= (arr_9 [i_0 - 2] [2] [i_2]);
                }
            }
        }
        var_23 += ((+((~((7703430162686581236 ? (arr_12 [i_0] [i_0] [i_0 - 3] [i_0] [11] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_24 ^= ((((!(arr_6 [i_5 - 1]))) ? (~var_1) : (((arr_9 [i_5] [0] [i_5 + 1]) ? var_7 : (arr_11 [i_5] [2] [i_5] [i_5] [i_5])))));
        arr_17 [i_5] = (((((((((arr_0 [i_5]) ? (arr_4 [i_5 - 3] [i_5] [i_5]) : (arr_5 [i_5])))) ? (arr_5 [i_5]) : (((min(-230, (arr_4 [i_5 + 2] [i_5] [12])))))))) ? (~var_2) : ((((min(var_8, var_5))) ? (((max(var_4, 7809)))) : (arr_7 [i_5] [i_5] [i_5] [i_5])))));
        arr_18 [i_5 + 2] [i_5 - 1] = ((-(max(-var_0, -var_9))));
        arr_19 [i_5] = var_11;
        var_25 = (min(var_25, ((((arr_6 [i_5 - 1]) ? (max(((var_5 ? (arr_4 [i_5] [i_5 - 3] [i_5]) : (arr_0 [i_5]))), var_14)) : (((-(arr_4 [i_5 + 1] [i_5 - 2] [i_5 - 1])))))))));
    }
    var_26 = ((-(((var_16 / var_14) + var_11))));
    var_27 = var_7;
    #pragma endscop
}
