/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243734
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 ^= (-(((/* implicit */int) arr_0 [i_0])));
        var_14 ^= ((/* implicit */int) ((_Bool) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */short) var_4);
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) 1186579549U);
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (unsigned char)73)), (-2134167541)))))) ? (((/* implicit */int) ((((var_7) | (((/* implicit */long long int) var_9)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(var_8)))))))) : (((/* implicit */int) ((signed char) ((long long int) var_12))))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) == (((/* implicit */int) ((_Bool) (-(arr_3 [i_1])))))));
    }
    var_16 = ((/* implicit */unsigned int) var_6);
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
}
