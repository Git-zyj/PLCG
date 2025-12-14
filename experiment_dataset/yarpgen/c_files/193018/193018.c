/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(((var_4 ? -59 : var_12)), var_18)), 50));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_21 = (((arr_0 [i_1]) ? (((var_1 && -59) ? ((var_13 ? (arr_0 [i_0]) : var_11)) : (((((arr_0 [i_0]) == var_4)))))) : ((((((59 >> (59 - 42)))) ? var_4 : ((((arr_4 [i_0] [i_1]) == 4294967295))))))));
            arr_5 [i_0] = var_12;
        }
        arr_6 [i_0] = (max(255, 66067250730349198));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2 - 1] [i_0] = min(6955197863270914463, (min((((-27 ? -8977915062208859759 : (arr_9 [i_2])))), (max(var_7, -27)))));
                    arr_14 [i_0] [i_3] [i_2 + 1] [i_3 + 1] = ((+(max(((max((arr_1 [i_0] [i_3]), (arr_12 [i_3] [i_2])))), (((-337831509 + 2147483647) >> (-3325081460188295597 + 3325081460188295614)))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_18 [i_4] = var_6;
        var_22 = (min((max((min(8716820622872710994, (arr_9 [i_4]))), (arr_2 [i_4]))), var_8));
        var_23 *= -3325081460188295597;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((var_10 * ((var_16 ? (arr_10 [i_5] [i_5] [i_5]) : var_5))));

        for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
        {
            arr_24 [i_6] &= (arr_1 [i_6 - 2] [i_6 - 2]);
            var_24 ^= (max(1, (arr_19 [i_5] [i_6])));
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_25 -= (max((max(((min(var_13, (arr_9 [i_7])))), ((var_17 ? 4203073459 : 2294755258)))), -36100190));
            arr_27 [i_5] [i_5] = ((var_17 ? ((var_16 ? (arr_20 [i_5] [i_7]) : var_15)) : (arr_19 [i_5] [i_7 + 1])));
            var_26 = ((min(18, 44)));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_27 = (max(var_27, ((max(((((30720 ? -24 : 0)))), ((var_8 % (min(20937, (arr_9 [i_8]))))))))));
            arr_30 [i_5] [i_8] = (arr_20 [i_5] [i_8]);
        }
        arr_31 [i_5] = 1023;
        var_28 = (max(var_28, (max((arr_20 [i_5] [i_5]), (min(var_12, (arr_26 [i_5] [i_5])))))));
    }
    var_29 = (max(var_29, ((((max((!2155464535624963842), ((432843913396234279 ? 27 : var_6))))) ? 9919831892673187073 : (((2348392792 ? 8 : -36100178)))))));
    var_30 += ((((min(var_18, var_13))) ? ((((var_1 ? 8526912181036364559 : var_15)))) : var_8));
    var_31 = (max(var_14, var_18));
    #pragma endscop
}
