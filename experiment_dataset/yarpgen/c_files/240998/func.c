/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240998
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned short) ((int) ((signed char) (signed char)-1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((short) (signed char)6)))))));
        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((int) (unsigned short)0))) : (((unsigned int) var_9))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_18 -= ((/* implicit */long long int) ((int) (!(((_Bool) var_11)))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) ((signed char) (signed char)10))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))))));
            var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0]))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (1630621706022574187ULL))) : ((~(arr_0 [i_1])))));
            var_20 = ((/* implicit */_Bool) ((short) ((_Bool) ((unsigned short) var_4))));
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((int) arr_4 [i_0] [i_0]))))));
        }
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? ((-(((/* implicit */int) (signed char)-105)))) : ((~(((/* implicit */int) var_5)))))));
}
