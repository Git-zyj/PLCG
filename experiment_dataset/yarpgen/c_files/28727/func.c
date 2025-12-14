/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28727
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(arr_0 [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)89))))))) ? (((/* implicit */int) arr_4 [i_0] [11])) : ((-(-149411474)))));
                var_11 = ((1052856121U) | (((unsigned int) (unsigned char)161)));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (~(((((34359738336LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) - (((/* implicit */long long int) ((/* implicit */int) ((short) 989412155498901811LL))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((-17) ^ (2042210771)))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7803447535529454993LL)) ? (((/* implicit */unsigned int) var_2)) : (var_6)))))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1939216056U)) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) (short)-6963))));
    var_14 = (!(((/* implicit */_Bool) ((unsigned int) ((_Bool) var_0)))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((short) max((((var_9) ? (var_4) : (var_2))), ((+(var_4)))))))));
}
