/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246806
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)69);
                    var_17 = ((/* implicit */unsigned int) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) arr_5 [(short)12] [i_1] [i_1] [i_1]);
                                arr_15 [i_0] [12] [i_2 - 2] [(unsigned short)0] [i_4] [4ULL] [0ULL] |= ((/* implicit */unsigned char) arr_3 [i_4] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) 5623616929864282769ULL);
    }
    var_20 = ((/* implicit */signed char) (~(var_11)));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((12823127143845268847ULL), (((/* implicit */unsigned long long int) var_6)))))) ? (min((((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)39062))))))));
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((min(((!(((/* implicit */_Bool) var_0)))), ((!((_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (4285280864U)))) ? (((/* implicit */int) min(((unsigned short)9631), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
}
