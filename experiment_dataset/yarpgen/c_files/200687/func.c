/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200687
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-16419)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (8126464ULL))), (((/* implicit */unsigned long long int) min((var_10), (var_4))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) 13674654253830345809ULL)) ? (242833621) : (-991942878))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max(((-((-(((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) ((signed char) arr_3 [i_1] [i_1] [i_0]))))))));
                var_13 = (+(((/* implicit */int) arr_4 [i_1] [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_2)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)34394)))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))))));
    var_15 = (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))))))) : (min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44393))))))));
}
