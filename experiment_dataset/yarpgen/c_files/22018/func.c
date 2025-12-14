/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22018
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
    var_20 ^= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_11)))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned char)239), (((/* implicit */unsigned char) var_10))))), (var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */int) ((max((-6013165752217779942LL), (((/* implicit */long long int) var_17)))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)16)) >> ((((-(-726145377))) - (726145349))))))));
                var_22 = ((/* implicit */unsigned short) max((max((arr_1 [i_0]), (arr_1 [i_1]))), (((((/* implicit */_Bool) (unsigned short)52653)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                arr_6 [i_1] = (unsigned char)239;
                arr_7 [i_0] [i_1] [i_1] = min((((arr_1 [i_1]) + (arr_1 [i_0]))), (((((/* implicit */_Bool) (~(-4)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)0))) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */long long int) var_1);
    var_24 &= (!(((/* implicit */_Bool) max((3378297395U), (((/* implicit */unsigned int) var_10))))));
}
