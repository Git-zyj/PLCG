/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239409
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (arr_0 [(unsigned char)5] [i_0])))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_0)), (arr_0 [i_0] [i_0]))) - ((~(463062434745706LL)))))) - (((((/* implicit */unsigned long long int) ((long long int) var_13))) & (max((((/* implicit */unsigned long long int) 463062434745705LL)), (arr_1 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-21764))) | (463062434745706LL)));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (463062434745718LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) * (((((/* implicit */_Bool) -463062434745706LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 427651571979437934LL)) ? (var_1) : (arr_0 [i_1] [i_1])))) ? (((/* implicit */int) max(((unsigned short)31808), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) arr_4 [i_1]))))) : (((unsigned long long int) arr_2 [i_1] [i_1]))));
        var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) << (((var_7) - (5630715827056872632LL)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [i_1]))))) : ((((~(arr_0 [i_1] [i_1]))) - (((((/* implicit */_Bool) arr_0 [i_1] [10LL])) ? (-463062434745706LL) : (var_12)))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned short) arr_6 [i_2]));
        var_20 = ((/* implicit */long long int) (~(arr_6 [i_2])));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                arr_13 [i_4] [i_4] = arr_9 [i_4] [i_3];
                var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((arr_12 [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3])) && (((/* implicit */_Bool) (unsigned short)31808)))))))), (((((/* implicit */_Bool) max((arr_11 [i_3] [i_3]), (arr_11 [i_3] [i_3])))) ? (arr_9 [i_4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_4])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (144115179485921280LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */int) var_8)) % (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) 4288363379247103026ULL)) ? (-1920745105) : (-399216577)))))) : (((((/* implicit */_Bool) 2796701985121716386LL)) ? (-463062434745690LL) : (-7091912778985475790LL)))));
}
