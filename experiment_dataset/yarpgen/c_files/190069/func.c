/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190069
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(arr_0 [20LL]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
        var_21 -= ((/* implicit */signed char) 8613167904162286812LL);
    }
    var_22 = ((/* implicit */unsigned short) var_0);
    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (8613167904162286812LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_18))))) : (8613167904162286806LL)));
}
