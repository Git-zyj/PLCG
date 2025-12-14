/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211086
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
    var_12 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)119)))))) : ((+(arr_1 [i_0])))))));
        var_14 -= ((/* implicit */long long int) (_Bool)1);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (short)28643);
        var_15 = (signed char)-127;
    }
    for (short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_16 = arr_2 [i_2] [i_3];
                        arr_19 [i_2] [i_3] [i_4] [i_5] = min((((/* implicit */unsigned long long int) min(((signed char)106), ((signed char)11)))), (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) -1LL)) : (6781334326560244817ULL))));
                        var_17 = ((/* implicit */_Bool) min(((short)13), (((/* implicit */short) (signed char)-17))));
                    }
                } 
            } 
        } 
    }
    var_18 += ((/* implicit */unsigned char) ((long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))));
}
