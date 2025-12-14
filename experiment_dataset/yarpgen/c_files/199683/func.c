/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199683
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
    var_10 = ((/* implicit */unsigned long long int) (((((!((_Bool)1))) ? (max((var_3), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >> (((var_7) - (2529533736U)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 1079632767U)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_0])) : (((int) arr_1 [i_0] [(short)14])))) : (((/* implicit */int) max((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), ((!((_Bool)0))))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) 3525059699U))), (max((((/* implicit */unsigned int) -287903032)), (3215334529U)))));
    }
    for (long long int i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_14 = min((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) arr_3 [(unsigned char)10] [(unsigned char)10]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63478)))))) : (arr_6 [i_1 + 4] [i_2 + 1]))), (((((((/* implicit */unsigned int) arr_14 [i_5] [i_1] [i_2] [i_3] [i_4] [6LL])) | (arr_6 [i_4] [i_5]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1]))))));
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */int) var_5)), (arr_7 [i_5] [i_5] [11U] [i_4]))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned int) arr_5 [i_1 + 4] [i_1])), (var_4))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))))))) : ((((!(((/* implicit */_Bool) arr_8 [i_1] [i_1])))) ? (((/* implicit */int) arr_8 [i_1 + 1] [(unsigned short)2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1 + 2])))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) ((((((unsigned int) arr_0 [i_1])) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_3]))))))) != (arr_6 [8ULL] [i_2])));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) var_0))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_8))) : (max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [(short)0] [(signed char)4] [i_1] [i_1])), (var_0)))))));
    }
    for (long long int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) -287903032))), (((((/* implicit */int) var_5)) | (((((/* implicit */_Bool) arr_4 [i_6 + 3])) ? (((/* implicit */int) (unsigned short)63478)) : (((/* implicit */int) (unsigned short)31801))))))));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_6 + 4] [i_6 + 1] [i_6 + 3] [i_6 + 3]) : (arr_7 [i_6 + 2] [i_6 + 3] [i_6 + 2] [i_6 + 4]))) & ((~(((/* implicit */int) arr_5 [i_6 + 2] [i_6 + 1]))))));
    }
    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))));
    var_21 = ((/* implicit */unsigned long long int) 3215334529U);
}
