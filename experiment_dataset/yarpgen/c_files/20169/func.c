/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20169
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
    var_13 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 *= ((/* implicit */short) 3810664876U);
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_10))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((max((var_6), (((/* implicit */unsigned long long int) var_4)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)75)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))) == ((~(3810664876U))))))) : (((((/* implicit */_Bool) 1506506900U)) ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_7 [i_0] [i_0 - 2] [i_0 - 1] [i_0]))));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (((+(var_6))) >> ((((~(((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_10))))))) + (137))))))));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                    var_18 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(unsigned char)0] [(unsigned char)0]))))) ? (var_11) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))), (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned long long int) var_10);
    }
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 *= ((/* implicit */unsigned char) var_2);
}
