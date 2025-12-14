/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29075
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_15 += ((/* implicit */short) ((long long int) arr_0 [i_0]));
        var_16 = ((/* implicit */_Bool) ((unsigned long long int) min((max((((/* implicit */long long int) var_10)), (-4887811597257762473LL))), (((/* implicit */long long int) (~(0U)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) min((-4887811597257762461LL), (((/* implicit */long long int) arr_3 [i_1]))))) ? ((+(((/* implicit */int) (unsigned char)240)))) : (((/* implicit */int) arr_4 [i_1] [i_1])))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_1 [12LL] [i_1])))) ? (((/* implicit */int) ((short) arr_1 [i_1] [i_1]))) : ((-(((/* implicit */int) (unsigned char)26))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            for (unsigned short i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_19 = max((-4887811597257762461LL), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_4] [i_5])) : (arr_17 [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2])))))))));
                                var_20 = ((/* implicit */short) (+((~(((long long int) arr_17 [i_2] [i_2] [i_4] [i_2] [i_6]))))));
                            }
                        } 
                    } 
                    arr_18 [i_2 + 1] [i_3] [i_4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4 - 1])) ? ((+(arr_7 [i_2 + 1]))) : (((/* implicit */long long int) max(((~(var_1))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)34)), ((short)32742)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_7])) ? (max((var_4), (((/* implicit */long long int) arr_19 [i_7])))) : (arr_20 [i_7]))), (var_4)));
        var_22 = (~((~(arr_20 [i_7]))));
    }
}
