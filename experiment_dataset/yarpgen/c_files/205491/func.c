/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205491
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_0])))) : (arr_5 [i_0])));
                var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)92)) ? (var_7) : (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (14411731786473092894ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((9223372036854775805LL) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(9223372036854775800LL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (-1191717070)))));
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((_Bool) (_Bool)1)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((short) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */int) (unsigned short)53290))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22769)))))));
}
