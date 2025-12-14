/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195658
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_12);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 6133250523049785220ULL)) ? (6133250523049785220ULL) : (12313493550659766395ULL))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) arr_3 [i_0] [i_0])))))))) ? (((/* implicit */int) (unsigned short)47542)) : (((/* implicit */int) ((var_6) != (((/* implicit */unsigned int) 2147483644)))))));
        arr_6 [i_0] = ((/* implicit */signed char) (!((_Bool)0)));
        arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -628785617)), (arr_1 [i_0])))) ? ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)18008)))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
        arr_8 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) != (((/* implicit */int) var_12))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (short i_2 = 4; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                {
                    {
                        arr_23 [i_4] [i_4] [i_3] [15U] [i_1] = arr_3 [i_1 - 1] [i_2 - 3];
                        arr_24 [4ULL] [i_3] [i_3 + 2] [4ULL] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(6133250523049785235ULL)))) ? (((((/* implicit */_Bool) (signed char)49)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    }
                } 
            } 
        } 
        var_13 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))) ^ (-1517051772338163407LL)))) | (((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (arr_1 [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1]))))));
        arr_25 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_28 [i_5] = ((/* implicit */unsigned int) ((unsigned char) (~(((((/* implicit */_Bool) (short)-3258)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (unsigned char)248)))))));
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_19 [i_5] [i_5 + 1] [i_5 + 1]), (arr_19 [i_5] [i_5 + 1] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_5 + 1] [i_5])) ? (12313493550659766393ULL) : (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5 + 1] [4])))) : (((/* implicit */unsigned long long int) max((arr_19 [i_5] [i_5 + 1] [i_5]), (arr_19 [i_5] [i_5 + 1] [i_5]))))));
        var_15 = ((/* implicit */unsigned char) max(((~(max((12313493550659766395ULL), (((/* implicit */unsigned long long int) arr_11 [i_5 + 1])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18008))) | (arr_1 [i_5 + 1])))));
    }
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_7)));
}
