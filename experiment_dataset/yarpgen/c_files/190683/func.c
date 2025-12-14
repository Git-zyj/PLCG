/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190683
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (((+(((var_1) + (((/* implicit */int) var_11)))))) >= (((/* implicit */int) min((var_11), (((/* implicit */short) arr_1 [i_0 + 1])))))));
        var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))) * (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1] [i_0 - 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) (unsigned char)28);
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_11))));
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_13 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3]))) * ((-(2445088416406947855ULL)))))));
            var_15 *= ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_1] [i_3])) : (((/* implicit */int) arr_5 [(unsigned char)21]))))))));
        }
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (min((arr_12 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_12)))))))))));
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) (unsigned short)34299)), ((~(((/* implicit */int) arr_6 [i_1] [i_1])))))) : (((/* implicit */int) arr_11 [i_5] [i_4] [i_1])))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))))))))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) (((((~(((/* implicit */int) arr_7 [i_4])))) + (2147483647))) >> ((((~(((/* implicit */int) var_5)))) + (147)))))) | (((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_4] [i_5]))))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_18 [i_5])))))))));
            }
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                var_20 *= ((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                var_21 += ((/* implicit */unsigned long long int) arr_18 [i_4]);
                var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((_Bool)1))))));
            }
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (unsigned char)112))));
        }
    }
    var_24 = ((unsigned char) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_2))))));
}
