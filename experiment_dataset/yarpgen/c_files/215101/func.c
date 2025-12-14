/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215101
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
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > (var_18)));
    var_20 = (((+(((/* implicit */int) var_15)))) < (((/* implicit */int) (_Bool)1)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] = ((/* implicit */short) min(((+(((/* implicit */int) arr_2 [i_2] [i_2 - 3] [i_0])))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)6143))))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)63470)), (10355917806438772990ULL))))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))) ^ (var_5))))));
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [14LL] [i_0]))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (-4724508298078120316LL)))) % ((~(10355917806438772987ULL)))))));
        arr_13 [i_0] = (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))));
    }
}
