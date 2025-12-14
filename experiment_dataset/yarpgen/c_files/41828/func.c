/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41828
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
    var_19 = ((/* implicit */signed char) (unsigned short)55513);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) ((19U) << (((/* implicit */int) (_Bool)0)))))) | (((/* implicit */int) (_Bool)1))));
    var_21 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) 1686944412U))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 6839180U)) ? (min((1686944390U), (536870880U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1] [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (+(2608022882U)));
        arr_4 [i_0] = ((/* implicit */long long int) min(((unsigned short)1984), (((/* implicit */unsigned short) (_Bool)1))));
        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)63)), (536870898U)));
    }
}
