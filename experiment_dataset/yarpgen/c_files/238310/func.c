/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238310
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
    var_14 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_15 += var_2;
                        var_16 = ((/* implicit */unsigned int) (_Bool)1);
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]))) < (var_1)));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)58))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            arr_12 [i_0] [i_0] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10))))));
        }
        arr_13 [i_0] = ((/* implicit */_Bool) var_13);
        var_19 = ((/* implicit */unsigned int) var_11);
        var_20 = ((((/* implicit */int) var_9)) < (((/* implicit */int) var_3)));
    }
}
