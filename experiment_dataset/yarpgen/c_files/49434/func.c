/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49434
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
    var_19 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)14] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)126)))));
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) (unsigned char)171)))) | (min((var_16), (((/* implicit */int) (signed char)-28)))))), ((-(393216)))));
                    arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned short)50479)) ? (((/* implicit */int) var_6)) : (arr_5 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)50493)) >= (((/* implicit */int) (unsigned char)52)))))))) ? (((/* implicit */int) var_4)) : (((((((/* implicit */int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */int) (unsigned char)218)) >> (((460020865) - (460020863)))))))));
                    arr_12 [i_2] = ((/* implicit */_Bool) ((long long int) -496694064));
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_2]) : (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1]))))), ((+(arr_2 [i_1])))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-20559)) : (((/* implicit */int) (unsigned short)50479))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((unsigned short) max((((/* implicit */short) var_3)), ((short)16383)))))));
    var_21 = ((/* implicit */short) var_6);
}
