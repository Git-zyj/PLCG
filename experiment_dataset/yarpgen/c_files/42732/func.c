/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42732
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
    var_14 = ((((long long int) 14623159281188321350ULL)) + (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65530)) / (((/* implicit */int) var_13))))), (6359688464163476015LL))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65530)))))) ? (((arr_9 [8ULL] [8ULL] [i_0] [8ULL] [8ULL] [8ULL]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)25653)))))))), (((((/* implicit */_Bool) (~(-6359688464163476022LL)))) ? ((~(var_2))) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [(short)12] [i_2 - 1] [i_2 - 1]))))));
                        arr_10 [i_0] [i_1] [(unsigned char)19] [i_1] [(unsigned char)19] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (unsigned short)6))) ^ (((((/* implicit */_Bool) (~(2720495432432278774ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_1 - 1]))) : (max((arr_1 [(short)10]), (2720495432432278774ULL)))))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] = ((((/* implicit */_Bool) 14623159281188321350ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)174)));
                    }
                } 
            } 
        } 
        var_16 = ((max((6359688464163476009LL), (-6359688464163476039LL))) - (((/* implicit */long long int) ((/* implicit */int) var_6))));
        var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [18ULL] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55271))) * (14623159281188321334ULL))))))))));
        arr_12 [i_0] = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
    }
    for (int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        arr_17 [i_4] = var_9;
        arr_18 [i_4] = max((((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6277))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -6359688464163475993LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) ? (11673839851200545158ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_5))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 3) 
    {
        arr_23 [i_5] [14ULL] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) min((((/* implicit */short) var_4)), (arr_19 [0])))))));
        arr_24 [i_5] = ((/* implicit */unsigned long long int) min(((unsigned short)28089), (((/* implicit */unsigned short) arr_5 [i_5 + 2] [i_5] [i_5]))));
    }
}
