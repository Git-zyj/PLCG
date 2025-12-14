/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231851
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
    var_17 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((arr_0 [(signed char)4]) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [(unsigned char)2]))))))));
        var_19 = ((/* implicit */long long int) (short)7);
        arr_3 [i_0] [(unsigned short)4] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (signed char)107))))) / (max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) ((short) arr_0 [i_1]));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2401)) ? (arr_0 [i_1]) : (arr_0 [(_Bool)1])));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (signed char)-121))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)2)) <= (((/* implicit */int) (unsigned char)255))));
    }
    for (int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        var_23 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)17)) && (((/* implicit */_Bool) var_3)))))))) && (((/* implicit */_Bool) ((int) (unsigned short)65535))));
        var_24 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned short)65535)))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_13 [5U] = var_0;
        var_25 = ((/* implicit */short) ((((/* implicit */int) (signed char)112)) + (max((((/* implicit */int) min((var_0), (var_13)))), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)255))))))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))))), ((+(1125899906842623ULL)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (((unsigned int) var_15)))))));
    var_27 = ((/* implicit */short) (unsigned short)38533);
}
