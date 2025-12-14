/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209002
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
    var_13 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned char)16)) > (var_9))))))) % (var_11));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 3872279185U))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */short) (((-(((/* implicit */int) (short)13482)))) * ((~(((/* implicit */int) (_Bool)1))))));
                        var_16 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)28672)))) <= (((-536870912) | (((/* implicit */int) (short)-17065))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)1)))) < ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
    }
}
