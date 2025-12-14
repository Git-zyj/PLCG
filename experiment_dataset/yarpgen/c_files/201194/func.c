/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201194
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
    var_20 = ((/* implicit */unsigned char) var_6);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 4561959312571821065LL)) : (max((2829010326171859759ULL), (((/* implicit */unsigned long long int) (unsigned char)217))))))) ? (var_19) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1310633844931530478LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3)))), (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned char)241))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (var_14))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3094)) ? (((/* implicit */int) (short)-26237)) : (((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (short)-10457)))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-2354975435819561695LL), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)44)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)11009))) : (2354975435819561670LL)))))) : (min((var_19), (((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned short)20])))))))));
    }
    var_24 = ((/* implicit */short) var_14);
    var_25 = var_17;
}
