/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36048
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
    var_16 = ((/* implicit */unsigned char) ((493824674) << ((((-((~(1572864U))))) - (1572864U)))));
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_2), (((/* implicit */signed char) (_Bool)1))))) & (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2)))))) - (((/* implicit */int) var_8))));
    var_18 = ((short) (!(((/* implicit */_Bool) ((short) (short)25564)))));
    var_19 = ((/* implicit */signed char) min((((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6)))), (((/* implicit */int) (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-13)))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((((/* implicit */int) (signed char)50)) + (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3])))))))));
                        var_22 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)139))));
                        arr_13 [i_0] [i_3] [i_2] [i_3] [i_3] = ((/* implicit */int) var_4);
                    }
                    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        var_23 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) arr_15 [(unsigned char)10] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1])))));
                        var_24 = var_3;
                    }
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (((+((-2147483647 - 1)))) % (((/* implicit */int) min((var_0), ((unsigned char)77))))));
                        arr_18 [i_5] [i_1] [i_2] [i_5] = (~(((/* implicit */int) var_5)));
                    }
                    var_26 = max((max((((/* implicit */int) arr_10 [i_0])), (arr_0 [i_1] [i_1]))), (max(((+(((/* implicit */int) var_2)))), (arr_0 [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
