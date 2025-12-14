/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212784
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))) : (3535941039U)));
    var_16 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_10)), (((var_10) ? (var_9) : (((/* implicit */unsigned int) -2147483637)))))) | (((((/* implicit */_Bool) min((((/* implicit */long long int) 2302111127U)), (-5688827129026936819LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 16862781222982829642ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_9)))))));
    var_17 = ((/* implicit */unsigned short) 18446744073709551594ULL);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = (~((~(((/* implicit */int) arr_9 [i_3] [i_0 + 2])))));
                                arr_15 [i_0] [10] [i_0] [i_3] [i_3] = ((/* implicit */signed char) var_10);
                                arr_16 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-2005436255), (((((/* implicit */_Bool) 759026256U)) ? (arr_11 [i_0 - 3] [i_0 - 3] [5LL] [i_0] [i_0]) : (((/* implicit */int) (signed char)17))))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 2]))) : (var_13)));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)16907)) ? (((/* implicit */unsigned long long int) 759026272U)) : ((-(21ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 192304941U)) && (((/* implicit */_Bool) (unsigned short)4447))))))))));
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_4 - 2]) + (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 1]))) : (((((/* implicit */int) var_14)) / (arr_0 [i_4 - 1]))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1 + 1] [i_2] [i_0] = ((/* implicit */signed char) (~(max((min((2060753391), (((/* implicit */int) (signed char)17)))), (1)))));
                }
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                {
                    var_19 ^= ((/* implicit */signed char) arr_13 [10] [i_1 + 2] [10]);
                    arr_21 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned short) arr_19 [i_0 + 1] [i_0]))) << (((((/* implicit */int) (unsigned short)60017)) - (60011)))))));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_1 + 2] [i_6] = ((/* implicit */signed char) 1478289941525638854ULL);
                    var_20 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                }
                var_21 = ((/* implicit */short) 18446744073709551594ULL);
            }
        } 
    } 
}
