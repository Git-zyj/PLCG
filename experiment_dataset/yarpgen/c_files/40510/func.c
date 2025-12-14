/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40510
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) <= (var_15)));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned int) var_3)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((unsigned int) ((long long int) (signed char)124)));
        var_19 = ((/* implicit */short) ((260096U) != (min((((/* implicit */unsigned int) (unsigned short)65535)), (260096U)))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 260096U))));
        var_21 = ((/* implicit */short) ((((max((((/* implicit */unsigned int) (signed char)-11)), (260105U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((4294707211U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) : (((((((/* implicit */_Bool) (short)-14078)) || (((/* implicit */_Bool) 12344910455716155214ULL)))) ? (((((/* implicit */_Bool) 1342372183U)) ? (((/* implicit */unsigned int) 794666706)) : (3349006587U))) : (max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))))));
    }
    var_22 &= ((/* implicit */int) -6875481097433075103LL);
}
