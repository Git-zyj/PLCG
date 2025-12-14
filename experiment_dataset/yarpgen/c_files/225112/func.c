/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225112
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_2 [(signed char)12] [i_0] = ((/* implicit */unsigned short) max((max((arr_1 [i_0] [i_0 + 1]), (((/* implicit */short) max((var_19), (var_17)))))), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1] [(_Bool)1]))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))));
        var_21 = ((/* implicit */unsigned long long int) var_17);
    }
    for (short i_1 = 1; i_1 < 8; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_1 + 2])))))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) < (((/* implicit */int) var_10))))) >= (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 2])))));
        }
        arr_10 [i_1 + 1] = ((/* implicit */unsigned short) max((min((arr_7 [(unsigned char)5] [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 + 2] [i_1 + 3]))), (((/* implicit */unsigned int) ((short) arr_7 [(_Bool)1] [i_1 + 1] [i_1 - 1])))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_7 [i_1] [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62833)))))) ? (((/* implicit */int) var_10)) : (((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1 - 1]))))))), (((unsigned long long int) arr_6 [i_1] [i_1])))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_5] [4ULL] [4ULL] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_6 [i_1] [i_4 + 1])))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) + (((/* implicit */int) arr_4 [i_4])))))) != ((~(((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_12)))))))))));
                        var_25 = ((((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) arr_17 [i_3] [i_3] [i_3] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_3] [6LL] [i_5]))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_4 + 1] [i_5]))) : (4611686009837453312ULL))))) > (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_17))))), (((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (18267589974334860243ULL))))));
                        arr_19 [i_1] [i_1] [i_5] [i_3] = ((/* implicit */_Bool) min(((+((~(var_4))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_14 [i_1] [i_3] [i_4] [(short)8]), (((/* implicit */short) arr_8 [i_3] [i_4 + 1] [(_Bool)1]))))))))));
                        var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-6066), (((/* implicit */short) var_18)))))) : (((unsigned int) var_2)))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_5])) == (((/* implicit */int) var_5))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_1 [i_3] [i_3]))))))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max(((+(((/* implicit */int) ((unsigned short) var_10))))), (((/* implicit */int) arr_20 [i_6])))))));
        var_28 = (((+(((/* implicit */int) arr_21 [i_6 + 1])))) != (((/* implicit */int) arr_21 [i_6 + 1])));
        arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (signed char)1)))))) ? ((~(((/* implicit */int) ((var_18) || (((/* implicit */_Bool) arr_20 [i_6]))))))) : (((((/* implicit */int) arr_1 [i_6 + 1] [i_6 + 1])) | (((/* implicit */int) arr_1 [i_6 + 1] [i_6 + 1]))))));
        arr_25 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_6 + 1]))) ? ((+(159014495U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_6 + 1])))))));
    }
}
