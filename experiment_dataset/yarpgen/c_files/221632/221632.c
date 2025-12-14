/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 -= ((((((arr_1 [i_0]) && 2537565498)))) / (8260 | 2193150736107662318));
        arr_2 [i_0] = (((97 ^ 17830) ^ ((var_5 << (((arr_0 [i_0]) - 5770850423326854390))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_12 += (2193150736107662318 - 48551);
        var_13 ^= ((((((((var_10 | (arr_4 [i_1])))) && (((2193150736107662311 ^ (arr_4 [i_1]))))))) ^ ((((((235 << (1925 - 1917)))) >= (((arr_4 [i_1]) & (arr_3 [i_1]))))))));
        var_14 = (((((((65522 != 11371) && (53 << 1))))) + (((((arr_3 [i_1]) % var_7)) - (8265 ^ var_5)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_8 [1] [i_2] = (((((((arr_3 [i_2]) / var_6)) / (37300 + 2537565500))) * ((((((arr_5 [i_2]) + 1)) * (((var_10 / (arr_1 [i_2])))))))));
        arr_9 [i_2] &= (-2193150736107662312 + 33654);
    }
    var_15 = (((((((var_10 || 1597108374) < (1803533523895420822 | 250))))) + (((var_1 << var_7) & ((((var_0 + 2147483647) << (((var_3 + 111) - 30)))))))));
    var_16 -= ((((((2360167784 <= -4589309686753511186) || (1 + 65520)))) >> (106 - 75)));
    var_17 &= (-3 + -3);
    #pragma endscop
}
