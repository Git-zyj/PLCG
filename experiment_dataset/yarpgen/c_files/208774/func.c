/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208774
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))))))) ? (((((/* implicit */_Bool) (unsigned short)8188)) ? (((/* implicit */int) (unsigned short)39719)) : (((/* implicit */int) (short)13377)))) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [19ULL] = ((/* implicit */unsigned int) ((signed char) arr_1 [i_0] [i_0]));
        arr_5 [i_0] = ((/* implicit */long long int) ((short) ((_Bool) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) arr_2 [(unsigned char)18])) << (((var_8) - (7246918928997100313ULL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) : ((~(arr_3 [i_0] [i_0])))))) : ((((~(var_9))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2052349634098439868ULL))))))))));
        var_14 = ((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)3] [(unsigned short)3])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) & (((/* implicit */int) var_0))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_15 ^= ((/* implicit */short) ((((/* implicit */int) var_6)) << (((((arr_6 [i_1]) * (arr_8 [i_1] [i_1]))) - (16300761563555375123ULL)))));
        arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_1]) / (arr_9 [i_1])))) ? (((/* implicit */unsigned long long int) ((int) arr_9 [i_1]))) : (min((max((arr_7 [i_1] [i_1]), (arr_8 [i_1] [i_1]))), (((((/* implicit */_Bool) arr_7 [(unsigned char)17] [i_1])) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))))));
        var_16 = ((/* implicit */short) arr_7 [i_1] [i_1]);
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_7 [i_1] [i_1])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((arr_8 [i_1] [i_1]) > (arr_7 [i_1] [i_1]))))))));
    }
}
