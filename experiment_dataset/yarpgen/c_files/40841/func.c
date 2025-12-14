/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40841
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
    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (short)16383))) ? (((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) & (var_4))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) var_6))), ((~(var_13))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_4 [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((short) arr_3 [i_0]))))) & (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))) / (min((var_1), (((/* implicit */long long int) arr_2 [(signed char)15]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_3 [(short)16]), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])) << (((arr_6 [i_0] [i_0]) - (9725104489891340964ULL)))))) : (var_14))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_0] [i_0]), (arr_12 [i_3] [9U] [i_1] [i_0])))))))));
                        arr_14 [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (+((+(arr_3 [i_2 - 2])))));
                        var_17 = ((/* implicit */unsigned short) (-(((long long int) arr_1 [i_2 - 2]))));
                        arr_15 [i_2] [(short)19] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_2 [i_2 - 1]), (arr_2 [i_2 - 1])))), ((+(((/* implicit */int) arr_2 [i_2 - 2]))))));
                        arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_2 [i_2 - 1]))) * (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_0] [i_2] [i_3]))))) < (((arr_3 [(_Bool)1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_3]))))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */_Bool) (~((((~(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) arr_11 [i_0] [10U] [i_0] [10U]))))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)54557)) && (((/* implicit */_Bool) (unsigned short)54536)))) && ((!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [4LL]))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_2);
    var_20 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */int) ((short) var_15)))));
    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_10)))) ? (var_13) : (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */unsigned long long int) var_13)) + (min((((/* implicit */unsigned long long int) (unsigned short)11006)), (8ULL)))))));
}
