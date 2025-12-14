/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249560
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((var_1) / (1097651134))) : (arr_1 [i_0]))) < (((/* implicit */int) ((-1097651134) < ((~(((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 6; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */signed char) ((((((/* implicit */long long int) var_1)) < (((var_7) / (((/* implicit */long long int) var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1097651135)) ? (var_5) : (-123832630)))) ? (((/* implicit */unsigned long long int) max((var_2), (var_1)))) : (((2636417263442020741ULL) * (((/* implicit */unsigned long long int) -1097651135)))))) : (((/* implicit */unsigned long long int) 1097651134))));
                                var_15 = ((/* implicit */signed char) var_11);
                                var_16 *= var_12;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)162)), (var_1)))) ? (((/* implicit */int) (signed char)0)) : (((var_1) / (var_2)))))) : (((unsigned int) ((((/* implicit */_Bool) 1097651134)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) var_10)))))));
    var_18 = ((/* implicit */long long int) min(((!(((((/* implicit */int) (unsigned char)64)) < (var_6))))), (((var_2) < (max((var_2), (((/* implicit */int) var_4))))))));
    var_19 = ((/* implicit */int) var_3);
}
