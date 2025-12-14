/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27660
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
    var_20 = (-(-945041969));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_1] [i_0 + 2])) : (((/* implicit */int) var_19)))), (((/* implicit */int) arr_3 [i_1] [i_0 - 3]))));
                    var_23 = max((min((var_10), ((unsigned short)39270))), (((/* implicit */unsigned short) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_6))))));
                }
                var_24 *= ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)7109)), (arr_4 [i_0 + 3] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned short) (unsigned short)28572))) : (((/* implicit */int) arr_6 [i_0 - 4] [i_0 - 4] [i_1 - 1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19))))) ? (((/* implicit */int) ((((/* implicit */int) (short)32647)) == (((/* implicit */int) (unsigned short)33027))))) : (((/* implicit */int) (unsigned short)49358))))));
                var_25 = ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned char)22)))));
            }
        } 
    } 
    var_26 += (+(((/* implicit */int) (unsigned short)49900)));
    var_27 *= ((/* implicit */short) var_9);
}
