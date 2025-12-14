/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231177
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
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)0))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19196)) << (((((/* implicit */int) (short)-1)) + (13)))));
    var_16 = ((/* implicit */signed char) var_3);
    var_17 = ((((/* implicit */_Bool) (unsigned char)255)) ? (760452234415389181LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_8 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) arr_3 [i_0]));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_0]), (arr_7 [i_0])))) ? (((((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
                var_19 *= ((/* implicit */signed char) ((long long int) var_2));
                var_20 = ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-13)));
                arr_9 [6] [5LL] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (var_12))))));
            }
        } 
    } 
}
