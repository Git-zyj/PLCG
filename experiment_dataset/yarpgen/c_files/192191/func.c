/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192191
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
    var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((-7LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-14324)))))))));
    var_18 = ((/* implicit */unsigned long long int) (+((((((_Bool)1) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) var_5)))) % (((((/* implicit */int) (signed char)121)) / (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((_Bool) (short)14324)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (var_0)));
                    var_20 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [i_1]));
                    arr_10 [i_0] = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) ((max((var_8), (((/* implicit */unsigned long long int) (signed char)31)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2002645974855737803ULL))))))))) : (((/* implicit */int) var_5)))))));
}
