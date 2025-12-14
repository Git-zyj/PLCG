/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19482
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 347166474)))))))));
        var_14 = ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */_Bool) (short)31369)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)4550)))), (((/* implicit */int) ((_Bool) var_12))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(15119334615641491376ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (max((arr_1 [i_0]), (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))));
        var_15 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) arr_1 [(signed char)8])) ? (max((((/* implicit */long long int) var_7)), (-7182777636764450912LL))) : (((/* implicit */long long int) min((var_11), (3939269286U))))))));
        var_16 |= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((~(arr_1 [(short)8]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -630189419)) && (((/* implicit */_Bool) var_4)))))))))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (unsigned char)133))))) : (min((((/* implicit */long long int) var_8)), (var_0)))))));
    }
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
}
