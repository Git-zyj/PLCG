/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((var_5 <= ((3415005170629052072 ? 180 : 127)))) ? var_7 : var_19))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((((((31 ? (-32767 - 1) : 0))) / (((arr_1 [14]) ? (arr_2 [i_0] [i_0]) : 9183))))) ? (((((arr_0 [i_0]) < 1)) ? (((var_3 ? var_11 : var_16))) : (max(65535, 15031738903080499546)))) : (arr_0 [i_0 - 2]))))));
        arr_3 [i_0] = ((!((((arr_0 [i_0]) % (arr_0 [i_0 + 3]))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((((min(((3415005170629052053 * (arr_7 [i_1] [i_0]))), (arr_7 [i_0 + 3] [i_0 + 2])))) ? (((!(((~(arr_4 [i_1] [11]))))))) : (arr_6 [i_0 + 2] [4])));
                        var_22 = ((((min((((arr_5 [i_0]) ? 180 : 4228558097)), (((arr_9 [4] [i_3] [15] [i_1 + 1] [15]) ? 3820109418 : (arr_2 [i_1] [i_0])))))) > (max(3415005170629052072, (arr_4 [i_1] [i_1 - 2])))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_23 = (max(var_23, (((((64379 + (arr_4 [i_0] [i_4]))) <= (((248 ? 0 : (arr_6 [i_4] [i_0])))))))));
            arr_13 [i_0] [i_0] = (((arr_6 [i_0 - 3] [i_0 + 2]) && (arr_4 [i_0 + 2] [i_0 + 2])));
        }
    }
    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_24 = (5770475980873952935 / 1);
        arr_16 [i_5] = ((((max(2147483647, (arr_7 [i_5 + 1] [1])))) ? (((((arr_7 [i_5 - 2] [i_5 - 2]) != 193)))) : 0));
        var_25 |= (arr_7 [i_5] [i_5]);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_21 [i_7] [15] = ((((((((var_14 ? 8 : -1366550030))) ? var_4 : (max(var_9, var_19))))) ? ((-(arr_20 [i_6] [i_7]))) : (!4294967295)));
                arr_22 [i_7] = (min((((arr_1 [i_6]) / 55434)), 49038));
            }
        }
    }
    #pragma endscop
}
