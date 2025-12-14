/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243308
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)251))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) / (var_13)))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (_Bool)0))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_16);
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-29056))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */int) (short)29056)) ^ (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) (unsigned char)4);
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((68719476672ULL) ^ (var_5)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 3292561208U)) : (var_9))) : (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((((((/* implicit */_Bool) var_0)) ? (var_1) : (var_10))) & (((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_19)))))));
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)0))))) ? (min((((/* implicit */int) ((((/* implicit */unsigned int) var_19)) > (var_1)))), ((-(((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) max((arr_3 [i_2]), (((/* implicit */short) var_6)))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ^ (((arr_6 [i_2]) + (((/* implicit */int) (short)25096))))));
    }
}
