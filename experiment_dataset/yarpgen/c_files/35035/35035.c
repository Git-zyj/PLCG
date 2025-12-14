/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((0 ? ((var_8 * ((0 ? 29390 : -4493245713294877727)))) : ((((((min(var_12, var_14))) < (var_4 - var_12)))))));
    var_18 ^= (((((var_1 % ((max(20, var_5)))))) ? (((((var_0 ? 65408 : 4740))) ^ (var_0 ^ 30))) : ((((((30 << (33 - 21)))) ? -31 : 22)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_2] [i_2] = (max(var_15, ((((min(var_14, 18446744073709551615))) ? ((var_13 ? 3371210809 : (arr_3 [i_1 - 1]))) : ((max(-32, (arr_6 [i_0] [i_1] [i_2] [i_2]))))))));
                    var_19 *= (-30 % 30);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max(((19 ? ((65517 ? 1 : 16368)) : 1)), ((((((18446744073709551615 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_16 [i_1] [i_2] [i_2])))) && (((18446744073709535247 ? -50 : -119)))))))))));
                                var_21 = (min(var_21, (((1 ? 255 : (((((min(0, 1)))) | 0)))))));
                                arr_17 [i_0] = (max(((((-12 + 2147483647) >> (-1270776422 + 1270776451)))), (((max(var_4, 14636589439822186178)) | (((-8741629941763687621 ? 64163 : var_12)))))));
                                var_22 ^= ((((((((0 ? 64169 : 3810154633887365438))) ? (0 * 19276) : (((96 ? 1 : -859756841)))))) ? (max((((arr_7 [i_0] [i_2] [i_4]) * var_3)), ((max(var_4, var_14))))) : (max((arr_6 [i_1] [i_2] [i_3 - 1] [i_2]), ((-635574613 ? 1 : 12488))))));
                                var_23 = (min(var_23, ((((((((27 ? 0 : 96))) ? (arr_4 [i_0] [i_0] [i_0]) : (((arr_14 [i_0] [i_0] [i_0]) << (26071 - 26019))))) >= ((((((arr_16 [i_0] [i_1] [i_4]) > (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (min((arr_1 [0] [i_1]), (arr_10 [i_0] [i_0] [i_0] [6]))) : (((arr_5 [i_0] [14] [i_0]) ? (-127 - 1) : (arr_13 [i_3 - 1] [4] [i_3 + 1])))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
