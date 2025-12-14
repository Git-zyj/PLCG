/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205923
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */short) ((int) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19157))) : (min((2213837504U), (2081129792U))))));
                    var_20 = ((/* implicit */short) max((var_20), (var_0)));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */short) ((unsigned long long int) var_17));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((16615306427967640255ULL) == (15704231855747700404ULL)))) | (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((unsigned short) ((var_14) | (((/* implicit */int) var_11)))))) : ((-(((((arr_1 [i_3] [i_3]) + (2147483647))) >> (((/* implicit */int) var_15))))))));
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483647))));
        arr_12 [(short)10] [i_3] &= ((/* implicit */long long int) arr_7 [(_Bool)1] [i_3] [i_3] [16ULL]);
        var_24 = ((/* implicit */int) ((((((unsigned long long int) arr_10 [i_3])) - (((/* implicit */unsigned long long int) ((unsigned int) arr_8 [(short)17]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    var_25 |= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (var_18)))));
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_10))))))) + (var_6)));
}
