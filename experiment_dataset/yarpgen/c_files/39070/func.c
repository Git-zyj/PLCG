/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39070
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_3)), (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_10 [i_0] [i_1] [i_0] [i_0] [i_4])))))));
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1] [i_3]))))), ((~(arr_7 [i_3] [i_2 - 3] [i_3] [i_3]))))))))));
                                var_13 = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((var_7) ? (arr_13 [(short)15] [i_0] [i_2 + 1] [i_1] [7U] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (arr_11 [i_0] [8ULL] [(unsigned short)0] [i_0]) : (3840U)));
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max(((+((((_Bool)1) ? (((/* implicit */unsigned long long int) var_8)) : (arr_12 [i_0] [i_0] [i_0] [12LL] [(unsigned short)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 + 1] [i_2 - 2] [i_0])) || (((/* implicit */_Bool) arr_11 [i_1] [i_2 + 2] [i_2 - 2] [i_0])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10258)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))) : (max((((/* implicit */unsigned int) (unsigned short)65196)), (var_5))))), (((((unsigned int) (unsigned short)36319)) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
}
