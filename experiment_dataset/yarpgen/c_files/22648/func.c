/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22648
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (short)26485)) >= (((/* implicit */int) (short)-17348))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_12 [(unsigned char)14] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3416180208U)) ? (((/* implicit */int) arr_7 [(signed char)7] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)65535))));
                        arr_13 [i_0] [i_0] [i_0 + 1] [i_1] [i_0] [0ULL] = ((/* implicit */_Bool) ((arr_2 [i_1] [i_1] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -6)) != (1727009417U)))))));
                        var_19 *= ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 3] [i_0 + 3] [i_2 - 2] [(_Bool)1] [i_3])) ? (((/* implicit */unsigned long long int) ((long long int) 248202449))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))) | (arr_8 [i_0] [i_1] [(unsigned short)9] [(unsigned short)15]))));
                        var_20 = ((/* implicit */long long int) ((arr_2 [i_0] [i_1] [i_2 + 2]) << (((arr_0 [i_0 + 2] [i_0]) - (3972331326331095670LL)))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */int) ((((_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_1])) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) (signed char)-68)))), (((/* implicit */int) max((((/* implicit */short) arr_11 [i_0 - 1] [i_2] [i_2] [(_Bool)1] [18LL] [i_2])), ((short)5494))))))) : ((-9223372036854775807LL - 1LL))));
                        arr_18 [i_1] [i_1] [(signed char)2] [i_4] = ((/* implicit */signed char) arr_7 [i_0] [i_1] [i_4]);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_0) || ((_Bool)0)))) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-54)) && (((/* implicit */_Bool) 2305843009213661184ULL)))))))) ? (((((/* implicit */_Bool) 536870912)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32351))) : (18ULL))) : (((/* implicit */unsigned long long int) ((((-1917364400) + (2147483647))) << (((((/* implicit */int) (unsigned short)45719)) - (45719))))))));
    var_23 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32766))) * (-23LL))), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (-5904804807645263363LL)))), (((((/* implicit */int) (signed char)103)) >> (((350664152) - (350664147))))))))));
}
