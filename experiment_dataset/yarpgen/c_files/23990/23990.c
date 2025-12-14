/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_18, (var_13 || var_9)))) ? ((var_17 ? (min(var_9, var_17)) : ((-3332315205508563322 ? 211106232532992 : 0)))) : ((((var_12 > (min(16, 16779603980269677571)))))));
    var_20 = (((((var_6 && 2147483647) ? (!7752429706263257015) : ((211106232532992 ? var_4 : (-2147483647 - 1))))) % ((((((min(3332315205508563321, 69))) || ((min(var_7, 3428191400656370724)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max((arr_0 [i_1]), (((arr_2 [i_0] [i_1 + 1]) ? (arr_2 [i_0] [i_1 + 1]) : (arr_0 [i_0])))))) ? (min((~4792496272436838270), (((!(arr_4 [i_1] [i_1] [i_1])))))) : 166));
                var_21 += (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    arr_16 [i_2] [i_2] [i_2] = (arr_12 [i_2]);
                    var_22 -= (min(((((((arr_6 [i_2]) ? 2941904488 : (arr_15 [i_4] [i_3] [18])))) ? (((arr_11 [i_2]) ^ (arr_10 [i_3] [i_2 - 1]))) : (arr_11 [i_4]))), (min((arr_11 [i_2]), ((min((arr_14 [i_2] [i_3]), (arr_9 [i_4] [i_4]))))))));
                }
                arr_17 [2] [2] = ((((min((((15745075795949009579 ? (arr_8 [i_2 - 1]) : (arr_15 [i_2] [i_2 + 1] [i_2])))), -9057738692961956142))) ? ((~((min((arr_9 [i_2] [i_2 - 1]), 65517))))) : (arr_14 [i_2 + 1] [i_2])));
                var_23 = (((arr_13 [i_2 + 1] [i_2] [i_2] [i_2 + 1]) || 9146792854121541086));
                arr_18 [i_2 - 1] = ((((10170729493227483427 ? (~8) : 2701668277760542036)) < ((((arr_10 [i_2] [i_3]) ? ((110 ? 255 : (arr_7 [i_3]))) : -2163317464938060600)))));
            }
        }
    }
    #pragma endscop
}
