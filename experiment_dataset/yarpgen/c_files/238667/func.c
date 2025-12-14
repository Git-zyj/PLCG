/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238667
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
    var_10 += ((/* implicit */unsigned char) ((int) var_4));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)23806))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_8)));
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 2003782940)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-10826)))) : ((+(((/* implicit */int) (short)-10826))))))), (((((/* implicit */_Bool) (+(310651628U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_2))))) : (3153936512U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1 - 1]) : (((/* implicit */long long int) 4U)))) : (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */long long int) 906269013U)) : (arr_1 [i_1 + 2])))));
                arr_9 [i_0 + 3] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : ((-(var_8)))))));
            }
        } 
    } 
}
