/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207669
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((unsigned long long int) var_6))))) ? (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_13))))) : (((/* implicit */int) var_14))));
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */long long int) 666421445881487080ULL);
                    var_20 = ((/* implicit */signed char) (~(((int) 17780322627828064536ULL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [4ULL] [i_4] = ((/* implicit */unsigned int) max((max(((-(((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned short)63987)))), (((((/* implicit */_Bool) min((-5894240035148213685LL), (((/* implicit */long long int) arr_3 [17] [i_3]))))) ? (((/* implicit */int) (unsigned short)15518)) : (((/* implicit */int) arr_10 [i_0] [7U] [i_4] [i_3] [i_1] [i_2] [i_1]))))));
                                var_21 = ((/* implicit */unsigned int) arr_11 [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) min((-5169926557414022596LL), (((/* implicit */long long int) arr_2 [i_1] [i_2 + 2]))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */signed char) arr_11 [i_1]);
            }
        } 
    } 
}
