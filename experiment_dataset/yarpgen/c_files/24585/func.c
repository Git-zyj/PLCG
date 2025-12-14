/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24585
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] &= ((/* implicit */long long int) (~(min((-695475059), (((112083823) + (((/* implicit */int) (unsigned short)12854))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] = max((((/* implicit */int) arr_7 [9U] [i_1 - 1] [i_1] [i_1])), (((((/* implicit */_Bool) 695475053)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (signed char)102)))));
                                var_15 += ((/* implicit */signed char) (+(((/* implicit */int) ((1581839051128477392LL) != (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 2] [i_1 + 3]))))))));
                                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_2])), (var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)63)) ? (2147483637) : (((/* implicit */int) (short)19663))))) : (1376882052U)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_14))))) : (((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 += max((((/* implicit */long long int) ((((/* implicit */int) var_14)) < ((-(((/* implicit */int) (_Bool)0))))))), (min((((/* implicit */long long int) (short)32763)), (1581839051128477392LL))));
}
