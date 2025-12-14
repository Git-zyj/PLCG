/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45349
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-110))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -918562295489966492LL)) ? (2147483622) : (((/* implicit */int) (short)-15742))))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (4085062260U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))))))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_15)), (var_11))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((short) ((int) var_11))))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_20 *= ((int) var_1);
    var_21 = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((((/* implicit */int) var_0)), (var_15))) : (((((/* implicit */int) (short)-32765)) / (-1991052058)))))));
}
