/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5308
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((min((16594345748533931667ULL), (((/* implicit */unsigned long long int) (signed char)-9)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (var_15) : (-2014281524)))))))));
        var_20 = ((/* implicit */unsigned long long int) (((+((~(((/* implicit */int) arr_2 [i_0])))))) != (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (16594345748533931667ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_12))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned long long int) arr_5 [i_1] [(_Bool)1]);
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)52))))), (min((((/* implicit */unsigned long long int) var_6)), (1852398325175619948ULL)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_5 [i_2] [16ULL]))));
        arr_10 [i_2] = ((/* implicit */unsigned int) 5ULL);
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)52))) != (1852398325175619936ULL)));
    }
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1852398325175619948ULL)) ? (((/* implicit */unsigned long long int) var_15)) : (var_5)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-31997))))) : ((+(27703101U))))))));
    var_26 = ((/* implicit */signed char) var_15);
}
