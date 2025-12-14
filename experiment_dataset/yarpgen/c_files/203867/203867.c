/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 *= (arr_0 [i_0 + 1]);
        var_16 *= max((arr_1 [i_0] [i_0]), 99);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 = 216;
        arr_5 [i_1] [i_1] = (((arr_0 [i_1]) ? (((40 & (!0)))) : (max((arr_4 [i_1]), (arr_4 [i_1])))));
        arr_6 [i_1] [7] = ((((-(arr_4 [i_1]))) >= ((((!((min(var_6, 2063563359)))))))));
        var_18 = ((!((((arr_4 [i_1]) / (arr_4 [i_1]))))));
        arr_7 [i_1] [i_1] = 4061745111;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_19 *= (69 & 12582912);
        arr_10 [1] = (max(((~(arr_1 [i_2] [6]))), (((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_1 [i_2] [i_2])))));
        arr_11 [i_2] = (arr_8 [i_2] [i_2]);
        var_20 = ((((max((arr_0 [i_2]), 2146151313210961230))) | (arr_1 [i_2] [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                var_21 = ((((216 ? 4294967277 : ((var_1 ? var_0 : (arr_16 [i_3])))))) ? (((((arr_12 [15] [i_4 - 1]) ? (arr_12 [i_3] [i_3]) : (arr_16 [1]))) << (((((arr_14 [i_3 + 1]) ? (arr_13 [i_3]) : 1)) - 2860497821)))) : 134217727);
                arr_19 [i_3] [i_4 + 1] = (((((~(arr_13 [i_4 + 1])))) ^ ((~(arr_12 [i_3] [i_3])))));
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
