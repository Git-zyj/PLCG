/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196438
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
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 = ((/* implicit */unsigned char) var_11);
    var_21 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_15)), ((-(var_11))))), (((4194303) - (((((/* implicit */int) var_4)) + (((/* implicit */int) var_12))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_3 [i_1] [i_0])))))));
                        var_24 = ((1361558187) << (((((/* implicit */int) var_7)) - (125))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) << (((((/* implicit */int) arr_3 [i_0] [i_0])) + (104))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_10 [i_4] = min((((((arr_9 [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_9 [(unsigned char)1])))) & (arr_8 [i_4]))), (arr_8 [i_4]));
        arr_11 [i_4] = var_16;
        arr_12 [i_4] = ((/* implicit */unsigned long long int) arr_9 [i_4]);
    }
}
