/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199112
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
    var_12 = ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) min((var_4), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1673456379U)) : (arr_5 [(unsigned short)11] [i_1] [i_2 + 1] [i_2 + 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2621510916U)) ? (2621510917U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15831))))))))) ? ((+(1099511627775ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) ((unsigned short) var_0))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_11 [(_Bool)1] [(short)2] [i_2] [i_1] [i_2] [i_0 + 2] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (arr_2 [i_4] [i_0])))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_3] [i_2] [i_2] [(unsigned short)3] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1203787539967698260ULL)))))))))));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1 + 1] [i_2] [i_2] [i_0 + 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */int) min(((signed char)100), ((signed char)-20)))))))) : (min((((/* implicit */unsigned long long int) 1673456379U)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_2 + 1])) : (arr_3 [i_1])))))));
                                var_15 = ((/* implicit */unsigned long long int) 1226564491U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
