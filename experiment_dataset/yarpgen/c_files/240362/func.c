/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240362
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1847766339)) ? (((/* implicit */unsigned int) -1847766339)) : (1227627677U)));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 1227627692U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))) : (arr_1 [i_0 - 2])));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 0))));
        var_13 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_3 [i_1]) : (var_3))), (((long long int) var_4))))) ? (((/* implicit */int) (short)-25512)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-25512)), ((unsigned short)11932)))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] [i_2] [i_2] [i_6] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_5] [i_2])) ? (((long long int) (!(((/* implicit */_Bool) var_1))))) : (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (arr_9 [i_2] [i_2]))))));
                                arr_19 [i_3] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) arr_9 [15ULL] [15ULL]);
                                arr_20 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_5] [i_3] = arr_16 [i_3] [i_3] [i_3] [i_3];
                                var_14 = ((/* implicit */long long int) arr_15 [i_2] [i_3] [i_4] [3LL] [i_6]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-25526)) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) var_8))))) : (((((/* implicit */_Bool) arr_17 [(short)13] [i_3] [i_4])) ? (var_2) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_3] [i_4] [i_3] = min((((((/* implicit */_Bool) arr_12 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_12 [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (arr_12 [i_2]))) : (min((((/* implicit */long long int) var_5)), (arr_6 [i_2]))))), (((long long int) min((((/* implicit */long long int) var_6)), (arr_12 [i_2 - 2])))));
                    arr_22 [i_3] [i_2] [12U] [i_2] = ((/* implicit */int) (~(((((/* implicit */_Bool) (short)12494)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3471024879U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))))));
}
