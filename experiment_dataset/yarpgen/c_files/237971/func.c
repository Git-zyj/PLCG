/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237971
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) (signed char)113))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)7680)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : ((-(((((/* implicit */_Bool) (unsigned char)255)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) != (((((/* implicit */_Bool) (unsigned short)63324)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))) | (((/* implicit */int) (short)5564)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [5ULL] [i_1] [i_0 - 3] = ((/* implicit */short) min((var_3), ((+(((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1]))) % (var_2))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-9615)) & (((/* implicit */int) arr_0 [i_0])))))))) ? ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-58))) : (arr_1 [i_0 + 1]))))) : (var_4)));
            }
        } 
    } 
}
