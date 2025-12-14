/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52650
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) var_11);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [(unsigned char)2] [(unsigned short)8] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) var_9);
                            var_16 = ((/* implicit */unsigned short) ((((unsigned long long int) 18446744073709551602ULL)) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))))));
                            var_17 = var_12;
                            var_18 = ((/* implicit */unsigned long long int) 191340737U);
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) == (((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_12)))))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12766965300397932496ULL))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_14)), (max((var_1), (((/* implicit */long long int) var_6)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_7)))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_5)) : (var_1)))))))));
    var_20 |= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) / (var_10)))), (((unsigned long long int) var_14))))));
}
