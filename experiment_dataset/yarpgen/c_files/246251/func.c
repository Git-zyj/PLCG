/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246251
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
    var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((unsigned int) (-(var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = (~(19U));
        var_19 = ((/* implicit */unsigned long long int) (!(arr_2 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((+(2563305030278628561LL)))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_7 [(unsigned char)16] [(unsigned char)16] = ((/* implicit */long long int) (+(var_4)));
        var_20 = var_1;
        var_21 = max((arr_5 [17U]), (((/* implicit */unsigned int) arr_4 [i_1] [17LL])));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) max(((~(0U))), (var_8)));
                    var_23 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) (-(-2309943016954392972LL))))));
                    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_2 - 1])))), (((((/* implicit */int) arr_9 [i_1 + 2] [i_2 + 1])) - (((/* implicit */int) var_0))))));
                    arr_15 [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_13))))))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_8 [i_1 + 2])))) && (var_6)));
    }
}
