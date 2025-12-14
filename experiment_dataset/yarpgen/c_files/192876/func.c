/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192876
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [(unsigned char)10]) - (18206089197193954783ULL)))))) || (((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_0]))))))), (((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0] [i_0]))))));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))) != (((unsigned int) arr_1 [i_0] [i_0])))) ? (((((unsigned long long int) arr_0 [i_0])) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
    }
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_4 [i_1]))))))) + ((+(((((/* implicit */_Bool) -12LL)) ? (-16LL) : (((/* implicit */long long int) 4294967287U))))))));
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) arr_2 [i_2]))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_2]))))))) || (((/* implicit */_Bool) (+(-2147483642))))));
                }
            } 
        } 
        arr_8 [(unsigned char)8] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) - (arr_1 [i_1] [2LL]))) << (((max((((/* implicit */unsigned long long int) arr_2 [(unsigned char)6])), (arr_1 [i_1] [i_1]))) - (18206089197193954802ULL)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)539)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) : (1572804434U))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))))));
    }
    var_17 = ((/* implicit */unsigned short) max(((-(((long long int) (unsigned char)189)))), (((/* implicit */long long int) ((((unsigned int) var_10)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))))))));
}
