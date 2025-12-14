/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211291
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1369872578)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (-23LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (min((11569795778082934363ULL), (((/* implicit */unsigned long long int) var_3))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [8U] [i_0])))))));
                arr_5 [(unsigned short)2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(3U)))) ? (((/* implicit */unsigned int) ((-1369872573) * (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3U))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (((long long int) (+(((/* implicit */int) var_3)))))));
    var_17 = ((/* implicit */unsigned long long int) var_4);
    var_18 = ((/* implicit */unsigned short) var_1);
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
}
