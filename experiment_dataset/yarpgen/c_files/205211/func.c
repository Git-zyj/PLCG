/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205211
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(var_7)))) & (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (7858502908043814629ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) var_9))))))));
    var_13 = ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((var_1) - (7859725173034814872ULL)))))) : (((var_9) / (((/* implicit */long long int) var_2)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((short) arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned long long int) var_6)), (var_1))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0)))) | (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [(unsigned char)5] [i_1])) / (((/* implicit */int) arr_5 [i_1] [i_1])))) - ((+(((/* implicit */int) arr_5 [i_1] [i_1]))))))) % (var_5));
        var_15 = ((/* implicit */unsigned long long int) (unsigned char)82);
        var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [(unsigned short)12]), (arr_4 [(_Bool)1])))) ? ((+(arr_4 [18]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_4 [14ULL])))));
        var_17 = ((/* implicit */unsigned short) ((var_11) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((var_1) << (((arr_7 [i_2]) - (5885677873506446086LL)))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_8 [i_2]))) ? (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)25327)))) : (((/* implicit */unsigned long long int) arr_7 [i_2]))))) ? (6382008352566471109ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_2]) >= (((/* implicit */long long int) (-(var_7))))))))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) (~(((max((((/* implicit */long long int) (signed char)7)), (arr_7 [(unsigned short)10]))) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2])))))));
    }
}
