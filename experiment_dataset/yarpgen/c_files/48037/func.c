/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48037
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [8LL] [8LL] |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 3])))) << (((134217724) - (134217713)))));
        arr_4 [(unsigned char)16] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0])))) << (((max((-134217722), (((/* implicit */int) arr_2 [i_0])))) - (198)))))) ? (arr_1 [(unsigned short)0] [16LL]) : (((arr_1 [(_Bool)1] [(_Bool)1]) ^ (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_18 *= ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [(short)10] [i_1 - 3])) ? (((/* implicit */int) arr_8 [14ULL])) : (arr_1 [(_Bool)1] [i_1 - 1]))), (((((/* implicit */int) var_16)) / (((/* implicit */int) arr_2 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1 + 1])) << (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) / (arr_6 [i_1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))))) - (27808ULL)))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((min((arr_6 [i_1 - 3]), (arr_6 [i_1 - 2]))) << (((((arr_6 [i_1 - 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) - (200980929885047ULL)))));
        arr_11 [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_5 [i_1 + 1] [i_1])) != (((/* implicit */int) arr_5 [i_1 - 3] [i_1])))) ? (((/* implicit */int) arr_2 [i_1])) : (-134217720))) == (((arr_1 [i_1] [i_1]) & (arr_1 [i_1] [i_1 - 2])))));
    }
    for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */short) var_2);
        /* LoopNest 3 */
        for (unsigned int i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            for (short i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    {
                        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)240)) ? (max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (5868078142362301223LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4])) & (((/* implicit */int) arr_0 [i_2 - 3]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 16LL)) ? (((arr_1 [i_3] [i_3 + 3]) ^ (((/* implicit */int) arr_19 [i_4 - 3] [i_4 - 3] [i_3] [i_2])))) : (((((/* implicit */int) (unsigned char)234)) | (((/* implicit */int) (_Bool)0)))))))));
                        arr_22 [i_5 - 1] [i_2] [i_5 - 2] [17LL] = ((/* implicit */long long int) arr_6 [(_Bool)1]);
                        var_20 += ((/* implicit */long long int) var_11);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11)))) << (((max((134217732), (((/* implicit */int) arr_5 [i_4 + 3] [i_2 - 3])))) - (134217718))))) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2 - 3])) > (((/* implicit */int) arr_0 [i_2 - 2])))))))));
                    }
                } 
            } 
        } 
        arr_23 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) < (((((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_8 [i_2]))))));
        var_22 &= ((/* implicit */unsigned short) arr_1 [(_Bool)1] [i_2]);
    }
    var_23 = ((/* implicit */short) var_2);
    var_24 = ((/* implicit */int) var_6);
    var_25 = var_10;
}
