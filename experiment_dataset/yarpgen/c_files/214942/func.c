/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214942
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) (unsigned char)3);
                    var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) max((arr_7 [i_0] [i_2] [10ULL]), (((/* implicit */unsigned short) (_Bool)0))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) max((arr_7 [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_11 [2ULL] [i_2]))))));
                                var_19 = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((int) -2147483644))))) ? (max((arr_10 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_8 [4] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned int) (-2147483647 - 1)))));
                    var_20 |= (+(arr_5 [i_2]));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [1] [i_5] = ((/* implicit */unsigned int) ((max((var_15), (((/* implicit */int) arr_1 [i_5])))) != (min((var_11), (min((((/* implicit */int) (_Bool)0)), (-2147483642)))))));
        var_21 = ((/* implicit */unsigned char) (+(-2147483646)));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (-2147483644))))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) < (((/* implicit */int) arr_13 [i_6] [i_6] [i_6])))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_13 [i_6] [i_6] [i_6]))))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (arr_6 [9U] [i_6] [i_6] [(unsigned short)3])))) ? (arr_6 [i_6] [i_6] [i_6] [15]) : (min((((/* implicit */int) arr_7 [i_6] [i_6] [i_6])), (arr_12 [i_6] [i_6] [(_Bool)1] [i_6])))));
    }
    var_24 = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned int) var_12)) : (max((((/* implicit */unsigned int) var_3)), (min((var_8), (((/* implicit */unsigned int) 2147483643))))))));
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((max((var_8), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) -1466167479)))))));
}
