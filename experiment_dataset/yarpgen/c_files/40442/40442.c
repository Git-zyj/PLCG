/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;
    var_12 = ((-var_0 / ((min(1, (max(1, 1)))))));
    var_13 = ((((max((max(var_9, 1)), var_3))) >= ((((max(10338425533054910950, 2967395751007099603))) ? var_10 : (max(var_8, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max((((1 % 9798445650060088) >> (-446659218 + 446659269))), ((var_6 << (var_3 - 646197642)))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_0] |= (max(-1, (((arr_9 [i_0] [i_1] [i_1] [i_2]) | ((~(arr_5 [i_1 - 2] [i_1 - 2])))))));
                    arr_11 [i_2] [i_1 + 1] [i_0] = ((((-((max((arr_4 [i_0]), (arr_3 [i_0] [i_0] [i_2])))))) < (((!(var_10 * 887839181))))));
                    var_14 = (((var_4 ? (arr_5 [i_1 - 2] [i_1 - 1]) : 25393)));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [i_1] [i_3] [i_3] = ((((((min(18446744073709551615, 15121312313136639175)) ^ (arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 1])))) ? ((max((!1), ((15 ? 2147483647 : 53918))))) : (min((arr_0 [i_3] [i_0]), ((0 ? 8556362433404998784 : var_5))))));
                    var_15 = (max(var_15, ((max(((-1 - (min(var_0, (arr_9 [i_3] [i_1] [0] [i_0]))))), ((-(arr_13 [i_1 + 1] [i_1 - 1] [i_3]))))))));
                    var_16 ^= (((((max(8328, 9798445650060113)))) ? (((!((((arr_13 [i_3] [i_0] [i_0]) ? (arr_13 [11] [i_1 - 2] [i_0]) : (arr_13 [i_0] [i_0] [i_0]))))))) : (arr_3 [i_0] [i_1] [i_0])));
                    var_17 *= ((((arr_1 [i_1] [i_1 - 2]) && (arr_1 [i_1] [i_1 + 1]))) ? ((-1 ? (arr_1 [i_1] [i_1 - 1]) : (arr_1 [i_0] [i_1 - 2]))) : 4294967295);
                }
                for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_4] &= (((((max(var_2, (arr_12 [1]))) / 1411734440))));
                    var_18 = (-8329 | 91);
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((var_0 * ((2147483647 ? (var_1 / var_6) : -2040933281))));
                    arr_21 [i_5] [i_1 + 1] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    var_19 -= 1;
    #pragma endscop
}
