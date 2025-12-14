/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232334
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
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) ((unsigned char) ((signed char) (_Bool)1)));
        var_16 = ((/* implicit */unsigned long long int) (+((((_Bool)1) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [18U] [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [(_Bool)0] [i_0]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (9U)))))) : (((unsigned long long int) (_Bool)1))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) (((~(10U))) / (arr_0 [(signed char)11])));
            var_19 = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_1 + 1] [i_1 + 1]));
            var_20 = ((/* implicit */signed char) (unsigned short)65535);
        }
    }
    var_21 = ((/* implicit */short) min(((((+(var_3))) < (min((var_13), (((/* implicit */unsigned int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) || (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) >= (var_8)))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        var_22 &= ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) var_3)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_2]))))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))) : (((arr_0 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)0]))))))) : (((unsigned int) var_9))));
    }
    for (short i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        var_24 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)169)) ? (1152921504606846976ULL) : (17293822569102704640ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [(short)3]))) : (2823275063U))))))) ? ((-((+(arr_10 [(short)14] [i_3]))))) : (((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (arr_0 [i_3 - 2]) : (arr_0 [i_3 + 2]))));
        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) min((arr_2 [i_3 - 2] [i_3]), (((/* implicit */unsigned char) (_Bool)0))))), (var_5))))));
        var_26 = ((unsigned char) ((unsigned long long int) arr_6 [i_3] [i_3 - 1]));
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 21; i_4 += 3) 
    {
        var_27 += ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (4070089637517945833ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) arr_12 [i_4 - 2]))));
        var_28 = ((((/* implicit */_Bool) 4294967281U)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))));
    }
}
