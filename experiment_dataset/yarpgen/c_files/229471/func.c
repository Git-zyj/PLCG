/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229471
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_12))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (signed char)-76)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
    var_21 = ((/* implicit */_Bool) max((max((max((((/* implicit */long long int) var_11)), (var_18))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_15)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29267)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_14))))))) ^ (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)75)), (var_7)))) < (((/* implicit */int) arr_3 [i_0])))))));
        var_22 = ((/* implicit */unsigned int) ((arr_1 [i_0]) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + ((-(((/* implicit */int) var_13)))))))));
    }
    var_23 *= ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))) || (min(((((_Bool)1) && (((/* implicit */_Bool) var_15)))), (((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (signed char)-75)))))));
}
