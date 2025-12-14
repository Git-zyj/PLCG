/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195977
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
    var_18 = ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_5)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [i_1] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)51785)) ? ((((_Bool)1) ? (311335800855755187ULL) : (18135408272853796428ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46283))))), (((/* implicit */unsigned long long int) max((var_15), (var_15))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (var_3)))) ? (((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((((/* implicit */long long int) var_4)) - (var_2)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (max((311335800855755188ULL), (((/* implicit */unsigned long long int) (unsigned short)19265))))));
                                var_20 = ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((unsigned long long int) (~(var_14)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_13)), (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) * (var_7))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (min((((/* implicit */unsigned long long int) var_2)), (var_6))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (var_2))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min(((-((-(var_2))))), (((/* implicit */long long int) ((unsigned char) max((var_16), (var_11))))))))));
                }
            } 
        } 
    } 
}
