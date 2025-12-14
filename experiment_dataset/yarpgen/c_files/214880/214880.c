/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_6 ? ((~((var_9 ? var_7 : var_11)))) : (((var_10 ? var_1 : ((3585200597 >> (-115 + 145))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((((max((max(0, var_16)), var_16))) ? (min(var_17, ((((arr_10 [i_2] [i_1] [i_0]) * var_9))))) : (((-((var_10 ? -1 : (arr_6 [i_0]))))))));
                    var_20 = (((((max(var_0, var_0)))) | ((((max(3585200597, 116))) ? (((~(arr_6 [i_2])))) : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] = (min((min((var_5 || var_6), (min(12292949985310729838, var_5)))), ((((17045651456 ? 16298622922388750320 : 9223372036854775807)) + ((max(3585200614, 4294967293)))))));
                                arr_17 [17] [17] [i_2] [i_4] = ((((((1046426447 ? (arr_15 [i_0] [17] [17] [i_1] [1] [i_0] [1]) : var_2)) == (~1))) ? ((((!var_14) ? ((((arr_1 [i_0]) < 709766698))) : (max(var_15, var_12))))) : (((((-(arr_10 [i_0] [i_1] [i_2])))) ? (((~(arr_3 [i_0])))) : 10))));
                                var_21 = (((~var_7) ? (!1046426447) : (max((((arr_10 [16] [9] [i_3]) / var_8)), ((((arr_13 [10] [i_3] [10] [i_3]) / (arr_5 [i_0] [i_1] [i_2]))))))));
                                var_22 ^= ((!(((22235 ? (2147483647 >= 10064) : 0)))));
                            }
                        }
                    }
                    var_23 ^= ((((((((arr_0 [i_0]) / var_6)) / (((-(arr_7 [i_0] [i_1] [14]))))))) ? ((((((var_2 / (arr_7 [i_0] [i_1] [i_0])))) ? var_1 : ((var_15 / (arr_2 [i_0] [i_1])))))) : (min(var_13, -8197738902102689355))));
                }
            }
        }
    }
    #pragma endscop
}
