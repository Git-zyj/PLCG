/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 *= (min((((9223372036854775807 && 2147483647) / ((var_4 ? -83 : 10827212271095083484)))), ((max((arr_2 [i_0] [i_1]), (max(var_3, (arr_1 [i_1]))))))));
                var_14 |= (max(510, 255));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_15 = ((((((((var_12 ? (arr_9 [i_2] [i_2] [18]) : (arr_6 [i_3] [i_2])))) & (max(3113869387627183034, 57046))))) ? (max(5705745734894735414, ((1455873917 ? (-2147483647 - 1) : 11544848439945980005)))) : (((((max(var_11, (arr_7 [i_2])))) ? (((arr_9 [i_2] [i_2] [i_2]) ? var_0 : 172343941499297247)) : (((65522 ? 127 : var_2))))))));
                arr_10 [i_2] = ((((((((arr_6 [i_3] [i_2]) && var_12))) != ((min((arr_6 [i_2] [i_3]), 7943))))) ? (max(-15645136139420098223, ((31 ? 78215776293554279 : 8627813883810330709)))) : (((((min((arr_6 [i_2] [i_3]), (arr_8 [i_2] [i_3])))) ? (~var_3) : ((max(1797011746, 1))))))));
                var_16 = ((144115188075855871 ? 35727 : -15983));
                arr_11 [i_3] [i_2] [i_2] = (max(((max((((arr_9 [i_3] [i_2] [i_2]) ? var_8 : 14796)), ((max(1, 1)))))), (((((0 ? 3770115661 : 522682229))) ? -2305843009213693952 : ((var_6 ? 1 : var_7))))));
            }
        }
    }
    var_17 = (!1197653715);
    #pragma endscop
}
