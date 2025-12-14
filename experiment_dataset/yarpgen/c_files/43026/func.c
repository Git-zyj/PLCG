/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43026
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)84)) ? (16406754557852376329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    var_21 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)69)) + (((/* implicit */int) (signed char)-85))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)84))))) : (0LL)))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((-1073741824) < (((/* implicit */int) (unsigned char)60)))))) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) (short)4096)), (1179167821))), (((/* implicit */int) (unsigned char)0))))) : (((unsigned int) 2322065592566522496ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] &= ((/* implicit */unsigned short) 72983791U);
                var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 50331648U)) ? (((/* implicit */int) (short)-15737)) : (1179167808)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))));
            }
        } 
    } 
}
