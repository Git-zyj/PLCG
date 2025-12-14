/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((553 ? (!553) : ((15563 ? 227 : 35978))))) ? ((553 ? var_4 : (!65535))) : ((((!(44684 || 56127)))))));
    var_18 = (((((44684 ? (((max(0, 58)))) : (var_4 + var_5)))) ? (((!(!227)))) : (~16)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((5738778029173162508 ^ (((~((227 ? var_5 : 8316793814747788609)))))));
                arr_8 [i_0] [i_1] = ((-((551 ? (((-552 < (arr_0 [i_0] [i_0])))) : ((max((arr_5 [9] [i_1] [9]), (arr_2 [i_0]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_19 = (((arr_1 [i_0] [i_0]) ? 30462 : (arr_1 [i_1 + 3] [i_2 + 1])));
                    var_20 = var_13;
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_1] [i_3] |= ((239 ? ((((var_9 ? (arr_10 [i_0]) : -4408142373711931016)) >> (var_9 - 95))) : (((((var_3 ^ 4768207940986046863) != (((-(arr_2 [i_1]))))))))));
                    arr_15 [i_3] &= (((((-1314120925145305400 ? ((235 ? 1503298210 : var_16)) : 3192617510))) ? ((((((arr_0 [i_1] [i_1]) ? 0 : (arr_3 [i_0]))) >= 8316793814747788609))) : (1 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
