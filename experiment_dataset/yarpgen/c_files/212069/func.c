/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212069
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_1])))));
                arr_6 [i_0] |= ((/* implicit */int) arr_3 [i_0]);
                var_21 = min((9U), (((/* implicit */unsigned int) ((_Bool) ((arr_4 [(_Bool)1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) : (var_12))))));
                arr_7 [0ULL] [i_1] = ((/* implicit */signed char) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0])))) << (((arr_0 [i_0] [i_1]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-18)) & (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) 1288849823)), (var_11))))) / (((/* implicit */long long int) 193114597)));
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((((/* implicit */_Bool) (short)9567)) ? (((193114599) << (((((/* implicit */int) (unsigned char)39)) - (37))))) : (((193114625) << (((((/* implicit */int) (unsigned char)255)) - (254))))))) : (min((((((/* implicit */int) (_Bool)0)) + (193114597))), (((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_2])))))));
        arr_11 [(short)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_8 [i_2] [i_2])))));
        var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)-12116), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) % (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-63)) : (-193114575))))) : ((~(((/* implicit */int) (unsigned short)45713))))));
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) 3234139031U))));
    }
}
