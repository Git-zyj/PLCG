/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((var_9 ? var_8 : var_8))) ? (((((min(-1, 4183407309242564604))) || var_1))) : 48);
    var_11 -= (((~((var_0 ? var_1 : var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_12 = ((((arr_1 [i_1]) ? 0 : 1)));
        var_13 *= (((((254 ? var_1 : -28473)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((arr_7 [i_2] [i_2]) ? 0 : (((arr_7 [i_2] [i_2]) ? 78 : (arr_6 [i_2] [i_2])))));
        arr_9 [i_2] = 573003459768211550;
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_14 = (max(var_14, -1037860650));
            var_15 += -1154009084;
            arr_14 [i_3] [i_4] = ((((arr_11 [i_3] [i_4]) && (-127 - 1))));
        }
        arr_15 [i_3] [i_3] = ((arr_13 [i_3]) & -1);
        var_16 = (min(var_16, ((max((((((var_0 ? 264823960 : (arr_13 [i_3])))) ? ((~(arr_13 [4]))) : ((var_4 / (arr_11 [i_3] [i_3]))))), ((((arr_13 [i_3]) > (arr_12 [i_3] [i_3] [i_3])))))))));
    }
    var_17 = -1037860657;
    #pragma endscop
}
