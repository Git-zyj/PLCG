/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225349
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) max((((/* implicit */int) max((var_3), ((unsigned short)6)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [14ULL] [14ULL] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) max((7U), (((/* implicit */unsigned int) var_15)))))))));
        arr_4 [15LL] = ((((/* implicit */_Bool) min((((long long int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) 255U))))))) ? (((/* implicit */unsigned long long int) ((arr_1 [11U] [i_0]) / (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))))) : (((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) * (var_13))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (+(arr_5 [i_1])));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 22; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_7))))) ^ (((((/* implicit */_Bool) 3231334428U)) ? (((/* implicit */unsigned long long int) ((6913855120782636314LL) - (((/* implicit */long long int) var_8))))) : (arr_6 [i_1] [i_3])))));
                                var_19 -= ((/* implicit */unsigned int) ((unsigned short) max((((227U) * (2750190070U))), (131071U))));
                                arr_19 [i_5] [4U] [i_1] [i_3] [i_1] [i_2 + 1] [16U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [(unsigned short)20] [19LL])) ? (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_4] [i_3] [i_1])))))) : (((/* implicit */unsigned long long int) (-(255U))))));
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [17LL] [i_2 + 1] [i_1])) ^ (((/* implicit */int) ((unsigned short) arr_13 [19ULL])))))) ? (((((/* implicit */_Bool) 7736585479563260963LL)) ? (max((arr_6 [i_1] [i_1]), (arr_7 [i_1] [i_1]))) : (var_13))) : (((((/* implicit */_Bool) 8192820167965642677ULL)) ? ((~(arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_17 [i_1] [2ULL] [i_1] [i_1] [i_1])))))) ? ((+((-(8149949378939010998ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_1] [i_3] [i_1] [7U]))))));
                }
            } 
        } 
        arr_20 [i_1] = var_13;
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 8; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) var_10);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6 + 1] [i_6] [i_6] [20U]))) * (var_4)))));
                    arr_31 [i_6] [i_7] [5U] [(unsigned short)1] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_6 - 2] [i_6 - 2] [i_8] [3ULL]))));
                    var_23 = ((/* implicit */long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                var_24 += (-(arr_7 [i_6 - 2] [i_6 + 3]));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((unsigned long long int) var_6))));
                                arr_37 [1LL] [i_9] [6U] [i_9] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_0 [i_6 + 3]))));
                                var_26 = ((unsigned short) 2587563891U);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_28 [i_6] [(unsigned short)4] [i_6 + 3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))));
        var_27 -= ((/* implicit */unsigned int) ((long long int) arr_26 [i_6] [i_6 + 1]));
    }
    var_28 = ((unsigned long long int) min((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) var_11))));
}
