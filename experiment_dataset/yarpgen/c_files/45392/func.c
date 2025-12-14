/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45392
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_1)), ((unsigned short)52926))), (((/* implicit */unsigned short) var_0)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned char) var_1)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2053679478)))))))) ? ((((!(arr_0 [i_0]))) ? (939837092) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned char) min((-1733432459), (((/* implicit */int) arr_1 [i_0]))))))));
        var_11 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_7)))) ? (((int) 5208091357317279547ULL)) : (((/* implicit */int) (signed char)0))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29031)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (max((((/* implicit */int) arr_0 [i_0])), (var_7))) : (((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), ((signed char)105))))));
    }
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) ((((/* implicit */int) (signed char)125)) * (((/* implicit */int) (unsigned char)57))))))))));
}
