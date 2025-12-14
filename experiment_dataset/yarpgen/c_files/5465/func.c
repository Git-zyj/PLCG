/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5465
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                var_12 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned short) var_10))))) | ((((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (arr_6 [i_0] [(signed char)7] [i_0 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2057)) ? (((/* implicit */int) (unsigned short)2054)) : (((/* implicit */int) (unsigned char)160)))))))));
                arr_8 [i_0 - 1] [i_1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) ((unsigned short) var_5))), (((((/* implicit */int) (unsigned short)0)) << (((arr_1 [i_0] [i_0]) - (1494948408))))))))) : (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) ((unsigned short) var_5))), (((((/* implicit */int) (unsigned short)0)) << (((((arr_1 [i_0] [i_0]) - (1494948408))) + (1982798999)))))))));
                var_13 = ((signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31124))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [4U] [i_0]))))));
                var_14 *= ((/* implicit */signed char) arr_7 [(_Bool)1] [i_1] [(_Bool)1]);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_3);
}
