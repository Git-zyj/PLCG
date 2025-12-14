/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((!((((arr_1 [i_0]) ^ var_10)))));
        arr_3 [i_0] = ((-(arr_2 [i_0])));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_14 -= ((((((arr_5 [i_1]) ? 2762592208341203910 : (arr_5 [11])))) ? (((((arr_0 [i_1]) >= (-2762592208341203911 && var_4))))) : 18446744073709551602));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_3] = ((((4097451162 ^ (arr_7 [i_2] [i_2] [i_1]))) >> (39148 >= 2762592208341203909)));
                    arr_13 [i_1] = (min(((min(var_9, (!var_9)))), var_6));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_15 += ((+(max(((226 ? (arr_4 [i_4] [i_4]) : -2762592208341203932)), (max((arr_14 [4]), -2762592208341203885))))));
        var_16 = (((9223372036854775807 != 12627790618638012144) ? (~-4414828320759324028) : (arr_10 [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}
