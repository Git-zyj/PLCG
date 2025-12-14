/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3380
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(arr_3 [i_0] [i_1] [i_1])))), (min(((unsigned short)36046), ((unsigned short)29494)))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))))), ((-((+(((/* implicit */int) arr_1 [i_0]))))))));
                var_21 |= ((/* implicit */unsigned char) min((max(((~(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (unsigned short)19680)))))), (max((((/* implicit */int) min(((unsigned char)86), (((/* implicit */unsigned char) arr_0 [i_1] [i_0]))))), ((~(((/* implicit */int) var_4))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_16)), (var_15)))))))));
}
