/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40977
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 89578637))))), (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) var_12)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(_Bool)1] [12] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) == (var_2)))) / (((/* implicit */int) var_10))))) ? (((long long int) min((((/* implicit */long long int) var_3)), (var_2)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_6))))) / (((unsigned int) var_3))))));
                                var_14 = ((/* implicit */unsigned long long int) min((max(((!(((/* implicit */_Bool) var_1)))), (((var_0) <= (((/* implicit */int) var_4)))))), (((((/* implicit */long long int) var_0)) == (((long long int) var_4))))));
                                var_15 = var_4;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((long long int) max((89578637), (-89578638)))))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_0)) * (var_12)))) : ((~(var_1))))) * (((/* implicit */long long int) min((((/* implicit */int) max((var_8), (var_10)))), ((~(var_11))))))));
}
