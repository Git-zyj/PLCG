/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227545
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */int) var_13)) & (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((var_2), (var_11)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_9 [(short)10] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) var_15)))));
                        arr_10 [i_0] = ((/* implicit */int) ((short) max((max((((/* implicit */unsigned short) var_6)), (arr_4 [i_0]))), (arr_7 [2LL] [i_0] [i_1]))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = var_10;
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_2))));
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) max((((/* implicit */short) arr_5 [i_0] [i_1 - 2] [(signed char)18])), (var_13))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] [(short)12] [(unsigned short)17] [i_0] = ((/* implicit */short) 1006632960);
                        var_21 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    }
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (arr_7 [i_1 - 1] [i_1] [i_1])))))))));
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [(short)13]))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) min((min((min((((/* implicit */int) var_10)), (1006632960))), (((/* implicit */int) var_13)))), (((/* implicit */int) var_17))));
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */short) (signed char)43)))), (((/* implicit */short) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_16))))));
}
