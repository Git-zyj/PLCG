/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225200
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) var_14);
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (arr_10 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [7LL]);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [(unsigned char)21] [i_0])))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [(signed char)6]))) : (var_11)))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8529154808859430139LL)) ? (2259083639943938459LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8532)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (_Bool)1))))))))));
        }
        for (unsigned short i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_5 + 1] [6])))))));
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)56998)) | (((/* implicit */int) arr_2 [i_5 - 1] [i_5]))));
        }
    }
    var_26 = ((/* implicit */short) var_0);
}
