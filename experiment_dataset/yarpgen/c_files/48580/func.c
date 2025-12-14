/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48580
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
    var_12 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) min((((-742953361855319336LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-62))))), (((/* implicit */long long int) arr_2 [(short)2]))));
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) (signed char)-76))))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0 + 1]))))), (((((/* implicit */_Bool) 3238636327U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))) : (((unsigned long long int) 1056330969U))))));
                var_14 = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 - 3] [i_1 + 1] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_0 + 1]))));
                    var_16 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)37266)))) + (2147483647))) >> ((((~(((/* implicit */int) (signed char)-42)))) - (31)))));
                    var_17 = ((/* implicit */unsigned char) 9223372036854775800LL);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1056330969U)) ? (((/* implicit */unsigned long long int) 3238636327U)) : (17205988536741648332ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_4 [i_4] [(unsigned short)6] [i_3]) : (var_0))) : (((/* implicit */unsigned long long int) 1056330968U))));
            arr_14 [(signed char)5] [i_4] [i_4] = 1056330951U;
        }
        arr_15 [1ULL] [i_3] = ((/* implicit */signed char) ((arr_11 [i_3]) ? (((((/* implicit */_Bool) 236357115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) : (3238636328U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)187)))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (7231647953125837182LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3])))));
    }
}
