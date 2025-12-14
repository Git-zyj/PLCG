/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208600
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-5652017561140941955LL) | (-8632123446316678800LL)))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) var_6)) | (4294967295U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) | (((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) >= (((/* implicit */int) (_Bool)1)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) ((signed char) -4304409961069717907LL))), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))) % ((-(var_12)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)-24979)) ? (13478928235918717954ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned long long int) var_6))))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 4; i_2 < 13; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [(short)11] [i_1] [i_2] [i_4] [i_3] [i_4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [i_2] [1LL])) ? (4294967290U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)53414)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned int) (_Bool)1))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? ((~(((((/* implicit */_Bool) var_7)) ? (4967815837790833661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)51005))))));
                        var_19 = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30542)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30516)))))) > (min((((/* implicit */unsigned long long int) var_5)), (0ULL)))))), (arr_5 [i_3] [i_4])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        arr_17 [i_5] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_5 + 3] [i_2 - 4])) : (((/* implicit */int) (_Bool)1)))));
                        arr_18 [i_5] [i_1 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))) : (((((/* implicit */int) (short)-23569)) + (((/* implicit */int) arr_8 [i_1] [i_2 + 1] [i_3]))))));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */short) max((13478928235918717969ULL), (4398046511040ULL)));
    }
    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) 13478928235918717979ULL));
}
