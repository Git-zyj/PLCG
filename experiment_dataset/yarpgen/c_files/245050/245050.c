/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((17233608460067722366 ? 12426848676239694715 : -58)) < (-21 / 11)))) | ((((var_1 >> (var_1 - 50707))) + ((var_12 ? var_15 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((((17233608460067722366 | 32767) ? (((arr_3 [i_0]) | -21)) : (min(-21, 0))))) ? ((((((((arr_1 [i_1] [i_0 + 4]) >= (arr_0 [1] [5])))) >= ((((arr_3 [i_0]) < (arr_1 [i_0 + 1] [i_0])))))))) : (min(((var_4 ? var_14 : 20)), ((min(32, 16256)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (((((max((-9223372036854775807 - 1), 35046933135360)) >= ((((arr_3 [i_0]) ? var_0 : var_5))))) ? ((((max(-58, (arr_6 [i_0])))) ? (max((arr_8 [7] [7] [7] [7]), 1299251094)) : (((39195 ? var_14 : var_16))))) : (((((((arr_6 [i_0]) ? (arr_8 [i_0 + 3] [0] [4] [i_3]) : 26341)) < (((var_4 + 2147483647) >> (((arr_7 [i_0] [i_0] [i_0] [4]) - 1391084051))))))))));
                            arr_10 [i_0] = (min((((((-23465 ? var_8 : var_2))) ? (min(40, 0)) : (var_7 || var_13))), (((var_11 / 53) ? (((arr_1 [i_0 + 2] [i_1]) ? (-9223372036854775807 - 1) : 1)) : (((min(var_6, var_9))))))));
                            var_20 += min((max((min(var_2, 34)), (((58556 ? (arr_2 [i_2]) : var_0))))), ((min(((max((arr_1 [i_1] [i_0]), (arr_8 [i_0] [i_1] [i_2] [1])))), (var_6 ^ var_9)))));
                        }
                    }
                }
                var_21 += ((((max((((arr_6 [i_1]) / 6)), ((max(var_1, var_0)))))) ? ((((((max(15, var_1)))) >= ((3840 ? 20 : 1))))) : (((((min((arr_5 [i_0] [i_0]), 0))) < ((66 ? var_14 : var_3)))))));
            }
        }
    }
    var_22 = (max(var_22, ((((((((var_14 ? -924236147 : var_1))) ? (((39195 ? var_12 : -32752))) : ((var_5 ? 1213135613641829248 : var_12)))) == (((((max(var_17, var_9))) ? ((1020 ? var_14 : var_13)) : ((max(1, 1)))))))))));
    #pragma endscop
}
