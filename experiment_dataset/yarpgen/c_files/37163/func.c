/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37163
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
    var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) var_17)));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_20 = arr_1 [i_0];
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            var_21 = ((/* implicit */long long int) arr_2 [i_1]);
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)45)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) 4398046478336ULL)))))), (arr_1 [i_0])));
            var_23 = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_2 [i_0 - 2])))));
            arr_4 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 + 2] [i_0]))));
        }
        var_24 = ((/* implicit */short) max((min((((((/* implicit */int) arr_2 [i_0 - 3])) | (((/* implicit */int) (short)-24042)))), (((/* implicit */int) var_0)))), (((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_25 = ((/* implicit */signed char) arr_2 [i_0]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_2] [12U]), (((/* implicit */int) arr_3 [(signed char)2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_11))))) : (min((var_7), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) max((arr_6 [i_2]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_5 [i_2]))))))) : (var_13)));
        var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((int) var_1)), (arr_0 [4ULL] [4ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_5 [i_2]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), ((short)24033))))) / (var_7)))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        arr_10 [i_3] &= ((/* implicit */unsigned int) (~(max((((/* implicit */int) arr_3 [i_3])), ((~(((/* implicit */int) arr_3 [i_3]))))))));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) arr_1 [i_3]);
    }
}
