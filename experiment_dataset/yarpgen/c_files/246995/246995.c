/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((arr_0 [i_0 + 3]) ? (arr_0 [i_1]) : -26325)) | (((((~(arr_4 [i_0] [i_0] [i_1])))) ? (max((arr_2 [i_1]), -26325)) : (arr_2 [i_0])))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_2] [i_0] = (~var_8);
                    var_17 = ((-26325 - (arr_3 [i_0] [i_2 + 1] [i_2])));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((26325 >> (62 - 44)));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_2 [i_3 + 1])));
                                arr_17 [0] [i_0] = ((var_12 | (arr_6 [i_0] [i_3 + 3] [i_0])));
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5 - 1] = ((-(arr_4 [i_3] [i_3 + 2] [i_3 + 2])));
                                arr_19 [i_0] [i_0] [i_3] [i_3] [i_0] = (arr_0 [i_0 + 2]);
                                var_19 = (-(((var_7 < (arr_4 [i_0] [i_0] [16])))));
                            }
                        }
                    }
                    arr_20 [i_0] = (((arr_7 [i_3 + 2]) ? (arr_13 [i_0] [i_0 + 3] [i_0] [i_0 + 3]) : (arr_11 [i_0] [i_1])));
                    arr_21 [i_0] [i_0] [i_3] = (((arr_10 [i_3] [i_3 + 3] [3] [i_3]) ? (arr_10 [i_1] [i_3 + 4] [i_3 - 1] [i_3]) : (arr_10 [i_0] [i_3 + 4] [i_3 - 1] [i_3 + 3])));
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_20 |= ((((max((~-26325), ((26314 << (var_13 - 50610)))))) ? ((-26315 ? (arr_23 [i_6 + 4] [i_6] [i_6 + 4]) : (arr_23 [i_6] [i_6 + 1] [i_6 + 4]))) : ((var_5 >> ((((var_11 << (((arr_10 [i_6 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2]) - 2758069094)))) - 65007))))));
                    arr_25 [i_0] = 26327;
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_21 = (max(var_21, ((max(26343, 1)))));
                    arr_28 [i_0] [i_1] [i_1] [i_7] = ((((((!-8264524711717846781) < (((arr_0 [4]) ? 9007199254739968 : 4611686018427387903))))) / (var_11 >= -1836337742)));
                    arr_29 [i_0 + 1] [i_0] = ((((((var_10 ? 3279974656335592262 : var_3))) || ((var_14 && (arr_7 [i_0]))))));
                }
                arr_30 [i_0] [i_0] = ((((max(var_6, (arr_14 [i_0] [i_0] [16] [i_1] [i_1])) / (arr_4 [i_0] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
