/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247900
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
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                var_15 = ((/* implicit */unsigned char) arr_2 [8U]);
                var_16 *= ((/* implicit */unsigned short) arr_4 [(_Bool)0]);
                var_17 = ((/* implicit */signed char) (+(arr_3 [i_0 + 2])));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) min((((-1939074744030078496LL) & (-1939074744030078496LL))), (((/* implicit */long long int) max((arr_2 [i_0 + 2]), (((/* implicit */unsigned short) (unsigned char)241))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((var_14) + (9223372036854775807LL))) >> (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (var_14)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-1939074744030078496LL))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_4))))))))));
    var_20 = ((/* implicit */long long int) var_10);
}
