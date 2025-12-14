/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20013
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
    var_11 = ((/* implicit */signed char) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */_Bool) (+(9223372036854775807LL)));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            arr_6 [24] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((var_3), (((/* implicit */signed char) (_Bool)1)))))) ? (((/* implicit */long long int) (+(arr_3 [i_1 - 2] [i_1])))) : (min((var_7), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1])))))))));
            var_12 = min((-268435456), (((/* implicit */int) (_Bool)1)));
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((-1) + (2147483647))) << (((arr_3 [i_1] [(signed char)11]) - (279366215)))))))) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_0] [i_1])));
            var_14 = ((/* implicit */signed char) min((var_14), ((signed char)-81)));
        }
        arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) % (max((451989936), (arr_0 [i_0])))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)71)))) : ((((_Bool)1) ? (573993440) : (((/* implicit */int) (_Bool)1))))));
        arr_8 [0ULL] [i_0] = min((-14), ((+(min((arr_3 [(unsigned char)19] [i_0]), (((/* implicit */int) var_4)))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)46)), ((short)-1285)))) : ((-(((/* implicit */int) var_0)))))));
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (1U)))))), ((+((-(((/* implicit */int) var_0))))))));
    var_17 = ((((((/* implicit */_Bool) var_3)) ? (((5134701361732088021ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) > (((/* implicit */unsigned long long int) ((((unsigned int) var_10)) * (min((((/* implicit */unsigned int) (signed char)109)), (var_8)))))));
}
