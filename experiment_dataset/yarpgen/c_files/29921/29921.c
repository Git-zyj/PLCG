/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(15926, -49));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_17 = ((((((((1 ? 49714 : -1621002537))) ? (-925869929 + -526502967) : var_1))) - (((min(var_1, var_8)) + var_12))));
            var_18 |= (((var_10 | (arr_1 [i_0] [12]))) <= 1);
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_19 = var_6;
            var_20 = ((((((arr_9 [i_0 - 1] [i_2 - 1]) ? (arr_9 [i_0 - 1] [i_2 - 1]) : (arr_9 [i_0 - 1] [i_2 - 1])))) ? -615061394 : var_13));
            var_21 = (((((((var_6 ? 0 : (arr_8 [i_0 + 1] [23] [i_0 + 1]))) >= (~var_1)))) > (((((13 ? var_14 : var_9)) > ((var_11 ? (arr_3 [i_2]) : (arr_0 [i_2 + 1]))))))));
            var_22 = (max((((-125 <= ((var_2 ? var_3 : (arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))), (((arr_2 [22]) ? var_10 : (max((arr_9 [i_0 - 1] [i_2 + 1]), var_1))))));
        }
        var_23 *= (((!58300) > (~31656)));
        var_24 = 4294967295;
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_25 = (min((min(15479, (min((arr_4 [i_3 - 1] [i_3 - 1]), var_8)))), ((((var_10 ? var_8 : (arr_6 [i_3 + 1] [i_3]))) >> (((((arr_7 [i_3] [12]) + 2147483647)) >> (var_13 + 217929309)))))));
        var_26 = (min(4163110130, (min(var_8, -615061394))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_27 = (((arr_8 [i_3] [i_3] [i_3]) % (arr_6 [i_3] [i_6])));
                        var_28 = ((((((~69) | ((-76 ? (arr_9 [i_3] [17]) : var_9))))) ? (arr_17 [8]) : ((31674 ? -615061394 : -42))));
                        var_29 = (min(var_29, (((((((((-127 - 1) < var_15)) ? var_15 : (!var_14)))) ? (((var_7 || ((max(var_6, var_15)))))) : (max((!-615061394), (-615061368 / 1))))))));
                        var_30 = (((((var_11 ? 615061394 : ((min((arr_14 [i_3 + 1] [13]), var_0)))))) ? 31657 : ((1 ? -615061394 : 1))));
                        var_31 = ((((var_0 || (arr_2 [i_3 + 1]))) ? var_6 : var_0));
                    }
                }
            }
        }
    }
    var_32 = (((((var_1 / ((var_8 ? 1 : var_11))))) || var_14));
    #pragma endscop
}
