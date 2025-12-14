/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245887
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
    var_17 = ((/* implicit */_Bool) var_2);
    var_18 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) -777123287);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_20 = (-(((var_5) ? (arr_7 [i_0] [i_1] [i_2] [(signed char)7]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [(unsigned short)11])))));
                        arr_9 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_0 + 2] [i_1]) : (arr_2 [i_0 + 2] [i_0 + 2])));
                        var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_4 [i_3] [(unsigned short)10] [(unsigned short)10])) : (((/* implicit */int) var_14)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((((arr_11 [i_4 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4]))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [i_4]))))));
        var_24 = ((/* implicit */short) (+(((/* implicit */int) (!(arr_10 [i_4]))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_10 [i_4]))));
        var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) -777123287)) - (arr_11 [i_4]))) * (arr_11 [i_4])));
    }
    var_27 = ((/* implicit */_Bool) max((((int) (unsigned char)110)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)37))))) ? (max((-777123287), (((/* implicit */int) var_8)))) : (((/* implicit */int) var_12))))));
}
