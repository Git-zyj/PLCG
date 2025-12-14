/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 |= (min((((var_11 >> (var_10 - 56)))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 17;i_4 += 1)
                            {
                                var_18 = max(((min((arr_6 [6] [i_4 + 1] [i_2] [i_2]), 126))), -var_9);
                                var_19 = var_6;
                                var_20 = (min(var_20, (arr_3 [i_1])));
                                var_21 = (2074971596426790609 >> var_2);
                                var_22 = 6793983173815676261;
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_23 = (min(var_23, (((+((var_8 ? var_13 : ((max((-127 - 1), -120))))))))));
                                var_24 = ((((var_0 ? (arr_15 [i_0] [i_2 + 2] [i_0 + 2] [6] [i_0]) : (arr_15 [i_0] [i_2 + 2] [i_0 + 2] [2] [i_0])))) ? var_3 : (((arr_0 [i_0 + 1]) ? (var_14 >= 19) : (min(var_10, (arr_14 [i_0 + 2] [i_1] [i_2] [i_3 + 2] [i_5] [i_5]))))));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_25 = (min(var_25, (arr_0 [11])));
                                var_26 = (((((((var_9 ? -114 : 2143910095175046570))) ? var_2 : (((arr_16 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) >> var_2)))) != (arr_11 [i_3] [i_0] [i_3] [i_3])));
                            }
                            var_27 = (-(((var_0 / var_9) ? (((53210 ? var_2 : var_1))) : (arr_12 [i_3 + 2] [i_3 + 2] [16] [i_3 - 1]))));
                            arr_20 [0] [i_0] = (i_0 % 2 == 0) ? ((((max((var_5 || -20), (((arr_3 [i_0]) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [5]) : (-2147483647 - 1))))) << (((arr_13 [i_0] [i_1] [i_1] [i_0] [4] [i_3]) - 1190035952044389257))))) : ((((max((var_5 || -20), (((arr_3 [i_0]) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [5]) : (-2147483647 - 1))))) << (((((arr_13 [i_0] [i_1] [i_1] [i_0] [4] [i_3]) - 1190035952044389257)) - 946995221462448527)))));
                            var_28 = var_6;
                            var_29 = ((-var_4 != (((-4310836145877294041 ? -20 : var_10)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_30 = ((((((114 ? var_3 : -121)))) ? (min(245, 7943798898784285460)) : var_10));
                            var_31 += (((((min((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]), (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0]))))) >= (((arr_19 [i_0 + 2]) ? (arr_19 [i_0 + 2]) : (arr_19 [i_7])))));
                        }
                    }
                }
                var_32 = (min(var_32, var_8));
                var_33 = -6046932333361874777;
            }
        }
    }
    #pragma endscop
}
