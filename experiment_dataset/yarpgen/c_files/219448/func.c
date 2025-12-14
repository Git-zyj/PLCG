/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219448
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_10 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */long long int) (~(min((var_6), (arr_0 [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_0 [i_0])))) ? (((/* implicit */long long int) arr_0 [i_0])) : (((4789522208001986158LL) - (4789522208001986176LL)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned short)39236)) : (((/* implicit */int) (short)-28032)))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_0])))) && (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))))))))));
    }
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_3)), (6260356298255061924ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))))))));
}
