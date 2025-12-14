/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (min((((((var_3 ? (arr_1 [i_0]) : var_7))) ? (((1 ? 48 : 12444))) : (max(245, (arr_4 [6] [i_1] [i_1]))))), ((((((12444 ? 12420 : var_1))) ? ((192 ^ (arr_1 [i_0]))) : ((min((arr_6 [i_0] [i_0] [i_1] [i_2]), -12453))))))));
                    var_18 ^= (((((((var_9 ? (arr_0 [i_0]) : -12444))) ? ((var_6 ? var_13 : 29)) : ((min(var_9, 1595379708))))) <= (((((min(var_4, (arr_5 [i_0] [i_2])))) ? (var_0 + 16473) : ((13 ? 6628 : var_16)))))));
                    var_19 = (((((6628 <= 1536801518) ? ((var_2 ? 14 : var_13)) : (((15556722013999158330 ? -1595379709 : 242))))) | ((min(((var_3 ? (arr_5 [i_2] [i_0]) : 0)), (((var_10 ? var_5 : -13967))))))));
                    var_20 = (min(var_20, ((min(((((((-20807 ? -126 : 3979369809697557508))) ? ((-12055 ? 12394 : 32764)) : 123))), (((32767 || var_12) | ((0 ? (arr_7 [i_1]) : (arr_4 [i_0] [i_1] [i_2]))))))))));
                    var_21 = (((((((max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_2])))) | (max(-126, var_8))))) | (max((((arr_3 [i_0]) ? (arr_4 [i_0] [i_0 - 1] [i_0]) : -109)), (var_14 & var_13)))));
                }
            }
        }
    }
    var_22 += ((((min(((-124 ? var_7 : -31764)), (((var_4 ? var_11 : var_17)))))) ? ((((var_11 | var_3) & ((12420 ? var_11 : var_11))))) : (((((var_16 ? 0 : var_14))) ? (var_9 != var_7) : (min(var_7, -101))))));
    var_23 = ((((((var_8 ^ var_16) ? ((4797172921352245557 ? 28012 : var_3)) : ((var_4 ? 373 : var_10))))) ? (((min(var_3, 16434445326951585708)) % (((min(-4294, var_10)))))) : ((((var_3 + var_0) ? ((var_16 ? var_8 : 64606)) : (-39 - var_9))))));
    #pragma endscop
}
