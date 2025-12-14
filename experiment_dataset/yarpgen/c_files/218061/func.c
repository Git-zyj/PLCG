/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218061
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
    var_13 += ((/* implicit */_Bool) (~((~((-(((/* implicit */int) (signed char)0))))))));
    var_14 ^= (!((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)93))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
                        var_16 &= ((/* implicit */_Bool) (~((-((-(((/* implicit */int) var_4))))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
                        var_18 ^= ((/* implicit */short) (~((~((+(((/* implicit */int) var_1))))))));
                    }
                    var_19 = ((/* implicit */_Bool) (-((-((~(((/* implicit */int) arr_0 [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) var_10))))))));
}
