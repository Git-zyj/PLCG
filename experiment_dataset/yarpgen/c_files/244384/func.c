/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244384
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
    var_20 -= ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((unsigned int) (unsigned short)15251))) ? (((((/* implicit */_Bool) (unsigned short)39408)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15251))) : (14U))) : (min((3U), (((/* implicit */unsigned int) var_17)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)1100)))));
    var_21 |= ((/* implicit */unsigned short) min(((~(1108512988U))), (((/* implicit */unsigned int) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 += ((/* implicit */unsigned short) max((((((unsigned int) 602478220U)) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39408))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 2568318374U))))))));
                var_23 = max((((3664720241U) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (31237))))), (((((/* implicit */_Bool) 3893152904U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50294))) : (2036786871U))));
                arr_4 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (var_14)))) << (((max((((/* implicit */unsigned int) arr_0 [(unsigned short)11])), (var_9))) - (219003592U)))))));
            }
        } 
    } 
    var_24 = (-(((((((/* implicit */_Bool) var_17)) ? (2777008225U) : (var_15))) >> ((((+(((/* implicit */int) (unsigned short)39385)))) - (39363))))));
}
