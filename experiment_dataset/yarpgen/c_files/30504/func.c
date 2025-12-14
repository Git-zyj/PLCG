/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30504
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
    var_20 = ((/* implicit */unsigned long long int) ((max((min((var_15), (((/* implicit */unsigned int) var_0)))), (var_15))) & (((/* implicit */unsigned int) max((469762048), (((/* implicit */int) min(((unsigned short)10), (((/* implicit */unsigned short) (unsigned char)255))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_4 [(_Bool)1] [i_0] |= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1073217536U)))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? ((+(var_17))) : (((((/* implicit */long long int) ((/* implicit */int) var_19))) & (var_17)))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_1] [i_1] = ((((/* implicit */int) (signed char)102)) > (12));
                    var_21 = ((/* implicit */int) (((+(var_9))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12))))))));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((+(-576459041))) : ((+(((/* implicit */int) var_13))))));
    }
}
