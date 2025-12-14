/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51585
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
    var_13 = ((/* implicit */unsigned char) var_0);
    var_14 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-6280)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (4294967295U)))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)6280)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6280))) : (18446744073709551590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    var_15 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) (short)6272)), (432345564227567616ULL)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) arr_0 [i_1 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */short) arr_5 [20] [i_1] [i_3 - 1] [i_4 + 1]);
                                arr_13 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_2] [16ULL])) : (((/* implicit */int) var_9)))))), (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
