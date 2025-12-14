/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29334
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_3))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 = ((/* implicit */unsigned long long int) ((((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) var_12)) : (var_11)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] [(unsigned short)2] [(unsigned short)2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_12 [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1]), (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(unsigned short)8])))) + (((/* implicit */int) var_2))));
                                arr_14 [i_0 + 1] [i_1] [i_1] [12LL] [i_3] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32274)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (4204818324443932206ULL)))) ? ((-(arr_10 [i_2] [i_1] [i_2 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 + 1] [i_2] [i_3] [(unsigned char)4] [i_0 + 1])) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_7 [(unsigned short)9] [i_4] [i_4] [(unsigned short)9] [(unsigned short)9] [i_4])))))));
                            }
                        } 
                    } 
                } 
                arr_15 [5LL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_10 [i_1] [i_1] [i_1 - 2]) : (arr_0 [i_0 + 1]))) >> (((3868078001358186907ULL) - (3868078001358186852ULL)))));
                arr_16 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_6 [i_0 + 1] [2ULL] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) 1097364144128LL)) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            {
                var_17 = arr_20 [i_5] [i_5] [i_6];
                arr_24 [i_5] = ((/* implicit */short) arr_18 [i_5]);
            }
        } 
    } 
}
