/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44367
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8192)) ? (5176892125260563284ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741824U)) ? (((/* implicit */int) (short)-8192)) : (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (short)12)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */unsigned long long int) min((((unsigned int) arr_1 [i_1 + 1] [i_1 + 1])), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 24ULL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((long long int) (signed char)-83)), (((/* implicit */long long int) arr_2 [i_0]))))) ? (1040384) : (arr_1 [i_0] [(short)3])));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2221967901265743784LL)) ? (-964125748701121118LL) : (((/* implicit */long long int) 3754751242U))));
                var_15 = ((/* implicit */unsigned char) ((short) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (signed char)2)) ? (268435455LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11))))))));
            }
        } 
    } 
}
