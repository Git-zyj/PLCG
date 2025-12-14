/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214229
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
    var_20 = (~(min((((/* implicit */int) var_4)), ((-(((/* implicit */int) (unsigned short)8)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_4 [i_1] |= ((/* implicit */long long int) (signed char)63);
            arr_5 [i_0 + 1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) arr_0 [i_0] [(unsigned char)1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) min(((unsigned short)2511), (((/* implicit */unsigned short) (unsigned char)101)))))))) ? ((~(((/* implicit */int) var_8)))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)29779)))), (((/* implicit */int) arr_2 [i_0 + 1] [i_1] [i_1]))))));
        }
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 14; i_2 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (-(17055929504999943571ULL))))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_13 [i_0] [14ULL] [i_3] [14ULL] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_2] [i_2 - 1]);
                        arr_14 [i_4 - 2] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_7 [i_0] [9ULL] [i_4 + 2])), (var_4))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) ((max((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-24826)) ? (((/* implicit */int) arr_0 [i_0] [i_2 - 1])) : (((/* implicit */int) arr_7 [i_0 + 1] [(short)3] [i_0 + 1]))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_0 + 1] [i_0])), ((unsigned char)255)))))));
        }
        var_22 = ((/* implicit */short) var_9);
        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) (~(arr_3 [i_0] [i_0 + 1] [(unsigned short)7])))) | ((-(var_1)))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        arr_20 [i_5 - 1] &= ((/* implicit */unsigned long long int) ((((min((((((/* implicit */int) var_8)) + (var_10))), (((/* implicit */int) max((arr_17 [i_5]), (arr_17 [i_5])))))) + (2147483647))) >> (((/* implicit */int) (!((_Bool)1))))));
        var_24 = ((/* implicit */short) arr_18 [14ULL]);
    }
}
