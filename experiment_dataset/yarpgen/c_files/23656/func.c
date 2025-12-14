/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23656
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) var_6);
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((arr_1 [i_0]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
        arr_4 [(_Bool)1] [(unsigned char)8] = ((/* implicit */unsigned long long int) (unsigned short)46134);
        arr_5 [(unsigned short)18] = ((/* implicit */signed char) (-(3864746009U)));
    }
    for (unsigned char i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) || (var_6))) ? (((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-1))))) <= (((var_12) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) : (((/* implicit */int) (short)1))));
        arr_10 [i_1] = ((long long int) (((!(((/* implicit */_Bool) (signed char)87)))) ? (((/* implicit */int) ((short) (short)-4))) : (((var_6) ? (((/* implicit */int) var_6)) : (var_2)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_11)) ? (arr_8 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        var_16 = ((/* implicit */short) var_7);
        var_17 = var_0;
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)44108))) & (var_8))), (((/* implicit */long long int) ((((/* implicit */int) (short)3)) & (((/* implicit */int) (unsigned short)21427)))))));
        var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)16))))) / ((-(var_13))))));
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_3]), (((/* implicit */unsigned int) var_6))))) && (((/* implicit */_Bool) var_13))));
        var_20 = ((/* implicit */_Bool) max((((((((/* implicit */long long int) var_2)) - (var_8))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44089))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) & (var_7)))) ? (((arr_1 [(unsigned char)15]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_8)))))))));
    }
    var_21 = ((/* implicit */unsigned short) (+((-(8)))));
    var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)107))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */int) var_4)) + (((/* implicit */int) var_3)))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_8) : (var_12)))))) ? (((((/* implicit */int) ((unsigned short) var_3))) << (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) (_Bool)1))))))) : (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_1))))))));
}
