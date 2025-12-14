/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196086
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
    var_14 -= ((/* implicit */unsigned int) min((min((((/* implicit */int) (signed char)-5)), (var_5))), (((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (signed char)-2)))) : (((/* implicit */int) ((signed char) (signed char)-4)))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) << (((((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */int) (signed char)-16)))) - (1921538284))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) (-((+(((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_17 |= ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0 - 1]));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((var_5) ^ (((((/* implicit */_Bool) 4503599610593280ULL)) ? (822817280) : (((/* implicit */int) (signed char)28)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)38391))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5)))))) : (var_0)));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) <= (var_12))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (var_0) : (((/* implicit */unsigned int) min((((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_4)))))), (max((((/* implicit */int) (signed char)4)), (var_5)))))))))));
}
