/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53916
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
    var_17 = ((/* implicit */short) var_3);
    var_18 = min((max((((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)26905)) - (26900))))), (((((((/* implicit */int) var_16)) + (2147483647))) << (((8113337417813976360ULL) - (8113337417813976360ULL))))))), (((/* implicit */int) var_4)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) (short)2047);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [(short)10]))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 11; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((arr_5 [i_1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_1])) || (((/* implicit */_Bool) arr_9 [i_3 - 2] [i_1]))))))))));
                    var_22 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)-1405)) * (((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_3 + 2])))) & ((~(((/* implicit */int) arr_10 [i_3] [(unsigned char)6] [i_1] [i_1]))))));
                    var_23 *= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_3] [i_2]))) <= (var_15))))) << (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))) | (((((arr_1 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249)))))));
        var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1] [i_1]), (((/* implicit */signed char) arr_8 [i_1]))))) && (((((/* implicit */_Bool) (unsigned short)43557)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) (signed char)58))))), (arr_0 [i_1] [i_1]))))))));
        var_26 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)7))))));
    }
    var_27 = ((/* implicit */_Bool) (-(var_14)));
}
