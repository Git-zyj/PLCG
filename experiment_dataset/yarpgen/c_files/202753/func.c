/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202753
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_3)) > (((/* implicit */int) arr_5 [(short)15] [21LL] [i_2]))))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_9 [(signed char)15] [(unsigned short)21] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1 - 3]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_1);
    var_13 = ((/* implicit */long long int) max(((unsigned char)61), (((/* implicit */unsigned char) (signed char)7))));
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (arr_3 [i_3] [(unsigned char)20] [(_Bool)1])))), (var_5))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2541800726397483223LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47871))) : (2541800726397483214LL)))));
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_8)))));
                }
                /* LoopSeq 2 */
                for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    var_16 ^= max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) << (((var_10) + (1813421025)))))) ? (arr_9 [i_6] [i_6 - 1] [i_6 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_4] [i_3]))) : (arr_4 [i_3] [i_4] [i_6])))))), (((/* implicit */unsigned long long int) var_8)));
                    arr_20 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-80)) ? (((((/* implicit */_Bool) -4LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                }
                for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) 137438953471LL)) && (((/* implicit */_Bool) ((unsigned int) (unsigned short)37340))))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 12ULL)) ? (-2658007125040715090LL) : (3172175463050630003LL))) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-32755)) + (2147483647))) >> (((1073741823ULL) - (1073741809ULL)))))))))));
                                arr_28 [i_3] [i_3] [i_3] [i_3] [i_7] |= ((/* implicit */_Bool) arr_7 [i_3] [i_4] [19ULL]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                arr_33 [i_3] [i_4] [i_7] [i_10] [i_3] [(signed char)8] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [(_Bool)1] [i_7 + 2] [i_7 - 2] [i_3] [i_7])) ? (((((/* implicit */_Bool) arr_32 [i_7] [i_7 - 2] [i_7] [i_3] [i_7])) ? (((/* implicit */int) arr_32 [i_7] [i_7 + 1] [i_7] [i_3] [i_7])) : (((/* implicit */int) arr_32 [i_7] [i_7 - 1] [i_7] [i_3] [i_7 + 2])))) : ((-(((/* implicit */int) arr_32 [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_3] [i_7]))))));
                                arr_34 [i_3] [i_4] [i_3] [i_10] [i_11] = ((unsigned int) max((((unsigned short) var_7)), (arr_16 [i_11] [i_7 + 2] [i_4])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
