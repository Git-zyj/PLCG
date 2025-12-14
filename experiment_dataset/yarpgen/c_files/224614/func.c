/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224614
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_0);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) (_Bool)1)))))))));
                        var_19 = ((/* implicit */int) min((var_19), (var_15)));
                        var_20 -= (-(((/* implicit */int) (_Bool)1)));
                        arr_11 [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-43)))) ? (((/* implicit */int) (unsigned short)65520)) : (((var_9) ? (((int) var_2)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_12);
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)1))));
    var_23 = ((/* implicit */_Bool) ((var_9) ? (var_7) : (((/* implicit */long long int) var_1))));
}
