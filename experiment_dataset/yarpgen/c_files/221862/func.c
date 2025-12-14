/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221862
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
    var_13 = ((/* implicit */signed char) var_0);
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) (+((-(var_8)))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_8 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */short) var_6);
                        arr_9 [i_0] [i_2] [i_2] [i_2] = (-(((((/* implicit */_Bool) max((arr_3 [i_1] [8] [8]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((arr_7 [i_2] [i_2]) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_11)))))));
                        arr_10 [8U] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_1])))) * (((((/* implicit */_Bool) 604451291U)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_4 [i_1] [i_0] [i_1])))))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) ((signed char) var_3))))) : (((/* implicit */int) (unsigned char)7)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) (+(((/* implicit */int) (unsigned char)9)))))));
        var_18 = ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_4 + 2] [i_4]))));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 16; i_5 += 3) 
    {
        arr_15 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned char) arr_14 [i_5] [i_5 - 1]));
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned int) arr_14 [i_5] [i_5]);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? ((-(var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_13 [i_5] [i_5])))))));
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_5] [0ULL]))))) ? ((-(((/* implicit */int) arr_14 [16LL] [16LL])))) : ((-(((/* implicit */int) arr_13 [i_5] [(unsigned short)8]))))));
    }
}
