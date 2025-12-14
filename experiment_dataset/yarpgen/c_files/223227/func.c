/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223227
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
    var_19 = ((/* implicit */short) var_11);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_20 += ((/* implicit */long long int) ((((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) arr_2 [(short)6])))), (((((/* implicit */_Bool) var_5)) && (var_3)))))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) max((arr_2 [(unsigned char)0]), (((/* implicit */unsigned short) (_Bool)1))))))))));
        arr_4 [i_0 + 1] [i_0] = (!(((/* implicit */_Bool) ((((var_3) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) ^ ((~(var_9)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) var_3);
        var_21 = ((/* implicit */short) var_18);
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) 127LL)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_0 [0]))))), (((/* implicit */unsigned long long int) ((int) ((short) arr_0 [0LL])))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) var_15);
        arr_10 [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [i_1]);
        arr_11 [i_1] = ((/* implicit */short) arr_7 [i_1] [i_1]);
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_16 [i_2] [i_2] = (((-(((/* implicit */int) arr_15 [i_2])))) * (((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */int) ((arr_1 [i_2] [i_2]) == (((/* implicit */int) var_14))))) : (((/* implicit */int) arr_2 [8ULL])))));
        var_24 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_2 [(_Bool)1])))) ? (((/* implicit */int) (short)29393)) : (((((/* implicit */_Bool) 2027585009)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)29388))))))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */long long int) ((unsigned char) var_16)))));
}
