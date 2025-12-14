/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222433
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
    var_13 ^= ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 + 3] [i_4])) && (((/* implicit */_Bool) -1983179335)))))) : (max((((/* implicit */unsigned long long int) (-2147483647 - 1))), (arr_7 [i_0] [i_2 - 2] [i_1]))))))));
                                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */long long int) (~(min((arr_6 [i_0] [i_2] [(short)1] [i_4]), (((/* implicit */unsigned int) var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 - 1] [i_2] [i_0] [i_4])) ? (var_10) : (((/* implicit */unsigned long long int) arr_4 [i_4] [i_2 + 2]))))) ? (((((/* implicit */_Bool) (signed char)55)) ? (-1840505506219615089LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (max((var_10), (((/* implicit */unsigned long long int) arr_11 [i_2 - 1] [i_2 - 2] [i_1] [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_0] [i_2 + 1] [i_0] [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_2 - 1])) ? (var_6) : (arr_5 [i_2 - 1]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_17 [(short)6] [i_1] [3ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 237765013)) ? (((/* implicit */unsigned long long int) 1983179344)) : (18446744073709551612ULL)));
                    }
                    arr_18 [i_0] [i_1] [9U] = ((/* implicit */short) var_11);
                }
            } 
        } 
    } 
}
