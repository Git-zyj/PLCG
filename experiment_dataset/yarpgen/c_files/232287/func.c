/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232287
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) << ((((~(((/* implicit */int) (unsigned short)65529)))) + (65559)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_10) << (((((/* implicit */int) var_6)) - (21456))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */int) (short)-15269)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_21 &= arr_0 [i_0] [i_0];
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15259))) : (arr_0 [i_0] [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_24 = (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_2 [i_1]))))));
    }
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_2] [i_2]) : (((long long int) var_18)))));
        var_26 = ((/* implicit */unsigned int) var_8);
    }
}
