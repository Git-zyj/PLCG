/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193396
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_12))) : (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2455153957U)))))), (var_11)));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [(short)3])))) ? (max((0U), (((/* implicit */unsigned int) (unsigned char)2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                arr_6 [(unsigned char)12] = ((/* implicit */short) (unsigned char)55);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)85)) : ((-(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((min((var_1), (var_9))), (((/* implicit */unsigned long long int) var_10)))) : (var_4)));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)93))));
}
