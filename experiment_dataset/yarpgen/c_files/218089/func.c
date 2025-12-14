/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218089
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
    var_12 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((signed char) ((unsigned char) arr_1 [i_0] [i_1])));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
                    var_14 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) (_Bool)1))))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (signed char)17)))) - (29295)))))) : (((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_0])) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */int) (_Bool)1))))) >> (((((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (signed char)17)))) - (29295))) + (42546))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) var_9);
                }
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    var_15 *= ((/* implicit */long long int) (signed char)-112);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_3] [i_4] [i_5] |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-62)))) ? (var_6) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)44442)))))));
                                arr_16 [i_4] [i_0] [i_1] [i_3] [i_4] [i_5] |= ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned char)108)) ^ (((/* implicit */int) (!((_Bool)0)))))));
                                var_16 = ((/* implicit */short) ((_Bool) (signed char)15));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5] [i_5 - 2] = ((/* implicit */unsigned short) ((_Bool) var_4));
                            }
                        } 
                    } 
                }
                for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_6]);
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) var_2))));
                        arr_28 [i_0] [i_1] [i_1] [i_0] [i_6] [i_8] = ((((/* implicit */_Bool) (+(var_6)))) ? ((-(((/* implicit */int) (signed char)61)))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_1)))), (((_Bool) (short)32767))))));
                        var_17 = ((/* implicit */int) max((var_17), (1538691591)));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_34 [i_0] [i_0] [i_6] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((int) 134217727));
                                var_18 = ((/* implicit */unsigned long long int) ((signed char) min((arr_25 [i_10] [i_9]), (67076096))));
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_2);
                }
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    arr_38 [i_11] [i_11] [i_0] &= ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_11]);
                    arr_39 [i_1] [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_1] [i_1] [i_0] [i_0]))));
                }
                var_20 *= ((/* implicit */unsigned short) arr_25 [i_0] [i_0]);
            }
        } 
    } 
}
