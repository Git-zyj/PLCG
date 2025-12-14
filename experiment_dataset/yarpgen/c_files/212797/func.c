/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212797
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
    var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) < (((/* implicit */int) (signed char)42))))), (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (9223372036854775807LL)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */long long int) max((((/* implicit */int) (signed char)120)), ((+((-(((/* implicit */int) (unsigned short)43079))))))));
        var_18 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_0 [i_0]))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
    }
    var_20 |= ((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> ((((-(((/* implicit */int) (signed char)-126)))) - (108)))))));
    var_21 = ((/* implicit */short) ((((((/* implicit */int) var_10)) % (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))))) - ((-(((/* implicit */int) ((8819443045190528328LL) < (((/* implicit */long long int) 10U)))))))));
}
