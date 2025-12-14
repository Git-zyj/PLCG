/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26036
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+(((/* implicit */int) (unsigned char)125))))));
    var_20 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_5);
        var_22 = arr_0 [i_0];
        var_23 = ((/* implicit */unsigned char) arr_0 [i_0 + 2]);
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)187)))));
        var_25 = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [i_1]))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((-(70368677068800ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_1] [i_1])))))));
        var_27 += ((/* implicit */short) ((((/* implicit */int) var_15)) != ((+(((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-64))));
    }
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */short) (((~(70368677068795ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77)))));
        arr_8 [i_2] &= ((/* implicit */_Bool) (signed char)-27);
        var_30 = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)41)))) + ((-((+(((/* implicit */int) arr_4 [i_2]))))))));
    }
}
