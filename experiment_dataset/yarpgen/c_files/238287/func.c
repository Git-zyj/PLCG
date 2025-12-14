/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238287
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (short)24741)) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)32765)))))));
    var_19 = ((/* implicit */_Bool) (signed char)-20);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] = (!((_Bool)0));
                var_20 *= (+(((/* implicit */int) ((arr_2 [(_Bool)1]) == (arr_1 [i_0])))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_2 [i_0 - 1]))))));
                var_22 = ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((signed char) var_12))) : (((/* implicit */int) (_Bool)1))))) >= (arr_2 [i_0]));
                var_23 *= (!(((/* implicit */_Bool) (((_Bool)0) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 2])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) var_8)) : (var_1)))) ? (0U) : (((/* implicit */unsigned int) (((_Bool)0) ? (-401189049) : (((((/* implicit */_Bool) 518327813U)) ? (((/* implicit */int) (_Bool)1)) : (-401189042))))))))));
}
