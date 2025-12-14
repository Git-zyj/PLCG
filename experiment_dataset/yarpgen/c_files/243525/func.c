/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243525
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
    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) | (var_11)))))) ? (((/* implicit */int) var_4)) : ((((+(((/* implicit */int) var_6)))) << (((((/* implicit */int) (unsigned char)78)) - (59)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)14])))))) : ((~(0ULL)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_10 [7] [7] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)239))));
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (!((!(((/* implicit */_Bool) (unsigned char)23)))));
                    }
                } 
            } 
        } 
        var_22 = (+(((/* implicit */int) (unsigned char)2)));
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_9 [i_0 - 3]))));
        var_24 = ((/* implicit */int) var_1);
    }
    var_25 = ((/* implicit */short) var_12);
}
