/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((((1 ? var_8 : var_4))) ? (((var_5 ? var_1 : 16769024))) : ((1 ? var_4 : (arr_3 [i_1])))))) ? (((((1 ? 144114638320041984 : 13345))) ? ((((arr_5 [i_1 - 1] [i_1] [i_0]) ? 1737119392 : 52190))) : ((63 ? 17819938883939706464 : 87)))) : (((((262016 ? 1722448347 : 2043922119))) ? (((13341 ? (arr_5 [i_1] [i_1] [i_0]) : (arr_5 [11] [i_1] [i_0])))) : ((2194728288256 ? (arr_1 [i_1]) : var_9))))));
                arr_7 [i_1] [i_1] [i_0] = ((((((((13341 ? (arr_3 [i_0]) : -7008784600164637125))) ? ((2572518954 ? 16384 : 225197559)) : (((arr_2 [i_1 + 1]) ? 1073217536 : var_8))))) ? (((((8 ? 0 : 28672))) ? (((57867 ? -67108864 : 245))) : (((arr_5 [i_0] [i_1] [i_1]) ? 2199021158400 : 1816906324)))) : (((((94 ? (arr_1 [i_0]) : (arr_4 [i_1] [i_0] [i_1 + 1])))) ? ((134217696 ? 80078954 : 7829304928162423301)) : ((((arr_4 [i_1] [i_1] [i_1 + 1]) ? (arr_3 [i_0]) : (arr_1 [i_0]))))))));
            }
        }
    }
    var_10 = ((80078930 ? -26057 : 4096));
    var_11 = (((((((var_4 ? 7776360693681803356 : var_8))) ? (((var_2 ? 2321293193 : var_2))) : ((32 ? var_3 : var_4))))) ? ((((((var_2 ? var_3 : var_9))) ? ((var_7 ? var_0 : -80078942)) : ((var_5 ? var_8 : 14))))) : (((((var_9 ? var_5 : var_8))) ? ((-2076467314 ? var_4 : var_4)) : (((var_5 ? -2076467314 : var_1))))));
    #pragma endscop
}
