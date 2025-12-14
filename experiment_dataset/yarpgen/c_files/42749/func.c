/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42749
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)4046)))))), (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0]))))));
                                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-1)) & (-539251054))) & (((((/* implicit */int) (short)4096)) % (((/* implicit */int) (signed char)-85))))))) & (((unsigned long long int) ((signed char) (short)30057)))));
                                arr_12 [i_0] [(signed char)0] [i_2] [(unsigned char)10] [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [i_1] [i_2 - 2]), (arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_3])))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) : (var_11))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            arr_19 [(unsigned short)8] [i_1] [(short)7] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((max((1601152615583460669LL), (((/* implicit */long long int) 2147483647)))) >> (((/* implicit */int) max(((signed char)0), ((signed char)-110)))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */int) (unsigned short)65528)) >> (((((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_2] [(short)5] [i_6] [i_0 + 1])) - (112))))) : (((/* implicit */int) ((signed char) arr_6 [(unsigned short)6] [i_1] [(unsigned short)6] [(unsigned short)6]))))))));
                            var_18 -= ((/* implicit */unsigned char) min((((/* implicit */int) arr_18 [i_0] [i_6])), (((((/* implicit */int) (signed char)15)) | (4092)))));
                            var_19 = ((short) (~(((/* implicit */int) ((short) -4092)))));
                            var_20 = (+((+(((/* implicit */int) arr_2 [i_0 + 1] [i_2 + 1] [i_0 + 1])))));
                        }
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned short) max((arr_17 [i_0] [i_1] [i_2 + 1] [i_0] [i_0]), (((/* implicit */short) arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))), (((unsigned short) var_7))));
                            var_22 = arr_2 [i_0] [i_0] [i_0 - 1];
                            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (max((((/* implicit */long long int) ((var_11) & (4092)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (8079656531752139634LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0 + 1] [i_5] [i_7])))))))));
                            var_24 |= ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)-6)))), ((+(((/* implicit */int) arr_5 [i_2 - 1] [7] [i_2] [i_2]))))));
                        }
                        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            var_25 *= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 + 1] [i_0 + 1] [i_0])) < (4091))))));
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [i_2 + 1] [(unsigned char)0] [i_0 + 1] [i_5])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_0 + 1] [i_5])) : (((/* implicit */int) var_14)))) & (((/* implicit */int) ((short) arr_6 [i_2 - 2] [(short)14] [i_0 + 1] [i_5])))));
                        }
                        var_26 = ((/* implicit */int) ((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_7 [i_2 - 1] [i_1] [i_1] [i_0 - 1])))) < (((/* implicit */int) (signed char)-64))));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (5291135556912172306LL))));
}
