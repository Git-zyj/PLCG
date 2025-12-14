/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218225
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) var_4)), (7343688560242637316LL)));
    var_12 = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)0), ((unsigned short)0))))) == (var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((((/* implicit */int) min((var_9), (((/* implicit */signed char) arr_0 [i_0 - 1] [i_0]))))) == (((arr_0 [7U] [i_0]) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) arr_4 [i_0 + 1]))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0])), (arr_4 [i_0 + 1])))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18890)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)13997))))) ? (((/* implicit */int) max(((unsigned short)30652), ((unsigned short)9)))) : ((-(((/* implicit */int) (signed char)80))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1107178857210485398LL)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_4 [i_0 - 2]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_9);
}
