/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50119
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_1))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), ((((+(min((arr_5 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_3])))))) | (min((((/* implicit */unsigned long long int) 4219589330U)), (((unsigned long long int) var_0))))))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) arr_2 [i_0] [i_4 - 2] [i_4 - 2]);
                        }
                        var_20 = (signed char)64;
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_21 *= ((/* implicit */signed char) (((+(arr_4 [i_1] [i_1] [i_1]))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) | (min((arr_12 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_4))))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                        var_22 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                        var_23 &= ((/* implicit */unsigned int) ((unsigned long long int) max((arr_12 [i_2] [i_5]), (arr_12 [i_0] [i_2]))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33963)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56566)))))) ? (min((((((/* implicit */unsigned long long int) 4219589330U)) - (arr_12 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]))))) : (var_10))))));
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((var_10) * (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]))));
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 2) 
        {
            {
                arr_22 [i_6] = ((/* implicit */unsigned short) (+(((((var_1) ? (((/* implicit */int) arr_19 [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_6] [i_7])))) - (((/* implicit */int) ((arr_16 [i_6 - 1] [i_7]) >= (13011881265883091610ULL))))))));
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((max((131056U), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_8] [i_7] [i_8] [i_7]))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20))))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                            {
                                arr_32 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? ((-(4219589330U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 342188712241160578ULL)) && (((/* implicit */_Bool) 0U))))))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((arr_25 [i_6 - 1]) * (arr_23 [i_6] [i_7] [i_7] [i_10])))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) min((2471457077076526474ULL), (((/* implicit */unsigned long long int) 4294967295U)))))));
                            }
                            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                            {
                                var_28 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)20))))), (1152917106560335872ULL)));
                                var_29 = min((((/* implicit */unsigned long long int) arr_20 [i_6 + 1])), (((((/* implicit */_Bool) (unsigned short)65515)) ? (16015423465265258794ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37900))))));
                                arr_36 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_8] [i_6 + 1] [i_6 - 2] &= arr_21 [i_6] [i_7 + 2] [i_11];
                            }
                            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 3) 
                            {
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_3))));
                                var_31 = ((/* implicit */_Bool) var_12);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
