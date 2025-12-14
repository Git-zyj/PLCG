/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41084
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
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) arr_2 [i_0 + 4]))));
                    var_12 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (((/* implicit */int) min((arr_1 [i_2]), (arr_4 [i_0] [i_1])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (arr_6 [i_1] [i_1] [i_1] [i_0 - 1]))))) | (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) <= (((/* implicit */unsigned long long int) var_1)))))));
                    var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ^ (((/* implicit */long long int) arr_7 [i_0]))))) ? (((long long int) max((var_0), (((/* implicit */unsigned long long int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (-6LL)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_6)))) : (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3])) / (((/* implicit */int) var_6))))) * ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)8721))) : (6306095356400434796LL)))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_10))));
                    }
                    arr_10 [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_0])), (((int) arr_2 [i_0 - 2]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_2) ? (arr_11 [i_5]) : (arr_11 [i_5])))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_4] [i_5]))))) ? (((/* implicit */int) arr_14 [i_5] [i_4])) : (((/* implicit */int) ((short) var_8))))) : (((((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) (_Bool)1))))) % (((/* implicit */int) ((short) arr_12 [i_5])))))));
                arr_17 [17] [i_4] = ((/* implicit */_Bool) max((((min((var_2), (arr_14 [i_4] [11LL]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_16 [i_4] [i_5])) : (((/* implicit */int) var_6))))) : (max((((/* implicit */long long int) var_10)), (var_1))))), (((((/* implicit */_Bool) 9034257483226948067LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-9009308411420345761LL)))));
            }
        } 
    } 
}
