/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205153
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
    var_16 += ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((short) var_4));
        arr_5 [i_0] = ((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_2))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 4; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_17 -= ((/* implicit */unsigned int) ((_Bool) var_2));
                        var_18 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_1 [i_1] [i_2])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */short) arr_8 [i_3])), (var_14)))) : (((/* implicit */int) arr_6 [i_0]))))));
                        var_19 = var_11;
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (var_8))));
        var_20 = arr_6 [i_4];
        var_21 += ((/* implicit */long long int) arr_0 [i_4] [i_4]);
    }
    var_22 = ((/* implicit */short) var_9);
}
