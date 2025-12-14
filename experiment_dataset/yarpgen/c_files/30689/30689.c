/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= ((-(((!(((var_14 ? (arr_0 [i_0]) : 1))))))));
        var_19 -= (max(((31204340 ? 115801748 : -115801728)), (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_20 -= (arr_2 [8] [i_1 + 1] [8]);
            arr_4 [i_0] = (((arr_1 [i_1 - 2] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1]) : (arr_1 [i_0] [i_0])));
            var_21 = arr_3 [i_0] [i_1 - 2];
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_22 = (arr_1 [i_0] [i_0]);
                var_23 *= 909418531872645351;
                var_24 = 909418531872645351;
            }
            arr_12 [i_0] [i_0] = (max(-6736453301307457691, 1830201063));
            arr_13 [i_0] = ((1032917051 ? -1024 : 330977033));
            arr_14 [i_0] [i_0] [i_2] = (1529031031 <= -1519568810);

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_17 [i_0] [i_0] [i_0] [i_4] = ((~((-115801736 ? (-2144322498 == 6736453301307457682) : (arr_11 [i_0] [i_2] [i_2 + 2])))));
                arr_18 [i_0] [i_0] [i_2 + 2] [i_4] = (!(arr_5 [i_2 + 3] [i_2 - 1]));
            }
        }
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            arr_21 [i_0] = (arr_6 [i_0] [i_5 + 1]);
            var_25 = (min((((arr_6 [i_5] [i_5 + 2]) == (~var_9))), (((min((arr_11 [i_0] [i_0] [i_0]), (arr_7 [i_0]))) == 36028797018963967))));
            var_26 = (562949953417216 + 2697298336494163201);
        }
        var_27 ^= (((arr_3 [i_0] [i_0]) < (arr_2 [2] [i_0] [i_0])));
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_28 *= (((1 ? 883883419415236896 : 1)));
        var_29 ^= (arr_22 [0]);
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_30 -= arr_15 [i_7] [i_7] [i_7];
        var_31 = ((max(353341194, var_2)));
        arr_26 [3] [i_7] = ((((((arr_15 [i_7] [i_7] [i_7]) >> var_17))) ? ((((arr_5 [i_7] [1]) >> (((arr_3 [2] [i_7]) - 5931325122922556736))))) : (max(((max(1, -632059839))), (arr_22 [12])))));
    }
    var_32 += var_12;
    var_33 = ((((1 ? (((min(var_16, var_11)))) : ((6053231290556121891 ? 9223372036854775807 : 1))))) ? (var_0 ^ 1) : (max((var_11 && 1), 430214858)));
    #pragma endscop
}
