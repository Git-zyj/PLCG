/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232058
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60015)) ? (((((/* implicit */_Bool) 7375037335974424145LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61950))) : (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)60015), (((/* implicit */unsigned short) var_13))))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)118)) <= (var_5)))) ^ (var_5))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */int) var_6))))) & (max((arr_2 [i_0]), (arr_3 [i_0] [i_1 - 3]))))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (+(((/* implicit */int) (short)-7062)))))));
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 18446744073709551615ULL))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 15217009480486878094ULL)))))))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)74)))))))));
        }
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (short)7061)), (2147475456U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)7059))))))))));
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])))))) >= (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (-2434115350099508025LL) : (((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 + 1])))))))));
        }
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_2 [i_0 + 1]) + (((/* implicit */int) var_13)))))))))))));
    }
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 23; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_17 [i_3] [i_5] = var_1;
                        arr_18 [10U] [i_5] [10U] [i_6] = ((/* implicit */int) (+(max((((/* implicit */long long int) (-(1647523222U)))), (((((/* implicit */long long int) arr_7 [i_3])) + (var_2)))))));
                        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (16679329206101326815ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 2] [i_3 + 1] [i_3]))))), (((/* implicit */unsigned long long int) max(((unsigned short)43235), (((/* implicit */unsigned short) arr_13 [i_3 + 3] [i_3 + 4] [i_3])))))));
                        arr_19 [i_3 + 1] [i_5] [i_3] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)23)) && (((/* implicit */_Bool) arr_15 [(_Bool)1] [i_4] [i_5] [i_6] [i_6]))))), (max((var_7), (arr_14 [i_3] [i_5])))))) ? (((((/* implicit */_Bool) (unsigned short)56354)) ? (arr_14 [i_3 + 4] [i_5]) : (arr_14 [i_3 + 4] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [i_5] [i_5])))));
                    }
                    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */int) max(((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_7 [i_7]))))), (max((arr_10 [i_3] [i_4] [i_7]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7059)) || (((/* implicit */_Bool) arr_16 [i_3] [i_5])))))))));
                        arr_24 [i_7] [i_7] [i_5] [i_5] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) % (4688389665129757573ULL))) == (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22))) + (4294967295U)));
                        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_3])), (var_1)))) || (((((/* implicit */int) (unsigned char)31)) > (((/* implicit */int) (unsigned short)59992)))))) ? (((/* implicit */int) (unsigned short)60015)) : (((int) arr_16 [i_3] [i_5]))));
                        var_25 = ((/* implicit */int) arr_27 [i_3 - 1] [i_5] [(signed char)23] [i_3]);
                        var_26 += (~(((/* implicit */int) max(((short)7046), (((/* implicit */short) (signed char)124))))));
                        arr_28 [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((((unsigned long long int) 2147483647)) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                    }
                    arr_29 [i_5] = ((/* implicit */unsigned long long int) var_6);
                    var_27 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)249)), (9223372036854775799LL)))), (((((/* implicit */unsigned long long int) arr_11 [i_3] [i_4 - 3] [i_5])) / (max((arr_9 [i_4]), (((/* implicit */unsigned long long int) var_1))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
        arr_30 [i_3 + 4] [i_3] = ((/* implicit */signed char) var_5);
    }
    for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
    {
        var_29 *= ((/* implicit */signed char) arr_23 [i_9] [i_9 - 1] [i_9] [i_9]);
        var_30 |= ((/* implicit */unsigned long long int) arr_27 [(unsigned short)6] [(unsigned short)10] [i_9 + 3] [i_9]);
    }
    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (((((/* implicit */_Bool) 995793134)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))) : (7087162844091958712ULL))));
    var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)16384)))))) <= (((5196354455570361655ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7059)))))));
}
