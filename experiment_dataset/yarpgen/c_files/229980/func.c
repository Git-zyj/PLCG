/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229980
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_0])))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((1533710984584205267LL) > (1533710984584205247LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (1533710984584205261LL)));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (signed char)1)))))));
    var_14 *= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) var_12))))))));
    var_15 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((short) var_11))), (min((((unsigned int) var_6)), (((/* implicit */unsigned int) var_5))))));
    var_16 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) min((((/* implicit */short) var_12)), ((short)-12746)))) ? (max((((/* implicit */long long int) var_3)), (-1533710984584205237LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
}
