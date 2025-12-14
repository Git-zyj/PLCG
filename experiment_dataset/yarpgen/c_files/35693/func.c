/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35693
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
    var_11 |= ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), ((+(var_1)))));
    var_12 = ((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8LL] [8LL] [i_0])) ? (((/* implicit */long long int) arr_3 [i_2])) : (-8931250845789787194LL)))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) < (((/* implicit */int) ((_Bool) (unsigned short)3019)))))) : (((/* implicit */int) ((short) arr_2 [i_0 + 3] [i_1]))));
                    var_14 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7159268033574315200LL)) ? (7159268033574315200LL) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)28514))))))))));
                }
            } 
        } 
    } 
}
