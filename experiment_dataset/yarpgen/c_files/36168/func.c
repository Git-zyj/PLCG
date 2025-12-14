/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36168
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
    var_20 = ((/* implicit */signed char) (+(((((/* implicit */long long int) var_13)) % (var_16)))));
    var_21 = ((/* implicit */unsigned long long int) ((((var_14) < (((var_19) << (((var_8) + (6375619585437449272LL))))))) ? (((/* implicit */int) max((((unsigned short) var_12)), (((/* implicit */unsigned short) ((unsigned char) 1463876210)))))) : (((/* implicit */int) ((short) ((var_16) < (var_8)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0])))));
        var_22 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) >> ((((((((~(((/* implicit */int) arr_2 [i_0])))) + (2147483647))) << (((arr_1 [i_0]) - (1803989986))))) - (2147483613))))))));
        arr_4 [i_0] = arr_1 [i_0];
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (((-(((/* implicit */int) ((var_16) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [5LL])))))))) < (((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))) | ((+(arr_1 [i_0]))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_25 &= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (short i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3 - 1] [i_2] [i_3 - 3]))));
                    arr_12 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1] [i_2] [i_3]))));
                }
            } 
        } 
        var_27 = ((((/* implicit */_Bool) arr_7 [i_1] [10] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : ((+(((/* implicit */int) arr_9 [i_1] [i_1] [(_Bool)1])))))));
        arr_13 [i_1] = ((/* implicit */_Bool) ((int) ((((_Bool) arr_10 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_8 [i_1] [(unsigned char)2] [i_1]) : (((/* implicit */long long int) arr_7 [i_1] [0LL] [i_1]))))))));
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_7)))))) | (var_12)));
}
