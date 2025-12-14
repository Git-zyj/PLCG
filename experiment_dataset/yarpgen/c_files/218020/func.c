/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218020
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
    var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((int) (signed char)-55)) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)73)) || (((/* implicit */_Bool) (unsigned char)254)))))))) || (((/* implicit */_Bool) ((unsigned int) ((short) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1 - 1] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) || (((((/* implicit */_Bool) (short)-9008)) && (((/* implicit */_Bool) var_11))))))) - (((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) & (((/* implicit */int) ((((/* implicit */_Bool) 7142936435728868192LL)) || (((/* implicit */_Bool) var_3)))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_3 [i_0] [i_1])) ^ (var_1))) == (((/* implicit */int) ((unsigned short) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) (short)-4)) + (2147483647))) >> (((var_1) + (2052250053)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned short) ((signed char) ((signed char) (short)0))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_16))))))))) & (((((/* implicit */unsigned long long int) ((int) var_8))) / (((unsigned long long int) var_13))))));
}
