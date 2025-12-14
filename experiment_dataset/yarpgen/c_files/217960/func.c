/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217960
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
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_5))))))) < (((((_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (signed char)-43))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)1))))));
        var_12 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [8])))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_2 [i_0]))) ? ((-(arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    var_13 |= ((/* implicit */unsigned char) var_6);
    var_14 = var_0;
}
