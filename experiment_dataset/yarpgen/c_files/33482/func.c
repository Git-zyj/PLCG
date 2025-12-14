/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33482
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
    var_17 = ((/* implicit */unsigned short) (~((~(min((((/* implicit */int) var_0)), (var_11)))))));
    var_18 = ((/* implicit */unsigned char) var_15);
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [14])) ? (arr_0 [13]) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            arr_7 [5] [i_2] = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1 + 3])))));
            var_22 += ((/* implicit */long long int) ((unsigned int) ((((arr_2 [i_2] [i_1]) + (2147483647))) >> (((arr_5 [i_1] [(unsigned short)4] [(unsigned short)3]) - (765650444))))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_4 [(short)11]))));
        }
        var_24 = ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -6895811334289534838LL)) && (((/* implicit */_Bool) arr_3 [i_1 - 1] [(unsigned short)0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9187084784293499327LL)) ? (((/* implicit */int) (short)15593)) : (((/* implicit */int) arr_4 [i_1]))))) ? (arr_2 [i_1] [6LL]) : (((/* implicit */int) max((var_15), ((signed char)-79)))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)65530))));
        var_26 *= ((/* implicit */unsigned short) (+(arr_2 [i_3 + 2] [i_3 + 1])));
        var_27 += ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-90))));
    }
}
