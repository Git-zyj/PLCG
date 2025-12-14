/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204286
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_16)) ^ (min((((/* implicit */int) (unsigned short)49408)), (1934015824))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                    var_21 = ((/* implicit */unsigned char) min(((unsigned short)16115), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)49390)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_6 [i_2])))) > (((/* implicit */int) ((arr_4 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))))));
                    var_22 = ((/* implicit */unsigned short) (-((-((-(((/* implicit */int) (unsigned short)49408))))))));
                    arr_8 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
