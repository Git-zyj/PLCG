/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232658
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
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) max((var_9), (var_1)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max(((unsigned short)65535), (var_4))), (var_9)))) ? ((-(((/* implicit */int) max((var_0), ((unsigned short)48657)))))) : ((-((-(((/* implicit */int) var_7))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62)) - (((/* implicit */int) ((unsigned short) max((arr_1 [i_0]), (var_4))))))))));
                    var_14 = min((min((arr_6 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 3]))), (((unsigned short) (unsigned short)6)));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((unsigned short) (unsigned short)4606))) : ((+(((/* implicit */int) var_8)))))))))));
                    var_16 |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                }
            } 
        } 
    } 
    var_17 = var_9;
}
