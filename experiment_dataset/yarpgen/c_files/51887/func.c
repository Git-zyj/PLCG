/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51887
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
    var_15 = ((/* implicit */short) (-(-2233966392390682589LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) -2233966392390682589LL);
                var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (var_5)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-1)))) : ((~(((/* implicit */int) var_7)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (signed char)3);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_8)), (var_7))))) : (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (2554883137U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 36028728299487232LL)))))))) ? ((~(((((/* implicit */_Bool) (unsigned short)53877)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) var_4)))))) : (min(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */int) var_9))))))));
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) (unsigned short)21868)), (2233966392390682588LL))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_10)) : (var_13)))))));
}
