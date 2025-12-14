/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208268
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)58)) * (((/* implicit */int) (_Bool)0))))) ? (((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12))))))))))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((unsigned char) var_1)))))), (((unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_6)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((((unsigned long long int) arr_2 [i_0] [i_0])), (((/* implicit */unsigned long long int) ((long long int) -2140117816)))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) arr_1 [i_0] [8ULL]))), ((+(((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4])))))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0])), (var_15)))), (((unsigned long long int) arr_3 [2ULL]))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */int) arr_4 [i_1])), (var_13))), (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) (+(((/* implicit */int) arr_6 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)82))));
        var_23 = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2])) + (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_5 [i_2] [i_2])) * (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_13 [i_2])))) & (((/* implicit */int) max((arr_6 [i_2]), (arr_6 [i_2])))));
        arr_14 [i_2] [i_2] = ((_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? ((~(arr_10 [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2])))));
        var_24 = ((/* implicit */_Bool) var_0);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_16 [(_Bool)1] [i_3])))))))));
        arr_17 [i_3] = ((/* implicit */signed char) arr_5 [i_3] [(signed char)4]);
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_14))));
    }
    var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_11))))) : ((+(var_16))))), (((/* implicit */unsigned int) var_13))));
}
