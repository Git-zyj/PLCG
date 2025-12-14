/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45440
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) 33521664)) ? (((/* implicit */int) (short)7927)) : (852925711))))))))));
        arr_4 [i_0] [i_0] = 2147483647;
        arr_5 [i_0] = ((/* implicit */unsigned char) var_8);
        var_11 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (4194304) : (((/* implicit */int) var_5)))))))), (((((/* implicit */int) var_4)) << (min((((/* implicit */unsigned int) (_Bool)0)), (var_0)))))));
        var_12 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (signed char)122)) || (((/* implicit */_Bool) (unsigned char)63)))) ? ((-(1261148955))) : (((((/* implicit */_Bool) var_7)) ? (-870749539) : (((/* implicit */int) var_4)))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1241538877))))) : (((/* implicit */int) var_8))))));
    }
    for (short i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-1241538897)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (1827255155))))));
        var_14 = ((/* implicit */int) var_8);
        var_15 += (+((+(((((/* implicit */_Bool) (signed char)126)) ? (var_3) : (((/* implicit */int) (_Bool)0)))))));
    }
    for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_16 = ((_Bool) (+(var_3)));
        var_17 = ((/* implicit */signed char) var_8);
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((var_8) ? ((-(var_3))) : (((((/* implicit */_Bool) (short)13731)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) var_3);
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) || ((_Bool)1)));
        var_19 = (!(((/* implicit */_Bool) 32764)));
    }
    var_20 = ((/* implicit */_Bool) (~(((((((/* implicit */int) (unsigned char)209)) & (((/* implicit */int) var_7)))) << (((var_3) - (857728382)))))));
    var_21 &= ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_2)));
    var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((unsigned short) var_0))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-116)), (var_0))))))));
}
