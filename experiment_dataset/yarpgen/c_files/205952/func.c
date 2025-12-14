/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205952
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_2] [i_2] [i_2] [i_1] [i_0] &= ((/* implicit */long long int) ((max((((((/* implicit */int) (unsigned char)216)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_4])))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_4] [i_0])), (2470477950528270850ULL)))) ? ((-(12453056470548453187ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15976266123181280765ULL)))))))) - (5993687603161098421ULL)))));
                                var_14 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_10))))), ((-(((/* implicit */int) ((signed char) 15976266123181280765ULL)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_0] [i_1] [i_1] [i_2]))), (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)18552)), ((unsigned short)28795)))), (arr_2 [i_2] [i_2])))));
                    var_16 -= ((/* implicit */short) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) / (2470477950528270861ULL))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2]))) * (((arr_3 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_0] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (signed char)4)))) ? (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_12))))) : (((/* implicit */int) var_12)))) < (((/* implicit */int) ((((/* implicit */_Bool) (short)18560)) || (((/* implicit */_Bool) -2151252140574834170LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                var_18 += ((/* implicit */long long int) (((+(arr_12 [i_5] [i_6]))) / (((/* implicit */unsigned long long int) ((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))))))));
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                arr_24 [i_5] [i_5] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) > (((((/* implicit */_Bool) arr_12 [i_6] [i_9])) ? (((((/* implicit */_Bool) (unsigned short)36747)) ? (2470477950528270850ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11]))) == (arr_12 [i_5] [i_5])))))))));
                                arr_25 [i_9] [i_9] [i_7] [i_8] [i_8] [(signed char)0] [(signed char)0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_7] [i_8] [(_Bool)1] [i_6] [i_5]))))) % (((/* implicit */int) min((arr_14 [i_5]), (arr_14 [i_5]))))));
                                var_19 -= ((((arr_21 [i_5] [(signed char)11] [i_6] [i_8] [i_8]) > (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_5] [i_7] [i_5])) * (((/* implicit */int) arr_23 [i_8] [i_8]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
