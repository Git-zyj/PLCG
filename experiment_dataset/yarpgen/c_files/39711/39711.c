/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 4589243002705813961;
    var_13 = ((((max(17179738112, 23692))) == (((((min(var_3, -23695))) ? (23692 > var_5) : (var_4 > 4294967295))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = ((((max((!4043800751334976831), (((arr_4 [i_2]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))))) ? (((((var_7 - (arr_7 [i_0] [i_0] [i_0])))) ? (arr_8 [i_0 + 1] [i_0]) : (((((arr_3 [i_0] [i_0] [i_0]) || (arr_4 [i_0]))))))) : (max((max(var_8, (arr_4 [i_0]))), (((4043800751334976831 ? (arr_5 [9]) : (arr_1 [i_0 - 1] [i_0]))))))));
                    var_15 = ((((((!(arr_4 [i_0 - 1]))))) | -4043800751334976829));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_16 = ((-((~(arr_9 [i_3])))));
        var_17 ^= ((~((var_5 >> (-13457 + 13466)))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_18 = (min(var_18, (((~((min((arr_10 [i_4]), (arr_10 [i_4])))))))));
            arr_17 [i_4] [i_5] = (arr_15 [i_5]);
            arr_18 [i_4] [i_5] = ((0 != (arr_12 [i_4] [i_4])));
            var_19 ^= ((!(((((min(242, 181))) & (min(var_6, var_9)))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_20 = ((~(~12481389500109459903)));
            var_21 = (min((!62), (~120)));
        }
        var_22 = (min((((arr_19 [i_4] [i_4]) | var_1)), (~-3537811684316555535)));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_23 *= var_5;
                    arr_26 [15] [i_7] [i_7] [i_4] = (((((129 ^ (arr_22 [i_7] [i_7 - 2])))) ? -var_5 : (max((arr_19 [i_4] [i_4]), (arr_19 [i_4] [i_4])))));
                    var_24 = (max(27952, 32341));
                }
            }
        }
    }
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        arr_29 [i_9] = 4294967290;
        arr_30 [i_9] [i_9] = (arr_15 [i_9]);
    }
    #pragma endscop
}
