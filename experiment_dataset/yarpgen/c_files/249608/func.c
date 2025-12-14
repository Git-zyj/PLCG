/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249608
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) >> (((((((/* implicit */_Bool) 1303540616U)) || (((/* implicit */_Bool) (unsigned short)3434)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2991426680U))))) : (((((/* implicit */_Bool) (unsigned short)23687)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)23145))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((arr_0 [(_Bool)1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (2991426680U))) << (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned short)5)) : (((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((3361232227U) | (arr_3 [i_0]))))));
                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? ((-(arr_3 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) (!(arr_4 [i_0] [i_0] [(unsigned short)12]))))));
            }
        } 
    } 
}
