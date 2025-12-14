/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209336
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned char) (unsigned char)183)), (((/* implicit */unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7030573620718376302LL)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) | (var_5)))) ? (((/* implicit */unsigned long long int) ((1741270829U) | (4294967295U)))) : (((((/* implicit */_Bool) 14471376167001505503ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (7059008133395761047ULL)))))));
    var_21 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775797LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (var_6))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_13)))))))));
    var_22 = ((/* implicit */unsigned short) 2553696466U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_23 ^= ((/* implicit */short) 3253702637865272454LL);
                arr_6 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
                var_24 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_25 ^= ((/* implicit */_Bool) (-(var_9)));
}
