/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= -3285553545182564282;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] = (arr_1 [i_1 + 1]);
                arr_6 [23] = (((min(-0, (((!(arr_0 [1])))))) - (((-(~9925))))));
                var_19 &= var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_20 ^= ((((((31 ? (arr_0 [i_2]) : 16046713506161532717)) ^ (min((arr_12 [13] [i_3]), (arr_11 [i_2])))))) ? ((255 ? (arr_1 [i_3 + 2]) : var_4)) : (((((var_2 + 1) || (arr_11 [i_2]))))));
                var_21 *= ((((min((((arr_3 [i_3 - 1]) ? -5397748132017899432 : (arr_10 [i_2] [i_2]))), (arr_7 [i_3 + 1])))) ? -9261 : var_4));
            }
        }
    }
    #pragma endscop
}
