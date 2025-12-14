/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32898
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
    var_16 = ((/* implicit */unsigned char) var_5);
    var_17 = ((/* implicit */unsigned short) var_9);
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) max((var_15), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)172)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)0))) > (arr_0 [i_2] [i_1])));
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_8 [i_3] [i_3] [i_3] [i_0 + 1] [(unsigned short)17]), (arr_8 [i_3] [(unsigned short)16] [i_3] [i_0 + 1] [i_0])))) ? (((((/* implicit */int) arr_8 [i_3] [i_2 + 1] [i_0 + 1] [i_0 + 1] [(signed char)11])) / (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_8 [0] [i_2 - 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_0 + 1] [i_0])))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 18446744073709551615ULL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)15))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (short)-30867)) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)9))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_4])) >> (((((/* implicit */int) arr_14 [i_4])) - (118))))) < (((/* implicit */int) (unsigned char)173))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)77))) : (arr_6 [i_4] [i_4 + 1] [i_4] [i_4 - 1])));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))));
    }
}
