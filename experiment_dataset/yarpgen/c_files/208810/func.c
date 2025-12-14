/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208810
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-88)))))))));
        var_12 = ((/* implicit */unsigned short) -1759958680163682702LL);
        var_13 ^= ((/* implicit */unsigned int) ((arr_1 [i_0 + 1]) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (min((var_3), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((var_4) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))))), (min((var_7), (((/* implicit */long long int) var_5)))))))));
    /* LoopNest 3 */
    for (unsigned short i_1 = 4; i_1 < 23; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_15 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))))) ? (arr_7 [i_1 + 1] [8] [i_1 + 1]) : ((~(2196321340995641265LL))))));
                    arr_10 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-24))));
                    var_16 = ((/* implicit */_Bool) min((((signed char) max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_5 [i_1 + 2])))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [24ULL] [(signed char)23] [(unsigned short)15])) && (((/* implicit */_Bool) min((arr_2 [i_1 + 2]), (((/* implicit */unsigned long long int) arr_3 [(signed char)1]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? (arr_6 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) (~(arr_8 [(unsigned short)2] [i_4]))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] [i_5] |= ((/* implicit */long long int) var_3);
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_5]))));
        var_19 = ((/* implicit */int) (+(((-2196321340995641293LL) / (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
        arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_12 [(unsigned short)6] [(unsigned short)6])) & (arr_7 [(signed char)2] [(signed char)2] [(signed char)2])))) ? (((/* implicit */unsigned long long int) arr_4 [i_5])) : (arr_5 [i_5])));
    }
}
