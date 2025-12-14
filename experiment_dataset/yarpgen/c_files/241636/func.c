/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241636
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((int) var_3));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 29360128U)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
    }
    var_19 &= ((/* implicit */signed char) var_15);
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) var_7)) : (2147483647)))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
    }
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */int) arr_0 [i_2]);
        var_20 = ((/* implicit */unsigned short) var_2);
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) -42378865))))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (97869942U)));
        var_23 = ((/* implicit */long long int) ((short) ((short) (~(((/* implicit */int) (_Bool)1))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_9 [i_3])))))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101))) : (29360128U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) arr_1 [i_3]))))))));
    }
}
