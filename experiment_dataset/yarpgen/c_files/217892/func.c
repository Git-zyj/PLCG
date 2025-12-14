/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217892
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_14 ^= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) 8101369908748772738ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_12))) : (((long long int) var_4))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 872767160513122860LL)) : (((var_11) >> (((10345374164960778878ULL) - (10345374164960778852ULL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)26);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        var_15 ^= ((((/* implicit */_Bool) 872767160513122860LL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 6048240798813303513LL)) : (10345374164960778878ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_2 - 1] [i_3]))));
            var_17 = (unsigned char)248;
        }
        var_18 = ((/* implicit */unsigned long long int) arr_6 [i_2] [i_2 - 2]);
        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (8101369908748772738ULL)));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) ((unsigned char) var_7)))))) ? (((/* implicit */unsigned long long int) ((max((arr_13 [(short)3] [19ULL]), (((/* implicit */long long int) var_2)))) >> (((arr_15 [i_4]) - (8021558038455803514ULL)))))) : (arr_15 [i_4]));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                {
                    var_21 = (unsigned char)246;
                    var_22 = ((/* implicit */short) (-(max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) : (var_7)))))));
                }
            } 
        } 
        var_23 *= (-(max((var_5), (((((/* implicit */_Bool) (short)21664)) ? (1341240457771649045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [9LL] [8LL]))))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) 10345374164960778877ULL))));
        arr_23 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4]))));
    }
}
